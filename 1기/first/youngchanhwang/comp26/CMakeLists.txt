cmake_minimum_required(VERSION 3.26)
project(comp26)

set(CMAKE_CXX_STANDARD 17)

add_executable(comp26 main.cpp
        entity/Railgun.cpp
        entity/Railgun.h
        calculate/Railgun_shoot_time.cpp
        calculate/Railgun_shoot_time.h
        calculate/Railgun_shoot_speed.cpp
        calculate/Railgun_shoot_speed.h)
