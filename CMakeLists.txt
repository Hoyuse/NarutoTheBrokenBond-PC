cmake_minimum_required(VERSION 3.20)
project(NarutoPortPc C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(XENON_DIR ${CMAKE_CURRENT_SOURCE_DIR}/XenonRecomp)
set(THIRDPARTY_ROOT ${XENON_DIR}/thirdparty)

# 1. Disasm thirdparty
add_subdirectory(${THIRDPARTY_ROOT}/disasm ${CMAKE_BINARY_DIR}/thirdparty/disasm)

# 2. XenonUtils
add_library(XenonUtils STATIC
    ${XENON_DIR}/XenonUtils/disasm.cpp
    ${XENON_DIR}/XenonUtils/xex.cpp
    ${XENON_DIR}/XenonUtils/image.cpp
    ${XENON_DIR}/XenonUtils/xdbf_wrapper.cpp
    ${XENON_DIR}/XenonUtils/xex_patcher.cpp
    ${XENON_DIR}/XenonUtils/memory_mapped_file.cpp
    ${THIRDPARTY_ROOT}/libmspack/libmspack/mspack/lzxd.c
    ${THIRDPARTY_ROOT}/tiny-AES-c/aes.c
)

target_compile_definitions(XenonUtils PRIVATE NOMINMAX)

target_include_directories(XenonUtils 
    PUBLIC
        ${XENON_DIR}/XenonUtils
        ${THIRDPARTY_ROOT}/simde
    PRIVATE
        ${THIRDPARTY_ROOT}/libmspack/libmspack/mspack
        ${THIRDPARTY_ROOT}/tiny-AES-c
        ${THIRDPARTY_ROOT}/TinySHA1
)

target_link_libraries(XenonUtils PUBLIC disasm)

# 3. NarutoRecompiled (196 units + func mapping)
add_subdirectory(NarutoSource ${CMAKE_BINARY_DIR}/NarutoSource)

# 4. Naruto PC Runtime Harness Executable
add_executable(naruto_runtime
    runtime/main.cpp
    runtime/memory_manager.cpp
    runtime/hle_stubs.cpp
)

target_include_directories(naruto_runtime PRIVATE
    runtime
    NarutoSource
    ${XENON_DIR}/XenonUtils
    ${THIRDPARTY_ROOT}/simde
)

target_compile_options(naruto_runtime PRIVATE
    -O2
    -mavx2
    -Wall
    -Wno-unused-parameter
)

target_link_libraries(naruto_runtime PRIVATE
    NarutoRecompiled
    XenonUtils
    pthread
)
