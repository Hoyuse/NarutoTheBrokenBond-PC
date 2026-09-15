cmake_minimum_required(VERSION 3.20)
project(NarutoRecompiled CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(
    -O2 
    -mavx2 
    -Wno-unused-variable 
    -Wno-unused-but-set-variable
    -Wno-unused-value
    -Wno-unused-label
    -Wno-parentheses
)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../XenonRecomp/XenonUtils
    ${CMAKE_CURRENT_SOURCE_DIR}/../XenonRecomp/thirdparty/simde
)

file(GLOB SOURCES 
    ppc_recomp.*.cpp
    ppc_func_mapping.cpp
)

add_library(NarutoRecompiled STATIC ${SOURCES})
