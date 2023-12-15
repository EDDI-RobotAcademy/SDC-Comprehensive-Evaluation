cmake_minimum_required(VERSION 3.26)
project(comp34 C)

set(CMAKE_C_STANDARD 11)

add_executable(comp34 main.c
        Request/Request.c
        Request/Request.h
        Response/Response.c
        Response/Response.h)
