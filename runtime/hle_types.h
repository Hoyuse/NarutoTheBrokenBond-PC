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

// Processor Control Region (Xbox 360 KPCR)
struct GuestKPCR {
    uint32_t tls_ptr;         // 0x00
    uint8_t  unk_04[0x2C];    // 0x04
    uint32_t pcr_ptr;         // 0x30
    uint8_t  unk_34[0x3C];    // 0x34
    uint32_t stack_base_ptr;  // 0x70 Stack base address (high addr)
    uint32_t stack_end_ptr;   // 0x74 Stack end (low addr)
    uint8_t  unk_78[0x88];    // 0x78
    uint32_t current_thread;  // 0x100 (256 decimal)
    uint8_t  unk_104[0x8];    // 0x104
    uint8_t  current_cpu;     // 0x10C (268 decimal)
    uint8_t  unk_10D[0x43];   // 0x10D
    uint32_t dpc_active;      // 0x150
};

// Thread Kernel Object (Xbox 360 KTHREAD)
struct GuestKTHREAD {
    uint8_t  header[0x10];    // 0x00: Dispatch header (type=6)
    uint8_t  unk_10[0x44];    // 0x10
    uint16_t state;           // 0x54: 0x102
    uint16_t saturation;      // 0x56: 1
    uint32_t kernel_time;     // 0x58: Thread kernel/tick time (88 decimal)
    uint32_t stack_base;      // 0x5C: High address
    uint32_t stack_limit;     // 0x60: Low address
    uint8_t  unk_64[0xE8];    // 0x64
    uint32_t thread_id;       // 0x14C: Unique thread ID (332 decimal)
    uint32_t start_address;   // 0x150
    uint8_t  unk_154[0x0C];   // 0x154
    uint32_t last_error;      // 0x160: Last Error Value (352 decimal)
};

// Video Display Info (X_DISPLAY_INFO)
struct GuestDisplayInfo {
    uint16_t front_buffer_width;               // 0x00
    uint16_t front_buffer_height;              // 0x02
    uint8_t  front_buffer_color_format;         // 0x04
    uint8_t  front_buffer_pixel_format;         // 0x05
    uint8_t  pad_06[2];                         // 0x06
    uint32_t scaler_source_rect_x1;            // 0x08
    uint32_t scaler_source_rect_y1;            // 0x0C
    uint32_t scaler_source_rect_x2;            // 0x10
    uint32_t scaler_source_rect_y2;            // 0x14
    uint32_t scaled_output_width;              // 0x18
    uint32_t scaled_output_height;             // 0x1C
    uint32_t vertical_filter_type;             // 0x20
    uint32_t nyquist_v;                        // 0x24
    uint32_t flicker_filter_v;                 // 0x28
    uint32_t beta_v;                           // 0x2C
    uint32_t horizontal_filter_type;           // 0x30
    uint32_t nyquist_h;                        // 0x34
    uint32_t flicker_filter_h;                 // 0x38
    uint32_t beta_h;                           // 0x3C
    uint16_t display_window_overscan_left;     // 0x40
    uint16_t display_window_overscan_top;      // 0x42
    uint16_t display_window_overscan_right;    // 0x44
    uint16_t display_window_overscan_bottom;   // 0x46
    uint16_t display_width;                    // 0x48 (440 on stack)
    uint16_t display_height;                   // 0x4A (442 on stack)
    uint32_t display_refresh_rate;             // 0x4C (float 60.0f)
    uint32_t display_interlaced;               // 0x50
    uint8_t  display_color_format;              // 0x54
    uint8_t  pad_55;                            // 0x55
    uint16_t actual_display_width;             // 0x56 (454 on stack)
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
