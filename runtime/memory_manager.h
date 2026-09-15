#pragma once
#include <cstdint>
#include <cstddef>
#include <string>
#include <unordered_map>
#include <vector>
#include <mutex>
#include "ppc_context.h"

class MemoryManager {
public:
    static MemoryManager& Instance();

    bool Initialize();
    void Shutdown();

    bool LoadXex(const std::string& xexPath);
    void InitializeLookupTable();

    uint32_t AllocateGuestMemory(size_t size, uint32_t alignment = 4096);
    bool FreeGuestMemory(uint32_t guestAddr);
    size_t QueryAllocationSize(uint32_t guestAddr);
    bool FindAllocation(uint32_t addr, uint32_t& baseOut, size_t& sizeOut);

    uint8_t* GetBase() const { return m_base; }
    size_t GetImageBase() const { return m_imageBase; }
    uint32_t GetImageSize() const { return m_imageSize; }
    size_t GetEntryPoint() const { return m_entryPoint; }

    uint32_t GetStackTop() const { return m_stackTop; }

private:
    MemoryManager();
    ~MemoryManager();

    uint8_t* m_rawAlloc{ nullptr };
    uint8_t* m_base{ nullptr };
    size_t m_mappedSize{ 0 };

    size_t m_imageBase{ 0 };
    uint32_t m_imageSize{ 0 };
    size_t m_entryPoint{ 0 };

    uint32_t m_stackTop{ 0x70000000 };
    uint32_t m_heapCurrent{ 0x10000000 };
    uint32_t m_heapLimit{ 0x3F000000 };

    std::mutex m_allocMutex;
    std::unordered_map<uint32_t, size_t> m_allocations;
};
