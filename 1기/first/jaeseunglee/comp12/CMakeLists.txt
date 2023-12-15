cmake_minimum_required(VERSION 3.27)
project(comp12)

set(CMAKE_CXX_STANDARD 17)

add_executable(comp12 main.cpp
        entity/Vector.cpp
        entity/Vector.h)
