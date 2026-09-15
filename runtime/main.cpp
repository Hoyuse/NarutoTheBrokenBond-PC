#include <iostream>
#include <iomanip>
#include <csignal>
#include <cstdlib>
#include <cstring>
#include <atomic>
#include <chrono>
#include <thread>
#include "ppc_context.h"
#include "ppc_recomp_shared.h"
#include "memory_manager.h"
#include "hle_stubs.h"

// Global context pointer for crash handler
static PPCContext* g_activeContext = nullptr;
static uint8_t* g_activeBase = nullptr;

static void CrashHandler(int sig) {
    const char* sigName = "UNKNOWN";
    switch (sig) {
        case SIGSEGV: sigName = "SIGSEGV (Segmentation Fault)"; break;
        case SIGILL:  sigName = "SIGILL (Illegal Instruction)"; break;
        case SIGFPE:  sigName = "SIGFPE (Floating Point Exception)"; break;
        case SIGBUS:  sigName = "SIGBUS (Bus Error)"; break;
        case SIGINT:  sigName = "SIGINT (Interrupted / Freeze Dump)"; break;
    }

    std::cerr << "\n\033[1;31m====================================================" << std::endl;
    std::cerr << "          FATAL CRASH DETECTED: " << sigName << std::endl;
    std::cerr << "====================================================\033[0m" << std::endl;

    if (g_activeContext != nullptr) {
        std::cerr << std::hex << std::setfill('0');
        std::cerr << "\033[1;33mPPC Registers Dump:\033[0m" << std::endl;
        std::cerr << "  r0:  0x" << std::setw(16) << g_activeContext->r0.u64 << "   r1 (SP): 0x" << std::setw(16) << g_activeContext->r1.u64 << std::endl;
        std::cerr << "  r2:  0x" << std::setw(16) << g_activeContext->r2.u64 << "   r3:      0x" << std::setw(16) << g_activeContext->r3.u64 << std::endl;
        std::cerr << "  r4:  0x" << std::setw(16) << g_activeContext->r4.u64 << "   r5:      0x" << std::setw(16) << g_activeContext->r5.u64 << std::endl;
        std::cerr << "  r6:  0x" << std::setw(16) << g_activeContext->r6.u64 << "   r7:      0x" << std::setw(16) << g_activeContext->r7.u64 << std::endl;
        std::cerr << "  r8:  0x" << std::setw(16) << g_activeContext->r8.u64 << "   r9:      0x" << std::setw(16) << g_activeContext->r9.u64 << std::endl;
        std::cerr << "  r10: 0x" << std::setw(16) << g_activeContext->r10.u64 << "   r11:     0x" << std::setw(16) << g_activeContext->r11.u64 << std::endl;
        std::cerr << "  r12: 0x" << std::setw(16) << g_activeContext->r12.u64 << "   r13:     0x" << std::setw(16) << g_activeContext->r13.u64 << std::endl;
        std::cerr << "  r14: 0x" << std::setw(16) << g_activeContext->r14.u64 << "   r15:     0x" << std::setw(16) << g_activeContext->r15.u64 << std::endl;
        std::cerr << "  r16: 0x" << std::setw(16) << g_activeContext->r16.u64 << "   r17:     0x" << std::setw(16) << g_activeContext->r17.u64 << std::endl;
        std::cerr << "  r18: 0x" << std::setw(16) << g_activeContext->r18.u64 << "   r19:     0x" << std::setw(16) << g_activeContext->r19.u64 << std::endl;
        std::cerr << "  r20: 0x" << std::setw(16) << g_activeContext->r20.u64 << "   r21:     0x" << std::setw(16) << g_activeContext->r21.u64 << std::endl;
        std::cerr << "  r22: 0x" << std::setw(16) << g_activeContext->r22.u64 << "   r23:     0x" << std::setw(16) << g_activeContext->r23.u64 << std::endl;
        std::cerr << "  r24: 0x" << std::setw(16) << g_activeContext->r24.u64 << "   r25:     0x" << std::setw(16) << g_activeContext->r25.u64 << std::endl;
        std::cerr << "  r26: 0x" << std::setw(16) << g_activeContext->r26.u64 << "   r27:     0x" << std::setw(16) << g_activeContext->r27.u64 << std::endl;
        std::cerr << "  r28: 0x" << std::setw(16) << g_activeContext->r28.u64 << "   r29:     0x" << std::setw(16) << g_activeContext->r29.u64 << std::endl;
        std::cerr << "  r30: 0x" << std::setw(16) << g_activeContext->r30.u64 << "   r31:     0x" << std::setw(16) << g_activeContext->r31.u64 << std::endl;
        std::cerr << "  LR:  0x" << std::setw(16) << g_activeContext->lr << "   CTR:     0x" << std::setw(16) << g_activeContext->ctr.u64 << std::endl;

        if (g_activeBase != nullptr && g_activeContext->r1.u32 != 0) {
            std::cerr << "\n\033[1;33mGuest Stack Peek (near r1):\033[0m" << std::endl;
            uint32_t sp = g_activeContext->r1.u32;
            for (int offset = -32; offset <= 32; offset += 8) {
                uint32_t addr = sp + offset;
                uint64_t val = __builtin_bswap64(*(uint64_t*)(g_activeBase + addr));
                std::cerr << "  SP" << (offset >= 0 ? "+" : "") << std::dec << offset
                          << " (0x" << std::hex << addr << "): 0x" << std::setw(16) << val << std::endl;
            }
        }
        std::cerr << std::dec;
    }

    std::cerr << "\033[1;31m====================================================\033[0m" << std::endl;
    std::exit(128 + sig);
}

static void SetupSignalHandlers() {
    struct sigaction sa;
    std::memset(&sa, 0, sizeof(sa));
    sa.sa_handler = CrashHandler;
    sigemptyset(&sa.sa_mask);

    sigaction(SIGSEGV, &sa, nullptr);
    sigaction(SIGILL, &sa, nullptr);
    sigaction(SIGFPE, &sa, nullptr);
    sigaction(SIGBUS, &sa, nullptr);
    sigaction(SIGINT, &sa, nullptr);
}

int main(int argc, char** argv) {
    std::cout << "\033[1;32m====================================================" << std::endl;
    std::cerr << "   Naruto: The Broken Bond - Native PC Runtime" << std::endl;
    std::cout << "   XenonRecomp Static Recompilation Harness" << std::endl;
    std::cout << "====================================================\033[0m" << std::endl;

    std::string xexPath = "Naruto_The_Broken_Bond/default.xex";
    bool verboseHle = false;

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "--verbose" || arg == "-v" || arg == "--verbose-hle") {
            verboseHle = true;
        } else if (arg == "--help" || arg == "-h") {
            std::cout << "Usage: " << argv[0] << " [options] [path_to_default.xex]\n"
                      << "Options:\n"
                      << "  --verbose, -v       Enable verbose HLE logging\n"
                      << "  --help, -h          Show this help message\n";
            return 0;
        } else if (arg[0] != '-') {
            xexPath = arg;
        }
    }

    SetupSignalHandlers();
    HLE::Initialize();
    HLE::SetVerboseLogging(verboseHle);

    auto& mm = MemoryManager::Instance();
    if (!mm.Initialize()) {
        std::cerr << "[Runtime] Fatal: Failed to initialize memory manager." << std::endl;
        return 1;
    }

    if (!mm.LoadXex(xexPath)) {
        std::cerr << "[Runtime] Fatal: Failed to load XEX from: " << xexPath << std::endl;
        return 1;
    }

    mm.InitializeLookupTable();

    // Setup PPC Execution Context
    alignas(64) PPCContext ctx{};
    uint8_t* base = mm.GetBase();

    g_activeContext = &ctx;
    g_activeBase = base;

    // Initialize Guest Stack Pointer (r1)
    ctx.r1.u64 = mm.GetStackTop();
    ctx.fpscr.setcsr(0x1F80); // Default SSE MXCSR state (mask exceptions)

    std::cout << "\n\033[1;32m[Runtime] Starting execution at entry point _xstart (0x"
              << std::hex << mm.GetEntryPoint() << ") with stack 0x" << ctx.r1.u64 << " ...\033[0m\n" << std::dec << std::endl;

    std::atomic<bool> isRunning{ true };
    std::thread watchdog([&isRunning]() {
        while (isRunning.load(std::memory_order_relaxed)) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            if (!isRunning.load(std::memory_order_relaxed)) break;
            if (g_activeContext) {
                std::cout << "\033[1;35m[Watchdog] Main Thread LR=0x" << std::hex << g_activeContext->lr
                          << " SP=0x" << g_activeContext->r1.u32 << std::dec << "\033[0m" << std::endl;
            }
            HLE::DumpThreadStates();
        }
    });
    watchdog.detach();

    // Invoke entry point
    _xstart(ctx, base);

    isRunning.store(false);
    std::cout << "\n\033[1;32m[Runtime] Execution finished. _xstart returned cleanly.\033[0m" << std::endl;

    return 0;
}
