cmake_minimum_required(VERSION 3.27)
project(comp12)

set(CMAKE_CXX_STANDARD 17)

add_executable(comp12 main.cpp
        velocity/entity/Velocity.cpp
        velocity/entity/Velocity.h
        mysql/DbProcess.cpp
        mysql/DbProcess.h
        velocity/repository/VelocityRepositoy.cpp
        velocity/repository/VelocityRepositoy.h)
