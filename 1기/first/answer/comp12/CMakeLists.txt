cmake_minimum_required(VERSION 3.26)
project(comp12)

set(CMAKE_CXX_STANDARD 17)

include(FindPkgConfig)
pkg_check_modules(LIBMYSQLCLIENT REQUIRED mysqlclient)

link_directories(${LIBMYSQLCLIENT_LIBRARY_DIRS})

add_executable(comp12 main.cpp
        mysql/DbProcess.cpp
        mysql/DbProcess.h
        utility/vector/Vector2d.cpp
        utility/vector/Vector2d.h
        velocity/entity/Velocity2d.cpp
        velocity/entity/Velocity2d.h
        utility/random/RandomGenerator.cpp
        utility/random/RandomGenerator.h
        acceleration/entity/Acceleration2d.cpp
        acceleration/entity/Acceleration2d.h)

target_include_directories(comp12 PRIVATE ${LIBMYSQLCLIENT_INCLUDE_DIRS})
target_link_libraries(comp12 PRIVATE ${LIBMYSQLCLIENT_LIBRARIES})
