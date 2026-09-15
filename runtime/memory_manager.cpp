#include "memory_manager.h"
#include <sys/mman.h>
#include <unistd.h>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <file.h>
#include <image.h>

MemoryManager& MemoryManager::Instance() {
    static MemoryManager instance;
    return instance;
}

MemoryManager::MemoryManager() = default;

MemoryManager::~MemoryManager() {
    Shutdown();
}

bool MemoryManager::Initialize() {
    // 16 GB virtual address space allocation (MAP_NORESERVE costs zero physical RAM).
    // Guest base is placed at +4 GB offset (0x100000000) within this region so that
    // negative offsets produced by PPC_LOOKUP_FUNC(m_base, 0) (offset -2.16 GB) fall safely
    // within the mapped buffer.
    m_mappedSize = 0x400000000ull; // 16 GB

    m_rawAlloc = static_cast<uint8_t*>(mmap(
        nullptr,
        m_mappedSize,
        PROT_READ | PROT_WRITE,
        MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE,
        -1,
        0
    ));

    if (m_rawAlloc == MAP_FAILED) {
        std::cerr << "[MemoryManager] Error: Failed to allocate guest memory space with mmap!" << std::endl;
        m_rawAlloc = nullptr;
        m_base = nullptr;
        return false;
    }

    // Set guest virtual address base at +4 GB offset
    m_base = m_rawAlloc + 0x100000000ull;

    std::cout << "[MemoryManager] Allocated 16 GB virtual address space (guest base: 0x"
              << std::hex << reinterpret_cast<uintptr_t>(m_base) << std::dec << ")" << std::endl;

    // Pre-initialize ProcessType at offset 379 (0x17B) of default heap (1 = Title Process)
    *(m_base + 0x10000000 + 379) = 1;

    return true;
}

void MemoryManager::Shutdown() {
    if (m_rawAlloc != nullptr && m_rawAlloc != MAP_FAILED) {
        munmap(m_rawAlloc, m_mappedSize);
        m_rawAlloc = nullptr;
        m_base = nullptr;
    }
}

bool MemoryManager::LoadXex(const std::string& xexPath) {
    if (!m_base) {
        std::cerr << "[MemoryManager] Error: Cannot load XEX before MemoryManager is initialized." << std::endl;
        return false;
    }

    std::cout << "[MemoryManager] Loading executable: " << xexPath << " ..." << std::endl;
    const auto fileData = LoadFile(xexPath.c_str());
    if (fileData.empty()) {
        std::cerr << "[MemoryManager] Error: Could not read file " << xexPath << std::endl;
        return false;
    }

    Image image = Image::ParseImage(fileData.data(), fileData.size());
    if (image.size == 0) {
        std::cerr << "[MemoryManager] Error: Failed to parse XEX2 image!" << std::endl;
        return false;
    }

    m_imageBase = image.base;
    m_imageSize = image.size;
    m_entryPoint = image.entry_point;

    std::cout << std::hex << std::setfill('0');
    std::cout << "[MemoryManager] XEX parsed successfully:" << std::endl;
    std::cout << "  - Base:        0x" << m_imageBase << std::endl;
    std::cout << "  - Size:        0x" << m_imageSize << " (" << std::dec << m_imageSize << " bytes)" << std::hex << std::endl;
    std::cout << "  - Entry Point: 0x" << m_entryPoint << std::endl;

    // Load all sections into base + section.base
    std::cout << "[MemoryManager] Mapping " << std::dec << image.sections.size() << " sections to guest memory..." << std::endl;
    for (const auto& sec : image.sections) {
        if (sec.size > 0 && sec.data != nullptr) {
            uint8_t* dest = m_base + sec.base;
            size_t rva = (sec.base >= m_imageBase) ? (sec.base - m_imageBase) : 0;
            size_t copySize = 0;
            if (rva < m_imageSize) {
                copySize = std::min(static_cast<size_t>(sec.size), static_cast<size_t>(m_imageSize - rva));
            }
            if (copySize > 0) {
                std::memcpy(dest, sec.data, copySize);
            }

            std::cout << "  - Section " << std::left << std::setw(12) << std::setfill(' ') << sec.name
                      << " -> Guest VA: 0x" << std::hex << std::right << std::setw(8) << std::setfill('0') << sec.base
                      << " (Size: 0x" << sec.size << ", Copied: 0x" << copySize << ")";
            if (sec.flags & SectionFlags_Code) {
                std::cout << " [CODE]";
            }
            std::cout << std::endl;
        }
    }
    std::cout << std::dec;

    return true;
}

static void SafeIndirectPPCFunc(struct PPCContext& __restrict__ ctx, uint8_t* base) {
    (void)base;
    std::cerr << "\033[1;33m[Runtime] Warning: Unmapped or null indirect function call intercepted! CTR=0x"
              << std::hex << ctx.ctr.u64 << ", LR=0x" << ctx.lr << std::dec << "\033[0m" << std::endl;
}

void MemoryManager::InitializeLookupTable() {
    if (!m_base) {
        std::cerr << "[MemoryManager] Error: Base pointer is null in InitializeLookupTable!" << std::endl;
        return;
    }

    std::cout << "[MemoryManager] Initializing indirect function lookup table with safe dispatch..." << std::endl;

    // Fill table with safe fallback to catch unmapped indirect calls
    size_t tableSlots = (PPC_CODE_SIZE * 2) / sizeof(PPCFunc*);
    PPCFunc** tableBase = reinterpret_cast<PPCFunc**>(m_base + PPC_IMAGE_BASE + PPC_IMAGE_SIZE);
    std::fill_n(tableBase, tableSlots, &SafeIndirectPPCFunc);

    size_t count = 0;
    for (size_t i = 0; PPCFuncMappings[i].guest != 0; ++i) {
        uint32_t guest_addr = PPCFuncMappings[i].guest;
        PPCFunc* host_func = PPCFuncMappings[i].host;

        if (guest_addr >= PPC_CODE_BASE && guest_addr < (PPC_CODE_BASE + PPC_CODE_SIZE)) {
            PPC_LOOKUP_FUNC(m_base, guest_addr) = host_func;
            count++;
        }
    }

    // Explicitly intercept null indirect calls (CTR = 0)
    PPC_LOOKUP_FUNC(m_base, 0) = &SafeIndirectPPCFunc;

    std::cout << "[MemoryManager] Successfully mapped " << count << " PPC functions into lookup table." << std::endl;
}

uint32_t MemoryManager::AllocateGuestMemory(size_t size, uint32_t alignment) {
    std::lock_guard<std::mutex> lock(m_allocMutex);

    if (alignment < 4) alignment = 4;
    uint32_t alignedAddr = (m_heapCurrent + alignment - 1) & ~(alignment - 1);
    uint32_t next = alignedAddr + static_cast<uint32_t>(size);

    if (next >= m_heapLimit) {
        std::cerr << "[MemoryManager] Error: Guest heap exhaustion!" << std::endl;
        return 0;
    }

    m_heapCurrent = next;
    m_allocations[alignedAddr] = size;

    // Zero allocated memory
    std::memset(m_base + alignedAddr, 0, size);

    // If allocation is >= 512 bytes, mark ProcessType at offset 379 (0x17B) as Title Process (1)
    if (size >= 512) {
        *(m_base + alignedAddr + 379) = 1;
    }

    return alignedAddr;
}

bool MemoryManager::FreeGuestMemory(uint32_t guestAddr) {
    std::lock_guard<std::mutex> lock(m_allocMutex);
    auto it = m_allocations.find(guestAddr);
    if (it != m_allocations.end()) {
        m_allocations.erase(it);
        return true;
    }
    return false;
}

size_t MemoryManager::QueryAllocationSize(uint32_t guestAddr) {
    std::lock_guard<std::mutex> lock(m_allocMutex);
    auto it = m_allocations.find(guestAddr);
    if (it != m_allocations.end()) {
        return it->second;
    }
    return 0;
}

bool MemoryManager::FindAllocation(uint32_t addr, uint32_t& baseOut, size_t& sizeOut) {
    std::lock_guard<std::mutex> lock(m_allocMutex);
    for (const auto& [allocBase, allocSize] : m_allocations) {
        if (addr >= allocBase && addr < allocBase + allocSize) {
            baseOut = allocBase;
            sizeOut = allocSize;
            return true;
        }
    }
    return false;
}
