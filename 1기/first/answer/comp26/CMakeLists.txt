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
        uniformVelocityMotion/repository/UniformVelocityMotionRepository.h
        uniformVelocityMotion/service/UniformVelocityMotionService.h
        uniformAccelerationMotion/repository/UniformAccelerationMotionRepository.h
        uniformAccelerationMotion/repository/UniformAccelerationMotionRepositoryImpl.cpp
        uniformAccelerationMotion/repository/UniformAccelerationMotionRepositoryImpl.h
        uniformAccelerationMotion/service/UniformAccelerationMotionService.h
        uniformAccelerationMotion/service/UniformAccelerationMotionServiceImpl.cpp
        uniformAccelerationMotion/service/UniformAccelerationMotionServiceImpl.h
        uniformVelocityMotion/repository/UniformVelocityMotionRepositoryImpl.cpp
        uniformVelocityMotion/repository/UniformVelocityMotionRepositoryImpl.h
        uniformVelocityMotion/service/UniformVelocityMotionServiceImpl.cpp
        uniformVelocityMotion/service/UniformVelocityMotionServiceImpl.h)
