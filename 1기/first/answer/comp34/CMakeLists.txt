cmake_minimum_required(VERSION 3.16)
project(comp34 C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")

add_executable(comp34 main.c
        request/request.c
        request/request.h
        response/response.c
        response/response.h)
