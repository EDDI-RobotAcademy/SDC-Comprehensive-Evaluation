cmake_minimum_required(VERSION 3.27)
project(answer)

set(CMAKE_CXX_STANDARD 17)
#아래의 setting은 valgrind를 사용할 경우 주석 해제
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -gdwarf-4")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -gdwarf-4")

add_executable(answer main.cpp
        comp12/entity/Velocity.cpp
        comp12/entity/Velocity.h
        comp12/entity/Accelaration.cpp
        comp12/entity/Accelaration.h
        comp12/mysql/DbProcess.cpp
        comp12/mysql/DbProcess.h
        comp12/utility/RandomTimeSleep.cpp
        comp12/utility/RandomTimeSleep.h
        comp12/controller/VelocityController.cpp
        comp12/controller/VelocityController.h
        comp12/utility/RandomGenerator.cpp
        comp12/utility/RandomGenerator.h
#        comp34/response.c
#        comp34/response.h
#        comp34/request.c
#        comp34/request.h
        comp12/service/VelocityServiceImpl.cpp
        comp12/service/VelocityServiceImpl.h
        comp12/service/VelocityService.h
        comp12/repository/VelocityRepositoryImpl.cpp
        comp12/repository/VelocityRepositoryImpl.h
        comp12/repository/VelocityRepository.h
#        comp24/entity/Product.h
#        comp24/entity/Product.c
        comp26/railgun/Railgun.cpp
        comp26/railgun/Railgun.h
)

