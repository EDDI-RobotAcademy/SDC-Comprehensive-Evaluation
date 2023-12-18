cmake_minimum_required(VERSION 3.26)
project(comp12)

set(CMAKE_CXX_STANDARD 17)

add_executable(comp12 main.cpp
        randomVelocity/randomVelocity.cpp
        randomVelocity/randomVelocity.h
        utility/RandomGenerator.cpp
        utility/RandomGenerator.h
        velocity/Velocity.cpp
        velocity/Velocity.h)
