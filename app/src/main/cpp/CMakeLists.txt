cmake_minimum_required(VERSION 3.4.1)

include_directories(libleaktracer/include)

add_library(
        leaktracer
        SHARED

        leaktracer_jni.cpp
        Object.cpp
        libleaktracer/src/AllocationHandlers.cpp
        libleaktracer/src/MemoryTrace.cpp)

target_link_libraries(
        leaktracer
        android
        log)