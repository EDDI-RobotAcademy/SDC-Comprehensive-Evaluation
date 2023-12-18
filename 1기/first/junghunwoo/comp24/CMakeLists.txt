cmake_minimum_required(VERSION 3.27)
project(comp24 C)

set(CMAKE_C_STANDARD 11)

add_executable(comp24 main.c
        entity/Product.c
        entity/Product.h)
