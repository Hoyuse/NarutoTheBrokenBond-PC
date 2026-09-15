#pragma once
#include "ppc_context.h"
#include "hle_types.h"

namespace HLE {
    void Initialize();
    void SetVerboseLogging(bool verbose);
    void DumpThreadStates();
    uint32_t CreateKPCR(uint8_t* base, uint32_t threadId, uint8_t cpuId, uint32_t stackAlloc, uint32_t stackTop);
}
