#include "hle_stubs.h"
#include "memory_manager.h"
#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <mutex>
#include <unordered_map>
#include <cstdarg>
#include <algorithm>
#include <atomic>
#include <memory>

namespace {
    bool g_verboseHle = false;
    std::mutex g_csMutex;
    std::unordered_map<uint32_t, std::unique_ptr<std::recursive_mutex>> g_criticalSections;

    // TLS emulation (64 slots per thread)
    constexpr size_t MAX_TLS_SLOTS = 64;
    bool g_tlsAllocated[MAX_TLS_SLOTS] = { false };
    thread_local uint64_t t_tlsValues[MAX_TLS_SLOTS] = { 0 };
    std::mutex g_tlsMutex;

    // Guest Thread Management
    struct GuestThread {
        uint32_t id{ 0 };
        uint32_t handle{ 0 };
        uint32_t startAddress{ 0 };
        uint32_t startContext{ 0 };
        uint32_t stackAlloc{ 0 };
        uint32_t stackTop{ 0 };
        std::atomic<bool> resumed{ false };
        std::thread hostThread;
    };

    std::mutex g_threadMutex;
    std::unordered_map<uint32_t, std::shared_ptr<GuestThread>> g_threadsByHandle;
    uint32_t g_nextThreadHandle = 0x5000;
}

namespace HLE {
    void Initialize() {
        std::cout << "[HLE] Initialized High-Level Emulation Subsystem." << std::endl;
    }

    void SetVerboseLogging(bool verbose) {
        g_verboseHle = verbose;
    }
}

#define HLE_LOG(func) do { \
    if (g_verboseHle) { \
        std::cout << "[HLE] " << func << " called (r3=0x" << std::hex << ctx.r3.u64 \
                  << ", r4=0x" << ctx.r4.u64 << ", r5=0x" << ctx.r5.u64 \
                  << ", lr=0x" << ctx.lr << std::dec << ")" << std::endl; \
    } \
} while(0)

#define HLE_STUB_DEFAULT(name) \
PPC_FUNC(__imp__##name) { \
    HLE_LOG(#name); \
    ctx.r3.u64 = 0; \
}

// Native override for weakly linked CRT strlen
PPC_FUNC(sub_8212D2B0) {
    uint32_t strAddr = ctx.r3.u32;
    if (strAddr != 0) {
        ctx.r3.u64 = strlen(reinterpret_cast<const char*>(base + strAddr));
    } else {
        ctx.r3.u64 = 0;
    }
}

// Native override for weakly linked sub_82BBCC38 to prevent null indirect virtual method calls
PPC_FUNC(sub_82BBCC38) {
    uint32_t objA = ctx.r3.u32;
    uint32_t newListener = ctx.r4.u32;

    if (objA != 0) {
        uint32_t oldListener = PPC_LOAD_U32(objA + 184);
        if (oldListener != 0) {
            uint32_t vtbl = PPC_LOAD_U32(oldListener);
            if (vtbl != 0) {
                uint32_t func = PPC_LOAD_U32(vtbl + 4);
                if (func >= PPC_CODE_BASE && func < (PPC_CODE_BASE + PPC_CODE_SIZE)) {
                    ctx.r3.u64 = oldListener;
                    ctx.r4.u64 = objA;
                    ctx.lr = 0x82BBCC74;
                    PPC_CALL_INDIRECT_FUNC(func);
                }
            }
        }
        PPC_STORE_U32(objA + 184, newListener);
    }

    if (newListener != 0) {
        uint32_t vtbl = PPC_LOAD_U32(newListener);
        if (vtbl != 0) {
            uint32_t func = PPC_LOAD_U32(vtbl + 0);
            if (func >= PPC_CODE_BASE && func < (PPC_CODE_BASE + PPC_CODE_SIZE)) {
                ctx.r3.u64 = newListener;
                ctx.r4.u64 = objA;
                ctx.lr = 0x82BBCC98;
                PPC_CALL_INDIRECT_FUNC(func);
            } else {
                std::cout << "[Runtime] Warning: sub_82BBCC38 listener 0x" << std::hex << newListener
                          << " has invalid vtable[0] func=0x" << func << std::dec << std::endl;
            }
        } else {
            std::cout << "[Runtime] Warning: sub_82BBCC38 listener 0x" << std::hex << newListener
                      << " has null vtable (skipping virtual attach call)" << std::dec << std::endl;
        }
    }
}


HLE_STUB_DEFAULT(XamLoaderGetLaunchDataSize)

HLE_STUB_DEFAULT(XamLoaderGetLaunchData)

HLE_STUB_DEFAULT(XamLoaderLaunchTitle)

HLE_STUB_DEFAULT(XamShowMessageBoxUIEx)

// Custom HLE implementation for XGetLanguage
PPC_FUNC(__imp__XGetLanguage) {
    HLE_LOG("XGetLanguage");
    ctx.r3.u64 = 1; // 1 = English (XC_LANGUAGE_ENGLISH)
}

// Custom HLE implementation for XGetAVPack
PPC_FUNC(__imp__XGetAVPack) {
    HLE_LOG("XGetAVPack");
    ctx.r3.u64 = 6; // XC_AVPACK_HDTV
}

// Custom HLE implementation for XamLoaderTerminateTitle
PPC_FUNC(__imp__XamLoaderTerminateTitle) {
    std::cout << "\033[1;33m[HLE] XamLoaderTerminateTitle called by game!\033[0m" << std::endl;
    ctx.r3.u64 = STATUS_SUCCESS;
}

HLE_STUB_DEFAULT(XamTaskShouldExit)

HLE_STUB_DEFAULT(XamTaskCloseHandle)

HLE_STUB_DEFAULT(XamTaskSchedule)

// Custom HLE implementation for RtlInitializeCriticalSection
PPC_FUNC(__imp__RtlInitializeCriticalSection) {
    uint32_t csAddr = ctx.r3.u32;
    std::lock_guard<std::mutex> lock(g_csMutex);
    g_criticalSections[csAddr] = std::make_unique<std::recursive_mutex>();
    ctx.r3.u64 = STATUS_SUCCESS;
}

// Custom HLE implementation for RtlLeaveCriticalSection
PPC_FUNC(__imp__RtlLeaveCriticalSection) {
    uint32_t csAddr = ctx.r3.u32;
    std::recursive_mutex* mtx = nullptr;
    {
        std::lock_guard<std::mutex> lock(g_csMutex);
        auto it = g_criticalSections.find(csAddr);
        if (it != g_criticalSections.end()) {
            mtx = it->second.get();
        }
    }
    if (mtx) mtx->unlock();
    ctx.r3.u64 = STATUS_SUCCESS;
}

// Custom HLE implementation for RtlEnterCriticalSection
PPC_FUNC(__imp__RtlEnterCriticalSection) {
    uint32_t csAddr = ctx.r3.u32;
    std::recursive_mutex* mtx = nullptr;
    {
        std::lock_guard<std::mutex> lock(g_csMutex);
        auto it = g_criticalSections.find(csAddr);
        if (it != g_criticalSections.end()) {
            mtx = it->second.get();
        } else {
            auto newMtx = std::make_unique<std::recursive_mutex>();
            mtx = newMtx.get();
            g_criticalSections[csAddr] = std::move(newMtx);
        }
    }
    if (mtx) mtx->lock();
    ctx.r3.u64 = STATUS_SUCCESS;
}

HLE_STUB_DEFAULT(NtSetInformationFile)

// Custom HLE implementation for RtlCompareStringN
PPC_FUNC(__imp__RtlCompareStringN) {
    uint32_t s1 = ctx.r3.u32;
    uint32_t l1 = ctx.r4.u32;
    uint32_t s2 = ctx.r5.u32;
    uint32_t l2 = ctx.r6.u32;
    int caseInsensitive = ctx.r7.u32;
    size_t len = std::min(l1, l2);
    int res = 0;
    if (s1 && s2 && len > 0) {
        const char* str1 = reinterpret_cast<const char*>(base + s1);
        const char* str2 = reinterpret_cast<const char*>(base + s2);
        res = caseInsensitive ? strncasecmp(str1, str2, len) : strncmp(str1, str2, len);
    }
    ctx.r3.s64 = res;
}

// Custom HLE implementation for NtClose
PPC_FUNC(__imp__NtClose) {
    ctx.r3.u64 = STATUS_SUCCESS;
}

// Custom HLE implementation for NtWaitForSingleObjectEx
PPC_FUNC(__imp__NtWaitForSingleObjectEx) {
    ctx.r3.u64 = STATUS_SUCCESS;
}

HLE_STUB_DEFAULT(NtWriteFile)

// Custom HLE implementation for RtlInitAnsiString
PPC_FUNC(__imp__RtlInitAnsiString) {
    uint32_t destAddr = ctx.r3.u32;
    uint32_t srcAddr = ctx.r4.u32;
    if (destAddr != 0) {
        GuestAnsiString* ansi = reinterpret_cast<GuestAnsiString*>(base + destAddr);
        if (srcAddr != 0) {
            const char* src = reinterpret_cast<const char*>(base + srcAddr);
            uint16_t len = static_cast<uint16_t>(strlen(src));
            ansi->length = __builtin_bswap16(len);
            ansi->maximumLength = __builtin_bswap16(len + 1);
            ansi->buffer = __builtin_bswap32(srcAddr);
        } else {
            ansi->length = 0;
            ansi->maximumLength = 0;
            ansi->buffer = 0;
        }
    }
    ctx.r3.u64 = 0;
}

HLE_STUB_DEFAULT(NtQueryVolumeInformationFile)

PPC_FUNC(__imp__NtOpenFile) {
    uint32_t handlePtr = ctx.r3.u32;
    (void)handlePtr;
    uint32_t objAttrPtr = ctx.r5.u32;
    std::string path = "unknown";
    if (objAttrPtr != 0) {
        uint32_t ansiStrPtr = GuestReadU32(base, objAttrPtr + 4);
        if (ansiStrPtr != 0) {
            uint32_t bufPtr = GuestReadU32(base, ansiStrPtr + 4);
            if (bufPtr != 0) {
                path = reinterpret_cast<const char*>(base + bufPtr);
            }
        }
    }
    std::cout << "\033[1;35m[HLE] NtOpenFile requested: " << path << "\033[0m" << std::endl;
    // Return STATUS_OBJECT_NAME_NOT_FOUND so the CRT knows the optional file is absent
    ctx.r3.u64 = STATUS_OBJECT_NAME_NOT_FOUND;
}

HLE_STUB_DEFAULT(NtQueryInformationFile)

HLE_STUB_DEFAULT(RtlImageXexHeaderField)

HLE_STUB_DEFAULT(NtCreateFile)

HLE_STUB_DEFAULT(NtDeviceIoControlFile)

// Custom HLE implementation for NtCreateEvent
PPC_FUNC(__imp__NtCreateEvent) {
    // r3: EventHandle*, r4: DesiredAccess, r5: ObjectAttributes, r6: EventType, r7: InitialState
    uint32_t handlePtr = ctx.r3.u32;
    if (handlePtr != 0) {
        static uint32_t s_eventHandleCounter = 0x1000;
        GuestWriteU32(base, handlePtr, ++s_eventHandleCounter);
    }
    ctx.r3.u64 = STATUS_SUCCESS;
}

HLE_STUB_DEFAULT(XexLoadImageHeaders)

// Custom HLE implementation for RtlNtStatusToDosError
PPC_FUNC(__imp__RtlNtStatusToDosError) {
    NTSTATUS status = static_cast<NTSTATUS>(ctx.r3.u32);
    ctx.r3.u64 = (status == STATUS_SUCCESS) ? 0 : 1;
}

// Custom HLE implementation for _snprintf
PPC_FUNC(__imp___snprintf) {
    uint32_t bufferAddr = ctx.r3.u32;
    size_t count = ctx.r4.u32;
    uint32_t fmtAddr = ctx.r5.u32;
    if (bufferAddr != 0 && fmtAddr != 0 && count > 0) {
        const char* fmt = reinterpret_cast<const char*>(base + fmtAddr);
        char* dst = reinterpret_cast<char*>(base + bufferAddr);
        strncpy(dst, fmt, count - 1);
        dst[count - 1] = '\0';
        ctx.r3.u64 = strlen(dst);
    } else {
        ctx.r3.u64 = 0;
    }
}

HLE_STUB_DEFAULT(NtQueryFullAttributesFile)

// Custom HLE implementation for XexCheckExecutablePrivilege
PPC_FUNC(__imp__XexCheckExecutablePrivilege) {
    ctx.r3.u64 = 1; // Privileged
}

// Custom HLE implementation for ExGetXConfigSetting
PPC_FUNC(__imp__ExGetXConfigSetting) {
    uint16_t category = ctx.r3.u16;
    uint16_t setting = ctx.r4.u16;
    (void)category;
    (void)setting;
    uint32_t bufferAddr = ctx.r5.u32;
    uint16_t bufferSize = ctx.r6.u16;
    uint32_t settingSizeAddr = ctx.r7.u32;
    if (settingSizeAddr != 0) {
        GuestWriteU16(base, settingSizeAddr, 4);
    }
    if (bufferAddr != 0 && bufferSize >= 4) {
        // Default language: 1 (English)
        GuestWriteU32(base, bufferAddr, 1);
    }
    ctx.r3.u64 = STATUS_SUCCESS;
}

// Custom HLE implementation for DbgPrint
PPC_FUNC(__imp__DbgPrint) {
    uint32_t fmtAddr = ctx.r3.u32;
    if (fmtAddr != 0) {
        const char* fmt = reinterpret_cast<const char*>(base + fmtAddr);
        std::cout << "\033[1;36m[Xbox DbgPrint]\033[0m " << fmt;
        if (strchr(fmt, '\n') == nullptr) std::cout << std::endl;
    }
    ctx.r3.u64 = 0;
}

HLE_STUB_DEFAULT(__C_specific_handler)

HLE_STUB_DEFAULT(IoInvalidDeviceRequest)

HLE_STUB_DEFAULT(ObReferenceObject)

HLE_STUB_DEFAULT(IoCreateDevice)

HLE_STUB_DEFAULT(KeLeaveCriticalRegion)

HLE_STUB_DEFAULT(IoDeleteDevice)

HLE_STUB_DEFAULT(KeEnterCriticalRegion)

PPC_FUNC(__imp__ObDereferenceObject) {
    HLE_LOG("ObDereferenceObject");
    ctx.r3.u64 = STATUS_SUCCESS;
}

// Custom HLE implementation for KeWaitForSingleObject
PPC_FUNC(__imp__KeWaitForSingleObject) {
    ctx.r3.u64 = STATUS_SUCCESS;
}

// Custom HLE implementation for KeSetEvent
PPC_FUNC(__imp__KeSetEvent) {
    ctx.r3.u64 = 0;
}

HLE_STUB_DEFAULT(ExAllocatePoolTypeWithTag)

HLE_STUB_DEFAULT(ExFreePool)

// Custom HLE implementation for MmQueryAddressProtect
PPC_FUNC(__imp__MmQueryAddressProtect) {
    ctx.r3.u64 = 0x04; // PAGE_READWRITE
}

HLE_STUB_DEFAULT(RtlTimeFieldsToTime)

HLE_STUB_DEFAULT(RtlTimeToTimeFields)

HLE_STUB_DEFAULT(XeCryptSha)

HLE_STUB_DEFAULT(IoCompleteRequest)

HLE_STUB_DEFAULT(NtReadFile)

// Custom HLE implementation for KfReleaseSpinLock
PPC_FUNC(__imp__KfReleaseSpinLock) {
    ctx.r3.u64 = 0;
}

// Custom HLE implementation for KfAcquireSpinLock
PPC_FUNC(__imp__KfAcquireSpinLock) {
    ctx.r3.u64 = 0; // Old IRQL = PASSIVE_LEVEL
}

HLE_STUB_DEFAULT(KeSetBasePriorityThread)

// Custom HLE implementation for ExCreateThread
PPC_FUNC(__imp__ExCreateThread) {
    uint32_t handlePtr = ctx.r3.u32;
    uint32_t stackSize = ctx.r4.u32;
    uint32_t threadIdPtr = ctx.r5.u32;
    uint32_t apiStartup = ctx.r6.u32;
    (void)apiStartup;
    uint32_t startAddress = ctx.r7.u32;
    uint32_t startContext = ctx.r8.u32;
    uint32_t creationFlags = ctx.r9.u32;

    HLE_LOG("ExCreateThread");

    if (stackSize < 0x10000) stackSize = 0x10000;
    stackSize = (stackSize + 0xFFFF) & ~0xFFFF;

    uint32_t stackAlloc = MemoryManager::Instance().AllocateGuestMemory(stackSize, 16384);
    uint32_t stackTop = stackAlloc + stackSize - 256;

    auto th = std::make_shared<GuestThread>();
    {
        std::lock_guard<std::mutex> lock(g_threadMutex);
        th->handle = g_nextThreadHandle++;
        th->id = th->handle;
        th->startAddress = startAddress;
        th->startContext = startContext;
        th->stackAlloc = stackAlloc;
        th->stackTop = stackTop;
        th->resumed = (creationFlags & 1) == 0;
        g_threadsByHandle[th->handle] = th;
    }

    if (handlePtr != 0) {
        GuestWriteU32(base, handlePtr, th->handle);
    }
    if (threadIdPtr != 0) {
        GuestWriteU32(base, threadIdPtr, th->id);
    }

    std::cout << "\033[1;36m[HLE] Created Guest Thread: handle=0x" << std::hex << th->handle
              << ", entry=0x" << startAddress << ", context=0x" << startContext
              << ", stackTop=0x" << stackTop << ", suspended=" << ((creationFlags & 1) ? "yes" : "no")
              << std::dec << "\033[0m" << std::endl;

    th->hostThread = std::thread([th, base]() {
        while (!th->resumed.load(std::memory_order_acquire)) {
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }

        std::cout << "\033[1;36m[HLE] Thread 0x" << std::hex << th->handle
                  << " executing at 0x" << th->startAddress << "...\033[0m" << std::endl;

        alignas(64) PPCContext threadCtx{};
        threadCtx.r1.u64 = th->stackTop;
        threadCtx.r3.u64 = th->startContext;
        threadCtx.fpscr.setcsr(0x1F80);

        if (th->startAddress >= PPC_CODE_BASE && th->startAddress < (PPC_CODE_BASE + PPC_CODE_SIZE)) {
            (PPC_LOOKUP_FUNC(base, th->startAddress))(threadCtx, base);
        } else {
            std::cerr << "\033[1;31m[HLE] Thread 0x" << std::hex << th->handle
                      << " invalid entry point: 0x" << th->startAddress << "\033[0m" << std::endl;
        }

        std::cout << "\033[1;36m[HLE] Thread 0x" << std::hex << th->handle
                  << " completed execution.\033[0m" << std::endl;
    });
    th->hostThread.detach();

    ctx.r3.u64 = STATUS_SUCCESS;
}

// Custom HLE implementation for DbgBreakPoint
PPC_FUNC(__imp__DbgBreakPoint) {
    std::cout << "\033[1;31m[HLE] DbgBreakPoint reached!\033[0m" << std::endl;
}

HLE_STUB_DEFAULT(RtlUpcaseUnicodeChar)

HLE_STUB_DEFAULT(ObIsTitleObject)

HLE_STUB_DEFAULT(IoCheckShareAccess)

HLE_STUB_DEFAULT(IoSetShareAccess)

// Custom HLE implementation for KeQuerySystemTime
PPC_FUNC(__imp__KeQuerySystemTime) {
    uint32_t timeAddr = ctx.r3.u32;
    if (timeAddr != 0) {
        auto now = std::chrono::system_clock::now();
        auto duration = now.time_since_epoch();
        uint64_t intervals = std::chrono::duration_cast<std::chrono::duration<uint64_t, std::ratio<1, 10000000>>>(duration).count();
        uint64_t filetime = intervals + 116444736000000000ULL;
        GuestWriteU64(base, timeAddr, filetime);
    }
}

HLE_STUB_DEFAULT(IoRemoveShareAccess)

HLE_STUB_DEFAULT(StfsControlDevice)

HLE_STUB_DEFAULT(StfsCreateDevice)

HLE_STUB_DEFAULT(XeKeysConsoleSignatureVerification)

HLE_STUB_DEFAULT(XeKeysConsolePrivateKeySign)

// Custom HLE implementation for NtFreeVirtualMemory
PPC_FUNC(__imp__NtFreeVirtualMemory) {
    uint32_t baseAddrPtr = ctx.r3.u32;
    if (baseAddrPtr != 0) {
        uint32_t addr = GuestReadU32(base, baseAddrPtr);
        MemoryManager::Instance().FreeGuestMemory(addr);
    }
    ctx.r3.u64 = STATUS_SUCCESS;
}

// Custom HLE implementation for NtAllocateVirtualMemory
PPC_FUNC(__imp__NtAllocateVirtualMemory) {
    // r3: BaseAddress ptr, r4: ZeroBits, r5: RegionSize ptr, r6: AllocationType, r7: Protect
    uint32_t baseAddrPtr = ctx.r3.u32;
    uint32_t sizePtr = ctx.r5.u32;
    if (baseAddrPtr != 0 && sizePtr != 0) {
        uint32_t size = GuestReadU32(base, sizePtr);
        uint32_t allocated = MemoryManager::Instance().AllocateGuestMemory(size);
        if (allocated != 0 && size >= 512) {
            GuestWriteU8(base, allocated + 379, 1);
        }
        GuestWriteU32(base, baseAddrPtr, allocated);
        ctx.r3.u64 = allocated ? STATUS_SUCCESS : STATUS_NO_MEMORY;
    } else {
        ctx.r3.u64 = STATUS_INVALID_PARAMETER;
    }
}

HLE_STUB_DEFAULT(NtFlushBuffersFile)

HLE_STUB_DEFAULT(IoDismountVolume)

HLE_STUB_DEFAULT(ObCreateSymbolicLink)

HLE_STUB_DEFAULT(ObDeleteSymbolicLink)

// Custom HLE implementation for KeResetEvent
PPC_FUNC(__imp__KeResetEvent) {
    ctx.r3.u64 = 0;
}

HLE_STUB_DEFAULT(ExRegisterTitleTerminateNotification)

// Custom HLE implementation for NtSetEvent
PPC_FUNC(__imp__NtSetEvent) {
    ctx.r3.u64 = STATUS_SUCCESS;
}

HLE_STUB_DEFAULT(NtQueryDirectoryFile)

HLE_STUB_DEFAULT(NtReadFileScatter)

HLE_STUB_DEFAULT(NtDuplicateObject)

PPC_FUNC(__imp__XexGetModuleHandle) {
    uint32_t namePtr = ctx.r3.u32;
    uint32_t handleOut = ctx.r4.u32;
    std::string modName = "unknown";
    if (namePtr != 0) {
        modName = reinterpret_cast<const char*>(base + namePtr);
    }
    HLE_LOG("XexGetModuleHandle (" + modName + ")");
    if (handleOut != 0) {
        GuestWriteU32(base, handleOut, 0x80000001);
    }
    ctx.r3.u64 = STATUS_SUCCESS;
}

PPC_FUNC(__imp__XexGetProcedureAddress) {
    uint32_t ordinal = ctx.r4.u32;
    uint32_t procOut = ctx.r5.u32;
    HLE_LOG("XexGetProcedureAddress ordinal=" + std::to_string(ordinal));
    if (procOut != 0) {
        GuestWriteU32(base, procOut, 0);
    }
    ctx.r3.u64 = STATUS_SUCCESS;
}

PPC_FUNC(__imp__NtResumeThread) {
    uint32_t handle = ctx.r3.u32;
    uint32_t prevCountPtr = ctx.r4.u32;
    HLE_LOG("NtResumeThread");

    if (prevCountPtr != 0) {
        GuestWriteU32(base, prevCountPtr, 1);
    }

    std::shared_ptr<GuestThread> targetThread = nullptr;
    {
        std::lock_guard<std::mutex> lock(g_threadMutex);
        auto it = g_threadsByHandle.find(handle);
        if (it != g_threadsByHandle.end()) {
            targetThread = it->second;
        } else {
            // Resume all suspended threads if unmapped or global handle
            for (auto& pair : g_threadsByHandle) {
                pair.second->resumed.store(true, std::memory_order_release);
            }
        }
    }

    if (targetThread) {
        targetThread->resumed.store(true, std::memory_order_release);
        std::cout << "\033[1;36m[HLE] Resumed Guest Thread 0x" << std::hex << targetThread->handle << "\033[0m" << std::endl;
    }

    ctx.r3.u64 = STATUS_SUCCESS;
}

HLE_STUB_DEFAULT(ObOpenObjectByPointer)

HLE_STUB_DEFAULT(ObLookupThreadByThreadId)

PPC_FUNC(__imp__ObReferenceObjectByHandle) {
    uint32_t handle = ctx.r3.u32;
    uint32_t objType = ctx.r4.u32;
    (void)objType;
    uint32_t ppObject = ctx.r5.u32;
    HLE_LOG("ObReferenceObjectByHandle");
    if (ppObject != 0) {
        GuestWriteU32(base, ppObject, handle ? handle : 0x5001);
    }
    ctx.r3.u64 = STATUS_SUCCESS;
}

HLE_STUB_DEFAULT(KeSetDisableBoostThread)

HLE_STUB_DEFAULT(NtSuspendThread)

HLE_STUB_DEFAULT(KeSetAffinityThread)

HLE_STUB_DEFAULT(RtlUnicodeToMultiByteN)

// Custom HLE implementation for KeDelayExecutionThread
PPC_FUNC(__imp__KeDelayExecutionThread) {
    // r3 = wait mode, r4 = alertable, r5 = interval ptr (LARGE_INTEGER*)
    uint32_t intervalAddr = ctx.r5.u32;
    HLE_LOG("KeDelayExecutionThread");
    if (intervalAddr != 0) {
        int64_t interval = static_cast<int64_t>(GuestReadU64(base, intervalAddr));
        if (interval < 0) {
            // Relative time in 100ns units
            int64_t microseconds = (-interval) / 10;
            if (microseconds > 10000) microseconds = 10000; // Cap to 10ms max per call
            if (microseconds > 0) {
                std::this_thread::sleep_for(std::chrono::microseconds(microseconds));
            }
        }
    }
    ctx.r3.u64 = STATUS_SUCCESS;
}

HLE_STUB_DEFAULT(HalReturnToFirmware)

// Custom HLE implementation for MmAllocatePhysicalMemoryEx
PPC_FUNC(__imp__MmAllocatePhysicalMemoryEx) {
    // r3: Type, r4: NumberOfBytes, r5: Protect, r6: MinAddress, r7: MaxAddress, r8: Alignment
    size_t size = ctx.r4.u32;
    uint32_t alignment = ctx.r8.u32 ? ctx.r8.u32 : 4096;
    uint32_t allocated = MemoryManager::Instance().AllocateGuestMemory(size, alignment);
    if (allocated != 0 && size >= 512) {
        GuestWriteU8(base, allocated + 379, 1);
    }
    ctx.r3.u64 = allocated;
}

// Custom HLE implementation for MmQueryAllocationSize
PPC_FUNC(__imp__MmQueryAllocationSize) {
    uint32_t addr = ctx.r3.u32;
    ctx.r3.u64 = MemoryManager::Instance().QueryAllocationSize(addr);
}

// Custom HLE implementation for MmSetAddressProtect
PPC_FUNC(__imp__MmSetAddressProtect) {
    ctx.r3.u64 = STATUS_SUCCESS;
}

// Custom HLE implementation for MmFreePhysicalMemory
PPC_FUNC(__imp__MmFreePhysicalMemory) {
    uint32_t addr = ctx.r4.u32;
    MemoryManager::Instance().FreeGuestMemory(addr);
    ctx.r3.u64 = STATUS_SUCCESS;
}

HLE_STUB_DEFAULT(IoDismountVolumeByFileHandle)

// Custom HLE implementation for RtlFillMemoryUlong
PPC_FUNC(__imp__RtlFillMemoryUlong) {
    uint32_t dst = ctx.r3.u32;
    size_t length = ctx.r4.u32;
    uint32_t pattern = ctx.r5.u32;
    size_t count = length / 4;
    if (dst != 0) {
        uint32_t* ptr = reinterpret_cast<uint32_t*>(base + dst);
        for (size_t i = 0; i < count; ++i) {
            ptr[i] = pattern;
        }
    }
    ctx.r3.u64 = 0;
}

PPC_FUNC(__imp__KeBugCheckEx) {
    std::cerr << "\033[1;31m[Xbox KeBugCheckEx] Code=0x" << std::hex << ctx.r3.u64
              << " (P1=0x" << ctx.r4.u64 << ", P2=0x" << ctx.r5.u64
              << ", P3=0x" << ctx.r6.u64 << ", P4=0x" << ctx.r7.u64 << std::dec << ")\033[0m" << std::endl;
}

// Custom HLE implementation for KeGetCurrentProcessType
PPC_FUNC(__imp__KeGetCurrentProcessType) {
    HLE_LOG("KeGetCurrentProcessType");
    if (ctx.r3.u32 >= 0x10000000 && ctx.r3.u32 < 0x40000000) {
        GuestWriteU8(base, ctx.r3.u32 + 379, 1);
    }
    if (ctx.r30.u32 >= 0x10000000 && ctx.r30.u32 < 0x40000000) {
        GuestWriteU8(base, ctx.r30.u32 + 379, 1);
    }
    GuestWriteU8(base, 0x10000000 + 379, 1);
    ctx.r3.u64 = 1; // 1 = Title Process
}

// Custom HLE implementation for RtlCompareMemoryUlong
PPC_FUNC(__imp__RtlCompareMemoryUlong) {
    uint32_t src = ctx.r3.u32;
    size_t length = ctx.r4.u32;
    uint32_t pattern = ctx.r5.u32;
    size_t count = length / 4;
    size_t matched = 0;
    if (src != 0) {
        const uint32_t* ptr = reinterpret_cast<const uint32_t*>(base + src);
        for (size_t i = 0; i < count; ++i) {
            if (ptr[i] == pattern) {
                matched += 4;
            } else {
                break;
            }
        }
    }
    ctx.r3.u64 = matched;
}

// Custom HLE implementation for NtQueryVirtualMemory
PPC_FUNC(__imp__NtQueryVirtualMemory) {
    uint32_t addr = ctx.r3.u32;
    uint32_t infoPtr = ctx.r4.u32;
    HLE_LOG("NtQueryVirtualMemory");

    if (infoPtr == 0) {
        ctx.r3.u64 = STATUS_INVALID_PARAMETER;
        return;
    }

    uint32_t baseAddr = addr;
    uint32_t allocBase = addr & ~0xFFFF;
    uint32_t regionSize = 0x10000;
    uint32_t state = 0x1000; // MEM_COMMIT
    uint32_t protect = 0x04; // PAGE_READWRITE
    uint32_t type = 0x20000; // MEM_PRIVATE

    auto& mm = MemoryManager::Instance();
    uint32_t foundBase = 0;
    size_t foundSize = 0;

    if (mm.FindAllocation(addr, foundBase, foundSize)) {
        baseAddr = addr;
        allocBase = foundBase;
        regionSize = static_cast<uint32_t>((foundBase + foundSize) - addr);
        state = 0x1000; // MEM_COMMIT
        protect = 0x04;
    } else if (addr >= 0x82000000 && addr < 0x84000000) {
        baseAddr = addr;
        allocBase = 0x82000000;
        regionSize = 0x10000;
        state = 0x1000; // MEM_COMMIT
        protect = 0x40; // PAGE_EXECUTE_READWRITE
    } else if (addr >= 0x60000000 && addr < 0x70000000) {
        baseAddr = addr;
        allocBase = 0x60000000;
        regionSize = 0x10000;
        state = 0x1000; // MEM_COMMIT
        protect = 0x04;
    } else {
        baseAddr = addr;
        allocBase = 0;
        regionSize = 0x10000;
        state = 0x10000; // MEM_FREE
        protect = 0x01;  // PAGE_NOACCESS
        type = 0;
    }

    GuestWriteU32(base, infoPtr + 0, baseAddr);
    GuestWriteU32(base, infoPtr + 4, allocBase);
    GuestWriteU32(base, infoPtr + 8, protect);
    GuestWriteU32(base, infoPtr + 12, regionSize);
    GuestWriteU32(base, infoPtr + 16, state);
    GuestWriteU32(base, infoPtr + 20, protect);
    GuestWriteU32(base, infoPtr + 24, type);

    ctx.r3.u64 = STATUS_SUCCESS;
}

HLE_STUB_DEFAULT(RtlRaiseException)

HLE_STUB_DEFAULT(ExTerminateThread)

// Custom HLE implementation for XNotifyGetNext
PPC_FUNC(__imp__XNotifyGetNext) {
    ctx.r3.u64 = 0; // FALSE (no pending notifications)
}

HLE_STUB_DEFAULT(XamLoaderSetLaunchData)

// Custom HLE implementation for XGetGameRegion
PPC_FUNC(__imp__XGetGameRegion) {
    HLE_LOG("XGetGameRegion");
    ctx.r3.u64 = 0x000000FF; // Region Free
}

// Custom HLE implementation for XNotifyPositionUI
PPC_FUNC(__imp__XNotifyPositionUI) {
    ctx.r3.u64 = 0;
}

HLE_STUB_DEFAULT(XamCreateEnumeratorHandle)

HLE_STUB_DEFAULT(XMsgStartIORequestEx)

HLE_STUB_DEFAULT(XMsgStartIORequest)

// Custom HLE implementation for XamGetSystemVersion
PPC_FUNC(__imp__XamGetSystemVersion) {
    HLE_LOG("XamGetSystemVersion");
    ctx.r3.u64 = 0x20453200; // Dashboard 2.0.17559.0
}

HLE_STUB_DEFAULT(XMsgInProcessCall)

HLE_STUB_DEFAULT(XamGetPrivateEnumStructureFromHandle)

HLE_STUB_DEFAULT(XamNotifyCreateListener)

// Custom HLE implementation for XamInputGetCapabilities
PPC_FUNC(__imp__XamInputGetCapabilities) {
    ctx.r3.u64 = 0; // ERROR_SUCCESS
}

// Custom HLE implementation for XamInputGetState
PPC_FUNC(__imp__XamInputGetState) {
    // r3 = user index, r4 = flags, r5 = XINPUT_STATE*
    uint32_t stateAddr = ctx.r5.u32;
    if (stateAddr != 0) {
        // Zero state = no buttons pressed
        std::memset(base + stateAddr, 0, 16);
    }
    ctx.r3.u64 = 0; // ERROR_SUCCESS
}

HLE_STUB_DEFAULT(XamInputSetState)

HLE_STUB_DEFAULT(XMsgCancelIORequest)

// Custom HLE implementation for XamUserGetName
PPC_FUNC(__imp__XamUserGetName) {
    uint32_t bufAddr = ctx.r4.u32;
    if (bufAddr != 0) {
        strcpy(reinterpret_cast<char*>(base + bufAddr), "Player1");
    }
    ctx.r3.u64 = 0;
}

// Custom HLE implementation for XamUserGetSigninState
PPC_FUNC(__imp__XamUserGetSigninState) {
    ctx.r3.u64 = 1; // eXUserSigninState_SignedInLocally
}

HLE_STUB_DEFAULT(XamUserAreUsersFriends)

HLE_STUB_DEFAULT(XamUserCheckPrivilege)

HLE_STUB_DEFAULT(XamUserCreateStatsEnumerator)

// Custom HLE implementation for XamUserGetXUID
PPC_FUNC(__imp__XamUserGetXUID) {
    uint32_t xuidAddr = ctx.r4.u32;
    if (xuidAddr != 0) {
        GuestWriteU64(base, xuidAddr, 0x0009000000000001ULL);
    }
    ctx.r3.u64 = 0;
}

// Custom HLE implementation for XamUserGetSigninInfo
PPC_FUNC(__imp__XamUserGetSigninInfo) {
    ctx.r3.u64 = 0;
}

HLE_STUB_DEFAULT(XamShowSigninUI)

HLE_STUB_DEFAULT(XamShowGamerCardUIForXUID)

HLE_STUB_DEFAULT(XamShowPlayerReviewUI)

HLE_STUB_DEFAULT(XamShowMarketplaceUI)

HLE_STUB_DEFAULT(XamShowDeviceSelectorUI)

HLE_STUB_DEFAULT(XamShowGameInviteUI)

HLE_STUB_DEFAULT(XamContentCreateEx)

HLE_STUB_DEFAULT(XamContentDelete)

HLE_STUB_DEFAULT(XamContentClose)

HLE_STUB_DEFAULT(XamContentFlush)

HLE_STUB_DEFAULT(XamContentSetThumbnail)

HLE_STUB_DEFAULT(XamContentGetCreator)

HLE_STUB_DEFAULT(XamContentCreateEnumerator)

HLE_STUB_DEFAULT(XamContentGetDeviceState)

HLE_STUB_DEFAULT(XamContentGetDeviceData)

HLE_STUB_DEFAULT(XamEnumerate)

// Custom HLE implementation for XamGetExecutionId
PPC_FUNC(__imp__XamGetExecutionId) {
    HLE_LOG("XamGetExecutionId");
    uint32_t execIdAddr = ctx.r3.u32;
    if (execIdAddr != 0) {
        GuestExecutionId* exec = reinterpret_cast<GuestExecutionId*>(base + execIdAddr);
        exec->mediaId = __builtin_bswap32(0x54510809);
        exec->version = __builtin_bswap32(1);
        exec->baseVersion = __builtin_bswap32(1);
        exec->titleId = __builtin_bswap32(0x54510809);
        exec->platform = 1;
        exec->executableType = 1;
        exec->discNum = 1;
        exec->discsInSet = 1;
        exec->saveGameId = 0;
    }
    ctx.r3.u64 = STATUS_SUCCESS;
}

// Custom HLE implementation for RtlInitializeCriticalSectionAndSpinCount
PPC_FUNC(__imp__RtlInitializeCriticalSectionAndSpinCount) {
    uint32_t csAddr = ctx.r3.u32;
    std::lock_guard<std::mutex> lock(g_csMutex);
    g_criticalSections[csAddr] = std::make_unique<std::recursive_mutex>();
    ctx.r3.u64 = STATUS_SUCCESS;
}

// Custom HLE implementation for RtlTryEnterCriticalSection
PPC_FUNC(__imp__RtlTryEnterCriticalSection) {
    uint32_t csAddr = ctx.r3.u32;
    std::recursive_mutex* mtx = nullptr;
    {
        std::lock_guard<std::mutex> lock(g_csMutex);
        auto it = g_criticalSections.find(csAddr);
        if (it != g_criticalSections.end()) {
            mtx = it->second.get();
        }
    }
    ctx.r3.u64 = (mtx && mtx->try_lock()) ? 1 : 0;
}

// Custom HLE implementation for KeTlsAlloc
PPC_FUNC(__imp__KeTlsAlloc) {
    std::lock_guard<std::mutex> lock(g_tlsMutex);
    uint32_t slot = 0xFFFFFFFF;
    for (size_t i = 0; i < MAX_TLS_SLOTS; ++i) {
        if (!g_tlsAllocated[i]) {
            g_tlsAllocated[i] = true;
            slot = static_cast<uint32_t>(i);
            break;
        }
    }
    ctx.r3.u64 = slot;
}

// Custom HLE implementation for KeTlsSetValue
PPC_FUNC(__imp__KeTlsSetValue) {
    uint32_t slot = ctx.r3.u32;
    uint64_t value = ctx.r4.u64;
    if (slot < MAX_TLS_SLOTS) {
        t_tlsValues[slot] = value;
        ctx.r3.u64 = 1; // TRUE
    } else {
        ctx.r3.u64 = 0; // FALSE
    }
}

// Custom HLE implementation for KeTlsGetValue
PPC_FUNC(__imp__KeTlsGetValue) {
    uint32_t slot = ctx.r3.u32;
    if (slot < MAX_TLS_SLOTS) {
        ctx.r3.u64 = t_tlsValues[slot];
    } else {
        ctx.r3.u64 = 0;
    }
}

HLE_STUB_DEFAULT(KeBugCheck)

// Custom HLE implementation for KeTlsFree
PPC_FUNC(__imp__KeTlsFree) {
    std::lock_guard<std::mutex> lock(g_tlsMutex);
    uint32_t slot = ctx.r3.u32;
    if (slot < MAX_TLS_SLOTS) {
        g_tlsAllocated[slot] = false;
        ctx.r3.u64 = 1; // TRUE
    } else {
        ctx.r3.u64 = 0; // FALSE
    }
}

HLE_STUB_DEFAULT(RtlUnwind)

HLE_STUB_DEFAULT(KeEnableFpuExceptions)

HLE_STUB_DEFAULT(RtlCaptureContext)

// Custom HLE implementation for KeQueryPerformanceFrequency
PPC_FUNC(__imp__KeQueryPerformanceFrequency) {
    HLE_LOG("KeQueryPerformanceFrequency");
    ctx.r3.u64 = 50000000ULL; // 50 MHz
}

// Custom HLE implementation for NtCreateSemaphore
PPC_FUNC(__imp__NtCreateSemaphore) {
    uint32_t handlePtr = ctx.r3.u32;
    static uint32_t s_semHandleCounter = 0x3000;
    uint32_t handle = ++s_semHandleCounter;
    HLE_LOG("NtCreateSemaphore");
    if (handlePtr != 0) {
        GuestWriteU32(base, handlePtr, handle);
    }
    ctx.r3.u64 = STATUS_SUCCESS;
}

// Custom HLE implementation for NtReleaseSemaphore
PPC_FUNC(__imp__NtReleaseSemaphore) {
    uint32_t prevCountPtr = ctx.r5.u32;
    HLE_LOG("NtReleaseSemaphore");
    if (prevCountPtr != 0) {
        GuestWriteU32(base, prevCountPtr, 1);
    }
    ctx.r3.u64 = STATUS_SUCCESS;
}

HLE_STUB_DEFAULT(NtWaitForMultipleObjectsEx)

// Custom HLE implementation for NtClearEvent
PPC_FUNC(__imp__NtClearEvent) {
    ctx.r3.u64 = STATUS_SUCCESS;
}

HLE_STUB_DEFAULT(ExAllocatePool)

// Custom HLE implementation for NtYieldExecution
PPC_FUNC(__imp__NtYieldExecution) {
    std::this_thread::yield();
    ctx.r3.u64 = STATUS_SUCCESS;
}

HLE_STUB_DEFAULT(RtlMultiByteToUnicodeN)

HLE_STUB_DEFAULT(NetDll_XNetStartup)

HLE_STUB_DEFAULT(NetDll_XNetCleanup)

HLE_STUB_DEFAULT(NetDll_XNetRandom)

HLE_STUB_DEFAULT(NetDll_XNetXnAddrToInAddr)

HLE_STUB_DEFAULT(NetDll_XNetServerToInAddr)

HLE_STUB_DEFAULT(NetDll_XNetInAddrToXnAddr)

HLE_STUB_DEFAULT(NetDll_XNetInAddrToString)

HLE_STUB_DEFAULT(NetDll_XNetUnregisterInAddr)

HLE_STUB_DEFAULT(NetDll_XNetXnAddrToMachineId)

HLE_STUB_DEFAULT(NetDll_XNetConnect)

HLE_STUB_DEFAULT(NetDll_XNetGetConnectStatus)

HLE_STUB_DEFAULT(NetDll_XNetDnsLookup)

HLE_STUB_DEFAULT(NetDll_XNetDnsRelease)

HLE_STUB_DEFAULT(NetDll_XNetQosListen)

HLE_STUB_DEFAULT(NetDll_XNetQosLookup)

HLE_STUB_DEFAULT(NetDll_XNetQosRelease)

HLE_STUB_DEFAULT(NetDll_XNetGetTitleXnAddr)

HLE_STUB_DEFAULT(NetDll_XNetGetEthernetLinkStatus)

HLE_STUB_DEFAULT(NetDll_XNetGetOpt)

HLE_STUB_DEFAULT(NetDll_WSAStartup)

HLE_STUB_DEFAULT(NetDll_WSACleanup)

HLE_STUB_DEFAULT(NetDll_socket)

HLE_STUB_DEFAULT(NetDll_closesocket)

HLE_STUB_DEFAULT(NetDll_ioctlsocket)

HLE_STUB_DEFAULT(NetDll_setsockopt)

HLE_STUB_DEFAULT(NetDll_getsockopt)

HLE_STUB_DEFAULT(NetDll_getsockname)

HLE_STUB_DEFAULT(NetDll_bind)

HLE_STUB_DEFAULT(NetDll_connect)

HLE_STUB_DEFAULT(NetDll_listen)

HLE_STUB_DEFAULT(NetDll_accept)

HLE_STUB_DEFAULT(NetDll_select)

HLE_STUB_DEFAULT(NetDll_WSAGetOverlappedResult)

HLE_STUB_DEFAULT(NetDll_recv)

HLE_STUB_DEFAULT(NetDll_recvfrom)

HLE_STUB_DEFAULT(NetDll_WSARecvFrom)

HLE_STUB_DEFAULT(NetDll_send)

HLE_STUB_DEFAULT(NetDll_sendto)

HLE_STUB_DEFAULT(NetDll_WSASendTo)

HLE_STUB_DEFAULT(NetDll_inet_addr)

HLE_STUB_DEFAULT(NetDll_WSAGetLastError)

HLE_STUB_DEFAULT(NetDll_WSACreateEvent)

HLE_STUB_DEFAULT(NetDll___WSAFDIsSet)

HLE_STUB_DEFAULT(XamFree)

HLE_STUB_DEFAULT(XamAlloc)

HLE_STUB_DEFAULT(XamSessionRefObjByHandle)

HLE_STUB_DEFAULT(XamUserReadProfileSettings)

HLE_STUB_DEFAULT(XamUserWriteProfileSettings)

// Custom HLE implementation for XGetVideoMode
PPC_FUNC(__imp__XGetVideoMode) {
    HLE_LOG("XGetVideoMode");
    uint32_t videoModeAddr = ctx.r3.u32;
    if (videoModeAddr != 0) {
        GuestVideoMode* vm = reinterpret_cast<GuestVideoMode*>(base + videoModeAddr);
        vm->dwDisplayWidth = __builtin_bswap32(1280);
        vm->dwDisplayHeight = __builtin_bswap32(720);
        vm->fIsInterlaced = 0;
        vm->fIsWideScreen = __builtin_bswap32(1);
        vm->fIsHiDef = __builtin_bswap32(1);
        float fps = 60.0f;
        uint32_t fpsBits;
        std::memcpy(&fpsBits, &fps, 4);
        vm->refreshRate = __builtin_bswap32(fpsBits);
        vm->videoStandard = __builtin_bswap32(1); // NTSC
        vm->videoFlags = 0;
    }
    ctx.r3.u64 = 0;
}

HLE_STUB_DEFAULT(XMADisableContext)

HLE_STUB_DEFAULT(XMAEnableContext)

HLE_STUB_DEFAULT(XMASetOutputBufferReadOffset)

HLE_STUB_DEFAULT(XMASetOutputBufferValid)

HLE_STUB_DEFAULT(XMASetInputBuffer1Valid)

HLE_STUB_DEFAULT(XMASetInputBuffer0Valid)

HLE_STUB_DEFAULT(XMAIsInputBuffer1Valid)

HLE_STUB_DEFAULT(XMAIsInputBuffer0Valid)

HLE_STUB_DEFAULT(XMAGetOutputBufferWriteOffset)

HLE_STUB_DEFAULT(XMAGetOutputBufferReadOffset)

HLE_STUB_DEFAULT(XMAIsOutputBufferValid)

HLE_STUB_DEFAULT(XMAInitializeContext)

HLE_STUB_DEFAULT(XMACreateContext)

HLE_STUB_DEFAULT(XMAReleaseContext)

// Custom HLE implementation for NtCreateMutant
PPC_FUNC(__imp__NtCreateMutant) {
    uint32_t handlePtr = ctx.r3.u32;
    static uint32_t s_mutantHandleCounter = 0x2000;
    uint32_t handle = ++s_mutantHandleCounter;
    HLE_LOG("NtCreateMutant");
    if (handlePtr != 0) {
        GuestWriteU32(base, handlePtr, handle);
    }
    ctx.r3.u64 = STATUS_SUCCESS;
}

// Custom HLE implementation for NtReleaseMutant
PPC_FUNC(__imp__NtReleaseMutant) {
    uint32_t prevCountPtr = ctx.r4.u32;
    HLE_LOG("NtReleaseMutant");
    if (prevCountPtr != 0) {
        GuestWriteU32(base, prevCountPtr, 1);
    }
    ctx.r3.u64 = STATUS_SUCCESS;
}

HLE_STUB_DEFAULT(VdInitializeRingBuffer)

HLE_STUB_DEFAULT(MmGetPhysicalAddress)

HLE_STUB_DEFAULT(KiApcNormalRoutineNop)

HLE_STUB_DEFAULT(VdSetSystemCommandBufferGpuIdentifierAddress)

HLE_STUB_DEFAULT(VdEnableRingBufferRPtrWriteBack)

// Custom HLE implementation for KeReleaseSpinLockFromRaisedIrql
PPC_FUNC(__imp__KeReleaseSpinLockFromRaisedIrql) {
    ctx.r3.u64 = 0;
}

// Custom HLE implementation for KeAcquireSpinLockAtRaisedIrql
PPC_FUNC(__imp__KeAcquireSpinLockAtRaisedIrql) {
    ctx.r3.u64 = 0;
}

HLE_STUB_DEFAULT(VdPersistDisplay)

HLE_STUB_DEFAULT(VdEnableDisableClockGating)

HLE_STUB_DEFAULT(VdSwap)

HLE_STUB_DEFAULT(VdGetSystemCommandBuffer)

// Custom HLE implementation for sprintf
PPC_FUNC(__imp__sprintf) {
    uint32_t bufferAddr = ctx.r3.u32;
    uint32_t fmtAddr = ctx.r4.u32;
    if (bufferAddr != 0 && fmtAddr != 0) {
        const char* fmt = reinterpret_cast<const char*>(base + fmtAddr);
        char* dst = reinterpret_cast<char*>(base + bufferAddr);
        // Copy verbatim if no format specifiers for simple cases
        if (strchr(fmt, '%') == nullptr) {
            strcpy(dst, fmt);
            ctx.r3.u64 = strlen(dst);
            return;
        }
        // Fallback: simple copy
        strncpy(dst, fmt, 256);
        ctx.r3.u64 = strlen(dst);
    } else {
        ctx.r3.u64 = 0;
    }
}

PPC_FUNC(__imp__VdQueryVideoMode) {
    HLE_LOG("VdQueryVideoMode");
    uint32_t videoModeAddr = ctx.r3.u32;
    if (videoModeAddr != 0) {
        GuestVideoMode* vm = reinterpret_cast<GuestVideoMode*>(base + videoModeAddr);
        vm->dwDisplayWidth = __builtin_bswap32(1280);
        vm->dwDisplayHeight = __builtin_bswap32(720);
        vm->fIsInterlaced = 0;
        vm->fIsWideScreen = __builtin_bswap32(1);
        vm->fIsHiDef = __builtin_bswap32(1);
        float fps = 60.0f;
        uint32_t fpsBits;
        std::memcpy(&fpsBits, &fps, 4);
        vm->refreshRate = __builtin_bswap32(fpsBits);
        vm->videoStandard = __builtin_bswap32(1); // NTSC
        vm->videoFlags = 0;
    }
    ctx.r3.u64 = 1;
}

PPC_FUNC(__imp__VdIsHSIOTrainingSucceeded) {
    HLE_LOG("VdIsHSIOTrainingSucceeded");
    ctx.r3.u64 = 1; // 1 = Succeeded
}

PPC_FUNC(__imp__VdGetCurrentDisplayInformation) {
    HLE_LOG("VdGetCurrentDisplayInformation");
    ctx.r3.u64 = 0;
}

PPC_FUNC(__imp__VdQueryVideoFlags) {
    HLE_LOG("VdQueryVideoFlags");
    ctx.r3.u64 = 0;
}

PPC_FUNC(__imp__VdInitializeEngines) {
    HLE_LOG("VdInitializeEngines");
    ctx.r3.u64 = STATUS_SUCCESS;
}

PPC_FUNC(__imp__VdShutdownEngines) {
    HLE_LOG("VdShutdownEngines");
    ctx.r3.u64 = STATUS_SUCCESS;
}

PPC_FUNC(__imp__VdSetGraphicsInterruptCallback) {
    HLE_LOG("VdSetGraphicsInterruptCallback");
    ctx.r3.u64 = STATUS_SUCCESS;
}

PPC_FUNC(__imp__VdSetDisplayMode) {
    HLE_LOG("VdSetDisplayMode");
    ctx.r3.u64 = STATUS_SUCCESS;
}

// Custom HLE implementation for _vsnprintf
PPC_FUNC(__imp___vsnprintf) {
    uint32_t bufferAddr = ctx.r3.u32;
    size_t count = ctx.r4.u32;
    uint32_t fmtAddr = ctx.r5.u32;
    if (bufferAddr != 0 && fmtAddr != 0 && count > 0) {
        const char* fmt = reinterpret_cast<const char*>(base + fmtAddr);
        char* dst = reinterpret_cast<char*>(base + bufferAddr);
        strncpy(dst, fmt, count - 1);
        dst[count - 1] = '\0';
        ctx.r3.u64 = strlen(dst);
    } else {
        ctx.r3.u64 = 0;
    }
}

HLE_STUB_DEFAULT(VdGetCurrentDisplayGamma)

HLE_STUB_DEFAULT(KeLockL2)

HLE_STUB_DEFAULT(KeUnlockL2)

HLE_STUB_DEFAULT(VdInitializeScalerCommandBuffer)

HLE_STUB_DEFAULT(VdCallGraphicsNotificationRoutines)

HLE_STUB_DEFAULT(VdRetrainEDRAMWorker)

HLE_STUB_DEFAULT(VdRetrainEDRAM)

HLE_STUB_DEFAULT(XamSessionCreateHandle)

HLE_STUB_DEFAULT(XamVoiceHeadsetPresent)

HLE_STUB_DEFAULT(XamVoiceClose)

HLE_STUB_DEFAULT(XamVoiceSubmitPacket)

HLE_STUB_DEFAULT(XamVoiceCreate)

// Custom HLE implementation for KeRaiseIrqlToDpcLevel
PPC_FUNC(__imp__KeRaiseIrqlToDpcLevel) {
    ctx.r3.u64 = 0; // Old IRQL
}

HLE_STUB_DEFAULT(KeTryToAcquireSpinLockAtRaisedIrql)

// Custom HLE implementation for KfLowerIrql
PPC_FUNC(__imp__KfLowerIrql) {
    ctx.r3.u64 = 0;
}

PPC_FUNC(__imp__KeResumeThread) {
    HLE_LOG("KeResumeThread");
    ctx.r3.u64 = 1; // Previous suspend count
}

HLE_STUB_DEFAULT(KeInitializeSemaphore)

HLE_STUB_DEFAULT(KeWaitForMultipleObjects)

HLE_STUB_DEFAULT(XAudioGetVoiceCategoryVolumeChangeMask)

HLE_STUB_DEFAULT(KeReleaseSemaphore)

HLE_STUB_DEFAULT(XAudioGetVoiceCategoryVolume)

HLE_STUB_DEFAULT(ExAllocatePoolWithTag)

HLE_STUB_DEFAULT(XAudioUnregisterRenderDriverClient)

HLE_STUB_DEFAULT(XAudioRegisterRenderDriverClient)

HLE_STUB_DEFAULT(XAudioSubmitRenderDriverFrame)

HLE_STUB_DEFAULT(XUsbcamCreate)

HLE_STUB_DEFAULT(XUsbcamDestroy)

HLE_STUB_DEFAULT(XUsbcamGetState)

HLE_STUB_DEFAULT(XUsbcamSetConfig)

HLE_STUB_DEFAULT(XUsbcamSetView)

HLE_STUB_DEFAULT(XUsbcamSetCaptureMode)

HLE_STUB_DEFAULT(XUsbcamReadFrame)

HLE_STUB_DEFAULT(ExAcquireReadWriteLockShared)

HLE_STUB_DEFAULT(ExReleaseReadWriteLock)

HLE_STUB_DEFAULT(KeInitializeApc)

HLE_STUB_DEFAULT(KeInsertQueueApc)

HLE_STUB_DEFAULT(ExAcquireReadWriteLockExclusive)

HLE_STUB_DEFAULT(ExInitializeReadWriteLock)

HLE_STUB_DEFAULT(NtCancelTimer)

HLE_STUB_DEFAULT(NtSetTimerEx)

// Custom HLE implementation for NtCreateTimer
PPC_FUNC(__imp__NtCreateTimer) {
    uint32_t handlePtr = ctx.r3.u32;
    static uint32_t s_timerHandleCounter = 0x4000;
    uint32_t handle = ++s_timerHandleCounter;
    HLE_LOG("NtCreateTimer");
    if (handlePtr != 0) {
        GuestWriteU32(base, handlePtr, handle);
    }
    ctx.r3.u64 = STATUS_SUCCESS;
}
