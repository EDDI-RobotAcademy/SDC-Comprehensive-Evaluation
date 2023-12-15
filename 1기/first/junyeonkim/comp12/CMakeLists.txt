cmake_minimum_required(VERSION 3.26)
project(comp12)

set(CMAKE_CXX_STANDARD 17)

add_executable(comp12 main.cpp
        Speed/Speed.cpp
        Speed/Speed.h
        DatabaseConnection/DatabaseConnection.cpp
        DatabaseConnection/DatabaseConnection.h
        RandomSleep/RandomSleep.cpp
        RandomSleep/RandomSleep.h
)
