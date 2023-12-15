cmake_minimum_required(VERSION 3.16)
project(comp24 C)

set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")

set(CMAKE_BUILD_TYPE Debug)

file(GLOB SOURCE_FILES
        "*.c"
)

add_executable(
    comp24
    ${SOURCE_FILES}
        entity/Product.c
        entity/Product.h
)
