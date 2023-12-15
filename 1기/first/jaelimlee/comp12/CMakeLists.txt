cmake_minimum_required(VERSION 3.26)
project(comp12)

set(CMAKE_CXX_STANDARD 17)

include(FindPkgConfig)
pkg_check_modules(LIBMYSQLCLIENT REQUIRED mysqlclient)

link_directories(${LIBMYSQLCLIENT_LIBRARY_DIRS})

add_executable(comp12 main.cpp
        velocity/entity/Velocity.cpp
        velocity/entity/Velocity.h
        utility/Randomgenerator.cpp
        utility/Randomgenerator.h
        mysql/DbProcess.cpp
        mysql/DbProcess.h
        velocity/repository/VelocityRepositoryImpl.cpp
        velocity/repository/VelocityRepositoryImpl.h
        velocity/repository/VelocityRepository.h
        Acceleration/entity/Acceleration.cpp
        Acceleration/entity/Acceleration.h)

target_include_directories(comp12 PRIVATE ${LIBMYSQLCLIENT_INCLUDE_DIRS})
target_link_libraries(comp12 PRIVATE ${LIBMYSQLCLIENT_LIBRARIES})