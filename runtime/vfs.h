#pragma once
#include <cstdint>
#include <string>
#include <vector>
#include <memory>
#include <mutex>
#include <unordered_map>
#include <filesystem>
#include <cstdio>
#include "hle_types.h"

#define STATUS_NO_MORE_FILES ((NTSTATUS)0x80000006L)

namespace VFS {

void Initialize(const std::string& gameRoot = "Naruto_The_Broken_Bond");

std::string ResolvePath(const std::string& guestPath);

NTSTATUS OpenFile(
    uint8_t* base,
    uint32_t handlePtr,
    uint32_t desiredAccess,
    uint32_t objAttrPtr,
    uint32_t ioStatusPtr,
    uint32_t shareAccess,
    uint32_t openOptions
);

NTSTATUS CreateFile(
    uint8_t* base,
    uint32_t handlePtr,
    uint32_t desiredAccess,
    uint32_t objAttrPtr,
    uint32_t ioStatusPtr,
    uint32_t allocSizePtr,
    uint32_t fileAttributes,
    uint32_t shareAccess,
    uint32_t createDisposition,
    uint32_t createOptions
);

NTSTATUS ReadFile(
    uint8_t* base,
    uint32_t handle,
    uint32_t eventHandle,
    uint32_t apcRoutine,
    uint32_t apcContext,
    uint32_t ioStatusPtr,
    uint32_t bufferPtr,
    uint32_t length,
    uint32_t byteOffsetPtr
);

NTSTATUS ReadFileScatter(
    uint8_t* base,
    uint32_t handle,
    uint32_t eventHandle,
    uint32_t apcRoutine,
    uint32_t apcContext,
    uint32_t ioStatusPtr,
    uint32_t segmentArrayPtr,
    uint32_t length,
    uint32_t byteOffsetPtr
);

NTSTATUS QueryInformationFile(
    uint8_t* base,
    uint32_t handle,
    uint32_t ioStatusPtr,
    uint32_t infoPtr,
    uint32_t length,
    uint32_t infoClass
);

NTSTATUS SetInformationFile(
    uint8_t* base,
    uint32_t handle,
    uint32_t ioStatusPtr,
    uint32_t infoPtr,
    uint32_t length,
    uint32_t infoClass
);

NTSTATUS QueryDirectoryFile(
    uint8_t* base,
    uint32_t handle,
    uint32_t eventHandle,
    uint32_t apcRoutine,
    uint32_t apcContext,
    uint32_t ioStatusPtr,
    uint32_t bufferPtr,
    uint32_t length,
    uint32_t infoClass,
    bool returnSingleEntry,
    uint32_t fileNameFilterPtr,
    bool restartScan
);

bool CloseFile(uint32_t handle);

} // namespace VFS
