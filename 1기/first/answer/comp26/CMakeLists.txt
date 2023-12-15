cmake_minimum_required(VERSION 3.26)
project(comp26)

set(CMAKE_CXX_STANDARD 17)

add_executable(comp26 main.cpp
        railgun/entity/RailGun.cpp
        railgun/entity/RailGun.h
        railgun/controller/RailGunController.cpp
        railgun/controller/RailGunController.h
        railgun/service/RailGunService.h
        railgun/service/RailGunServiceImpl.cpp
        railgun/service/RailGunServiceImpl.h
        railgun/repository/RailGunRepository.h
        railgun/repository/RailGunRepositoryImpl.cpp
        railgun/repository/RailGunRepositoryImpl.h
        velocity/repository/VelocityRepository.h
        velocity/repository/VelocityRepositoryImpl.cpp
        velocity/repository/VelocityRepositoryImpl.h
        velocity/service/VelocityService.h
        velocity/service/VelocityServiceImpl.cpp
        velocity/service/VelocityServiceImpl.h)
