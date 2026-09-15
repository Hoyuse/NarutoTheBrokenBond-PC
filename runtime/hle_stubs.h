#pragma once
#include "ppc_context.h"
#include "hle_types.h"

namespace HLE {
    void Initialize();
    void SetVerboseLogging(bool verbose);
    void DumpThreadStates();
}
