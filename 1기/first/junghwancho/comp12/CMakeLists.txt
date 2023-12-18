cmake_minimum_required(VERSION 3.26)
project(cpp_gtest)

set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

set(CMAKE_BUILD_TYPE Debug)

include(FindPkgConfig)
pkg_check_modules(LIBMYSQLCLIENT REQUIRED mysqlclient)
link_directories(${LIBMYSQLCLIENT_LIBRARY_DIRS})

file(GLOB CPP_SOURCES
        main.cpp
        velocity/Velocity.cpp
        velocity/Velocity.h
        mysql/DbProcess.cpp
        mysql/DbProcess.h
        utility/RandomGenerate.cpp
        utility/RandomGenerate.h)

add_executable(
        cpp_gtest
        ${CPP_SOURCES}
        ${MAIN_SOURCES}
        acceleration/Acceleration.cpp
        acceleration/Acceleration.h
)

target_include_directories(cpp_gtest PRIVATE ${LIBMYSQLCLIENT_INCLUDE_DIRS})
target_link_libraries(cpp_gtest PRIVATE ${LIBMYSQLCLIENT_LIBRARIES})