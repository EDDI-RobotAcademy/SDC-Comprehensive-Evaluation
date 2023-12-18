cmake_minimum_required(VERSION 3.27)
project(comp12)

set(CMAKE_CXX_STANDARD 17)

add_executable(comp12 main.cpp

        Entity/12_Speed/Speed.cpp
        Entity/12_Speed/Speed.h
        Entity/15_Sleep/Sleep.cpp
        Entity/15_Sleep/Sleep.h
        Entity/16_Loop/Loop.cpp
        Entity/16_Loop/Loop.h
        mysql/DbProcess.cpp
        mysql/DbProcess.h)
