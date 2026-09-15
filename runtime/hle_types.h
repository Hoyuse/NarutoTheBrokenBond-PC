#pragma once
#include <cstdint>
#include <cstddef>
#include <cstring>
#include <string>

// NTSTATUS Definitions
using NTSTATUS = int32_t;
#define STATUS_SUCCESS                   ((NTSTATUS)0x00000000L)
#define STATUS_UNSUCCESSFUL              ((NTSTATUS)0xC0000001L)
#define STATUS_NOT_IMPLEMENTED           ((NTSTATUS)0xC0000002L)
#define STATUS_INVALID_INFO_CLASS        ((NTSTATUS)0xC0000003L)
#define STATUS_INFO_LENGTH_MISMATCH      ((NTSTATUS)0xC0000004L)
#define STATUS_ACCESS_VIOLATION          ((NTSTATUS)0xC0000005L)
#define STATUS_IN_PAGE_ERROR             ((NTSTATUS)0xC0000006L)
#define STATUS_INVALID_HANDLE            ((NTSTATUS)0xC0000008L)
#define STATUS_INVALID_PARAMETER         ((NTSTATUS)0xC000000DL)
#define STATUS_NO_MEMORY                 ((NTSTATUS)0xC0000017L)
#define STATUS_OBJECT_NAME_NOT_FOUND     ((NTSTATUS)0xC0000034L)
#define STATUS_OBJECT_NAME_COLLISION     ((NTSTATUS)0xC0000035L)
#define STATUS_END_OF_FILE               ((NTSTATUS)0xC0000011L)

// Guest String structures (Big-Endian pointers and sizes)
#pragma pack(push, 1)
struct GuestAnsiString {
    uint16_t length;
    uint16_t maximumLength;
    uint32_t buffer; // 32-bit guest pointer
};

struct GuestUnicodeString {
    uint16_t length;
    uint16_t maximumLength;
    uint32_t buffer; // 32-bit guest pointer
};

struct GuestVideoMode {
    uint32_t dwDisplayWidth;
    uint32_t dwDisplayHeight;
    uint32_t fIsInterlaced;
    uint32_t fIsWideScreen;
    uint32_t fIsHiDef;
    uint32_t refreshRate;
    uint32_t videoStandard;
    uint32_t videoFlags;
    uint32_t reserved[4];
};

struct GuestExecutionId {
    uint32_t mediaId;
    uint32_t version;
    uint32_t baseVersion;
    uint32_t titleId;
    uint8_t  platform;
    uint8_t  executableType;
    uint8_t  discNum;
    uint8_t  discsInSet;
    uint32_t saveGameId;
};
#pragma pack(pop)

inline uint8_t GuestReadU8(const uint8_t* base, uint32_t addr) {
    return *(const uint8_t*)(base + addr);
}

inline uint16_t GuestReadU16(const uint8_t* base, uint32_t addr) {
    return __builtin_bswap16(*(const uint16_t*)(base + addr));
}

inline uint32_t GuestReadU32(const uint8_t* base, uint32_t addr) {
    return __builtin_bswap32(*(const uint32_t*)(base + addr));
}

inline uint64_t GuestReadU64(const uint8_t* base, uint32_t addr) {
    return __builtin_bswap64(*(const uint64_t*)(base + addr));
}

inline void GuestWriteU8(uint8_t* base, uint32_t addr, uint8_t val) {
    *(uint8_t*)(base + addr) = val;
}

inline void GuestWriteU16(uint8_t* base, uint32_t addr, uint16_t val) {
    *(uint16_t*)(base + addr) = __builtin_bswap16(val);
}

inline void GuestWriteU32(uint8_t* base, uint32_t addr, uint32_t val) {
    *(uint32_t*)(base + addr) = __builtin_bswap32(val);
}

inline void GuestWriteU64(uint8_t* base, uint32_t addr, uint64_t val) {
    *(uint64_t*)(base + addr) = __builtin_bswap64(val);
}

inline std::string GuestReadAnsiString(const uint8_t* base, uint32_t addr) {
    if (addr == 0) return "";
    const char* str = reinterpret_cast<const char*>(base + addr);
    return std::string(str);
}
