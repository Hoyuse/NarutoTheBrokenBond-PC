#include "vfs.h"
#include <iostream>
#include <algorithm>
#include <cstring>
#include <strings.h>
#include <sys/stat.h>
#include <atomic>

namespace VFS {

struct GuestFile {
    uint32_t handle{ 0 };
    std::string guestPath;
    std::string hostPath;
    FILE* fp{ nullptr };
    bool isDirectory{ false };
    uint64_t fileSize{ 0 };
    uint64_t filePos{ 0 };
    std::vector<std::string> dirEntries;
    size_t dirIndex{ 0 };
    std::mutex mtx;

    ~GuestFile() {
        if (fp) {
            fclose(fp);
            fp = nullptr;
        }
    }
};

static std::string s_gameRoot = "Naruto_The_Broken_Bond";
static std::mutex g_vfsMutex;
static std::unordered_map<uint32_t, std::shared_ptr<GuestFile>> g_files;
static std::atomic<uint32_t> s_nextHandle{ 0x8000 };

void Initialize(const std::string& gameRoot) {
    std::lock_guard<std::mutex> lock(g_vfsMutex);
    s_gameRoot = gameRoot;
    if (!std::filesystem::exists(s_gameRoot)) {
        s_gameRoot = ".";
    }
    std::cout << "\033[1;36m[VFS] Virtual File System initialized with game root: "
              << std::filesystem::absolute(s_gameRoot).string() << "\033[0m" << std::endl;
}

static std::string CaseInsensitiveLookup(const std::filesystem::path& baseDir, const std::string& subpath) {
    std::filesystem::path current = baseDir;
    std::string remaining = subpath;

    while (!remaining.empty()) {
        size_t slash = remaining.find('/');
        std::string part = (slash == std::string::npos) ? remaining : remaining.substr(0, slash);
        remaining = (slash == std::string::npos) ? "" : remaining.substr(slash + 1);

        if (part == "." || part.empty()) continue;
        if (part == "..") {
            current = current.parent_path();
            continue;
        }

        bool found = false;
        if (std::filesystem::exists(current) && std::filesystem::is_directory(current)) {
            for (const auto& entry : std::filesystem::directory_iterator(current)) {
                std::string entryName = entry.path().filename().string();
                if (strcasecmp(entryName.c_str(), part.c_str()) == 0) {
                    current = entry.path();
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            current /= part;
        }
    }

    return current.string();
}

std::string ResolvePath(const std::string& guestPath) {
    std::string p = guestPath;

    // Strip common NT/Xbox prefixes
    const std::vector<std::string> prefixes = {
        "\\??\\", "\\\\?\\", "\\Device\\Cdrom0\\", "\\Device\\Harddisk0\\Partition1\\",
        "d:\\", "D:\\", "game:\\", "GAME:\\", "d:/", "D:/", "game:/", "GAME:/"
    };

    for (const auto& prefix : prefixes) {
        if (p.rfind(prefix, 0) == 0) {
            p = p.substr(prefix.length());
            break;
        }
    }

    // Replace backslashes with forward slashes
    std::replace(p.begin(), p.end(), '\\', '/');

    // Remove leading slashes
    while (!p.empty() && p.front() == '/') {
        p.erase(0, 1);
    }

    if (p.empty() || p == "*.*" || p == ".") {
        return s_gameRoot;
    }

    // Check if filename ends with wildcard e.g. dir/*.*
    if (p.length() >= 4 && p.substr(p.length() - 4) == "/*.*") {
        p = p.substr(0, p.length() - 4);
    }

    return CaseInsensitiveLookup(s_gameRoot, p);
}

static std::string ExtractGuestPath(const uint8_t* base, uint32_t objAttrPtr) {
    if (objAttrPtr == 0) return "";
    uint32_t ansiStrPtr = GuestReadU32(base, objAttrPtr + 4);
    if (ansiStrPtr == 0) return "";
    uint32_t bufPtr = GuestReadU32(base, ansiStrPtr + 4);
    if (bufPtr == 0) return "";
    return reinterpret_cast<const char*>(base + bufPtr);
}

NTSTATUS OpenFile(
    uint8_t* base,
    uint32_t handlePtr,
    uint32_t desiredAccess,
    uint32_t objAttrPtr,
    uint32_t ioStatusPtr,
    uint32_t shareAccess,
    uint32_t openOptions
) {
    std::string rawPath = ExtractGuestPath(base, objAttrPtr);
    std::string hostPath = ResolvePath(rawPath);

    std::cout << "\033[1;35m[VFS] NtOpenFile: \"" << rawPath << "\" -> \"" << hostPath << "\"\033[0m" << std::endl;

    bool isWildcardOrDir = (rawPath.find("*.*") != std::string::npos) ||
                           std::filesystem::is_directory(hostPath) ||
                           (openOptions & 0x00000001); // FILE_DIRECTORY_FILE

    auto file = std::make_shared<GuestFile>();
    file->guestPath = rawPath;
    file->hostPath = hostPath;
    file->handle = s_nextHandle.fetch_add(4);

    if (isWildcardOrDir) {
        file->isDirectory = true;
        std::filesystem::path dirPath = std::filesystem::is_directory(hostPath) ? hostPath : s_gameRoot;
        if (std::filesystem::exists(dirPath)) {
            for (const auto& entry : std::filesystem::directory_iterator(dirPath)) {
                file->dirEntries.push_back(entry.path().filename().string());
            }
        }
    } else {
        file->isDirectory = false;
        file->fp = fopen(hostPath.c_str(), "rb");
        if (!file->fp) {
            std::cout << "\033[1;33m[VFS] File not found: " << hostPath << "\033[0m" << std::endl;
            if (ioStatusPtr != 0) {
                GuestWriteU32(base, ioStatusPtr, STATUS_OBJECT_NAME_NOT_FOUND);
                GuestWriteU32(base, ioStatusPtr + 4, 0);
            }
            return STATUS_OBJECT_NAME_NOT_FOUND;
        }
        fseeko(file->fp, 0, SEEK_END);
        file->fileSize = ftello(file->fp);
        fseeko(file->fp, 0, SEEK_SET);
    }

    {
        std::lock_guard<std::mutex> lock(g_vfsMutex);
        g_files[file->handle] = file;
    }

    if (handlePtr != 0) {
        GuestWriteU32(base, handlePtr, file->handle);
    }
    if (ioStatusPtr != 0) {
        GuestWriteU32(base, ioStatusPtr, STATUS_SUCCESS);
        GuestWriteU32(base, ioStatusPtr + 4, 1); // FILE_OPENED
    }

    std::cout << "\033[1;32m[VFS] Successfully opened handle 0x" << std::hex << file->handle
              << " (Size: " << std::dec << file->fileSize << " bytes)\033[0m" << std::endl;

    return STATUS_SUCCESS;
}

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
) {
    return OpenFile(base, handlePtr, desiredAccess, objAttrPtr, ioStatusPtr, shareAccess, createOptions);
}

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
) {
    std::shared_ptr<GuestFile> file;
    {
        std::lock_guard<std::mutex> lock(g_vfsMutex);
        auto it = g_files.find(handle);
        if (it != g_files.end()) file = it->second;
    }

    if (!file || !file->fp) {
        if (ioStatusPtr != 0) {
            GuestWriteU32(base, ioStatusPtr, STATUS_INVALID_HANDLE);
            GuestWriteU32(base, ioStatusPtr + 4, 0);
        }
        return STATUS_INVALID_HANDLE;
    }

    std::lock_guard<std::mutex> lock(file->mtx);

    if (byteOffsetPtr != 0) {
        uint64_t targetOffset = GuestReadU64(base, byteOffsetPtr);
        fseeko(file->fp, static_cast<off_t>(targetOffset), SEEK_SET);
        file->filePos = targetOffset;
    }

    size_t bytesRead = fread(base + bufferPtr, 1, length, file->fp);
    file->filePos += bytesRead;

    if (ioStatusPtr != 0) {
        GuestWriteU32(base, ioStatusPtr, STATUS_SUCCESS);
        GuestWriteU32(base, ioStatusPtr + 4, static_cast<uint32_t>(bytesRead));
    }

    return STATUS_SUCCESS;
}

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
) {
    std::shared_ptr<GuestFile> file;
    {
        std::lock_guard<std::mutex> lock(g_vfsMutex);
        auto it = g_files.find(handle);
        if (it != g_files.end()) file = it->second;
    }

    if (!file || !file->fp) {
        return STATUS_INVALID_HANDLE;
    }

    std::lock_guard<std::mutex> lock(file->mtx);

    if (byteOffsetPtr != 0) {
        uint64_t targetOffset = GuestReadU64(base, byteOffsetPtr);
        fseeko(file->fp, static_cast<off_t>(targetOffset), SEEK_SET);
        file->filePos = targetOffset;
    }

    constexpr size_t PAGE_SIZE = 4096;
    size_t totalRead = 0;
    size_t remaining = length;
    uint32_t segPtr = segmentArrayPtr;

    while (remaining > 0) {
        uint64_t pageAddr = GuestReadU64(base, segPtr);
        segPtr += 8;
        if (pageAddr == 0) break;

        size_t toRead = std::min(remaining, PAGE_SIZE);
        size_t read = fread(base + static_cast<uint32_t>(pageAddr), 1, toRead, file->fp);
        totalRead += read;
        remaining -= read;
        file->filePos += read;
        if (read < toRead) break;
    }

    if (ioStatusPtr != 0) {
        GuestWriteU32(base, ioStatusPtr, STATUS_SUCCESS);
        GuestWriteU32(base, ioStatusPtr + 4, static_cast<uint32_t>(totalRead));
    }

    return STATUS_SUCCESS;
}

NTSTATUS QueryInformationFile(
    uint8_t* base,
    uint32_t handle,
    uint32_t ioStatusPtr,
    uint32_t infoPtr,
    uint32_t length,
    uint32_t infoClass
) {
    std::shared_ptr<GuestFile> file;
    {
        std::lock_guard<std::mutex> lock(g_vfsMutex);
        auto it = g_files.find(handle);
        if (it != g_files.end()) file = it->second;
    }

    if (!file) {
        return STATUS_INVALID_HANDLE;
    }

    std::lock_guard<std::mutex> lock(file->mtx);

    // FileStandardInformation = 5
    if (infoClass == 5) {
        if (length >= 24) {
            GuestWriteU64(base, infoPtr, file->fileSize);          // AllocationSize
            GuestWriteU64(base, infoPtr + 8, file->fileSize);      // EndOfFile
            GuestWriteU32(base, infoPtr + 16, 1);                  // NumberOfLinks
            GuestWriteU8(base, infoPtr + 20, 0);                   // DeletePending
            GuestWriteU8(base, infoPtr + 21, file->isDirectory ? 1 : 0); // Directory
            if (ioStatusPtr != 0) {
                GuestWriteU32(base, ioStatusPtr, STATUS_SUCCESS);
                GuestWriteU32(base, ioStatusPtr + 4, 24);
            }
            return STATUS_SUCCESS;
        }
    }
    // FilePositionInformation = 14
    else if (infoClass == 14) {
        if (length >= 8) {
            GuestWriteU64(base, infoPtr, file->filePos);
            if (ioStatusPtr != 0) {
                GuestWriteU32(base, ioStatusPtr, STATUS_SUCCESS);
                GuestWriteU32(base, ioStatusPtr + 4, 8);
            }
            return STATUS_SUCCESS;
        }
    }
    // FileNetworkOpenInformation = 34
    else if (infoClass == 34) {
        if (length >= 56) {
            GuestWriteU64(base, infoPtr, 0);                       // CreationTime
            GuestWriteU64(base, infoPtr + 8, 0);                   // LastAccessTime
            GuestWriteU64(base, infoPtr + 16, 0);                  // LastWriteTime
            GuestWriteU64(base, infoPtr + 24, 0);                  // ChangeTime
            GuestWriteU64(base, infoPtr + 32, file->fileSize);     // AllocationSize
            GuestWriteU64(base, infoPtr + 40, file->fileSize);     // EndOfFile
            GuestWriteU32(base, infoPtr + 48, file->isDirectory ? 0x10 : 0x20); // FileAttributes
            if (ioStatusPtr != 0) {
                GuestWriteU32(base, ioStatusPtr, STATUS_SUCCESS);
                GuestWriteU32(base, ioStatusPtr + 4, 56);
            }
            return STATUS_SUCCESS;
        }
    }

    if (ioStatusPtr != 0) {
        GuestWriteU32(base, ioStatusPtr, STATUS_SUCCESS);
        GuestWriteU32(base, ioStatusPtr + 4, 0);
    }
    return STATUS_SUCCESS;
}

NTSTATUS SetInformationFile(
    uint8_t* base,
    uint32_t handle,
    uint32_t ioStatusPtr,
    uint32_t infoPtr,
    uint32_t length,
    uint32_t infoClass
) {
    std::shared_ptr<GuestFile> file;
    {
        std::lock_guard<std::mutex> lock(g_vfsMutex);
        auto it = g_files.find(handle);
        if (it != g_files.end()) file = it->second;
    }

    if (!file) {
        return STATUS_INVALID_HANDLE;
    }

    std::lock_guard<std::mutex> lock(file->mtx);

    // FilePositionInformation = 14
    if (infoClass == 14 && length >= 8) {
        uint64_t targetPos = GuestReadU64(base, infoPtr);
        if (file->fp) {
            fseeko(file->fp, static_cast<off_t>(targetPos), SEEK_SET);
        }
        file->filePos = targetPos;
        if (ioStatusPtr != 0) {
            GuestWriteU32(base, ioStatusPtr, STATUS_SUCCESS);
            GuestWriteU32(base, ioStatusPtr + 4, 0);
        }
        return STATUS_SUCCESS;
    }

    if (ioStatusPtr != 0) {
        GuestWriteU32(base, ioStatusPtr, STATUS_SUCCESS);
        GuestWriteU32(base, ioStatusPtr + 4, 0);
    }
    return STATUS_SUCCESS;
}

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
) {
    std::shared_ptr<GuestFile> file;
    {
        std::lock_guard<std::mutex> lock(g_vfsMutex);
        auto it = g_files.find(handle);
        if (it != g_files.end()) file = it->second;
    }

    if (!file || !file->isDirectory) {
        return STATUS_INVALID_HANDLE;
    }

    std::lock_guard<std::mutex> lock(file->mtx);

    if (restartScan) {
        file->dirIndex = 0;
    }

    if (file->dirIndex >= file->dirEntries.size()) {
        if (ioStatusPtr != 0) {
            GuestWriteU32(base, ioStatusPtr, STATUS_NO_MORE_FILES);
            GuestWriteU32(base, ioStatusPtr + 4, 0);
        }
        return STATUS_NO_MORE_FILES;
    }

    const std::string& name = file->dirEntries[file->dirIndex++];
    uint32_t nameLen = static_cast<uint32_t>(name.length());

    // FileDirectoryInformation = 1
    // Structure:
    // +0:  NextEntryOffset (uint32) = 0
    // +4:  FileIndex (uint32)
    // +8:  CreationTime (uint64)
    // +16: LastAccessTime (uint64)
    // +24: LastWriteTime (uint64)
    // +32: ChangeTime (uint64)
    // +40: EndOfFile (uint64)
    // +48: AllocationSize (uint64)
    // +56: FileAttributes (uint32)
    // +60: FileNameLength (uint32)
    // +64: FileName (CHAR[FileNameLength])
    constexpr size_t HEADER_SIZE = 64;
    size_t totalEntrySize = HEADER_SIZE + nameLen + 1;

    if (length >= totalEntrySize) {
        GuestWriteU32(base, bufferPtr, 0); // NextEntryOffset
        GuestWriteU32(base, bufferPtr + 4, static_cast<uint32_t>(file->dirIndex));
        GuestWriteU64(base, bufferPtr + 8, 0);
        GuestWriteU64(base, bufferPtr + 16, 0);
        GuestWriteU64(base, bufferPtr + 24, 0);
        GuestWriteU64(base, bufferPtr + 32, 0);
        GuestWriteU64(base, bufferPtr + 40, 0);
        GuestWriteU64(base, bufferPtr + 48, 0);
        GuestWriteU32(base, bufferPtr + 56, 0x20); // FILE_ATTRIBUTE_ARCHIVE
        GuestWriteU32(base, bufferPtr + 60, nameLen);
        std::memcpy(base + bufferPtr + HEADER_SIZE, name.c_str(), nameLen);
        base[bufferPtr + HEADER_SIZE + nameLen] = '\0';

        if (ioStatusPtr != 0) {
            GuestWriteU32(base, ioStatusPtr, STATUS_SUCCESS);
            GuestWriteU32(base, ioStatusPtr + 4, static_cast<uint32_t>(totalEntrySize));
        }
        return STATUS_SUCCESS;
    }

    return STATUS_INFO_LENGTH_MISMATCH;
}

bool CloseFile(uint32_t handle) {
    std::lock_guard<std::mutex> lock(g_vfsMutex);
    auto it = g_files.find(handle);
    if (it != g_files.end()) {
        std::cout << "\033[1;35m[VFS] Closed handle 0x" << std::hex << handle << "\033[0m" << std::endl;
        g_files.erase(it);
        return true;
    }
    return false;
}

NTSTATUS QueryFullAttributesFile(
    uint8_t* base,
    uint32_t objAttrPtr,
    uint32_t infoPtr
) {
    std::string rawPath = ExtractGuestPath(base, objAttrPtr);
    std::string hostPath = ResolvePath(rawPath);

    struct stat st;
    if (stat(hostPath.c_str(), &st) != 0) {
        return STATUS_OBJECT_NAME_NOT_FOUND;
    }

    std::cout << "\033[1;32m[VFS] QueryFullAttributesFile: FOUND \"" << rawPath << "\" -> \"" << hostPath 
              << "\" (Size: " << st.st_size << " bytes)\033[0m" << std::endl;

    if (infoPtr != 0) {
        uint64_t winTime = (static_cast<uint64_t>(st.st_mtime) + 11644473600ULL) * 10000000ULL;
        GuestWriteU64(base, infoPtr + 0, winTime);  // CreationTime
        GuestWriteU64(base, infoPtr + 8, winTime);  // LastAccessTime
        GuestWriteU64(base, infoPtr + 16, winTime); // LastWriteTime
        GuestWriteU64(base, infoPtr + 24, winTime); // ChangeTime
        GuestWriteU64(base, infoPtr + 32, static_cast<uint64_t>(st.st_size)); // AllocationSize
        GuestWriteU64(base, infoPtr + 40, static_cast<uint64_t>(st.st_size)); // EndOfFile
        uint32_t attr = S_ISDIR(st.st_mode) ? 0x00000010 : 0x00000020; // DIRECTORY / ARCHIVE
        GuestWriteU32(base, infoPtr + 48, attr);    // FileAttributes
    }

    return STATUS_SUCCESS;
}

} // namespace VFS

