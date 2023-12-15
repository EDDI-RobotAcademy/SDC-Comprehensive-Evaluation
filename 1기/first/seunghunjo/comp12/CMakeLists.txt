cmake_minimum_required(VERSION 3.27)
project(comp12)

set(CMAKE_CXX_STANDARD 17)

include(FindPkgConfig)
pkg_check_modules(LIBMYSQLCLIENT REQUIRED mysqlclient)

link_directories(${LIBMYSQLCLIENT_LIBRARY_DIRS})

file(GLOB CPP_SOURCES
        main.cpp
        sleep/RandomGenerator.cpp
        sleep/RandomGenerator.h
        entity/Speed.cpp
        entity/Speed.h
        mysql_db/DbProcess.cpp
        mysql_db/DbProcess.h
        sleep/Sleep.cpp
        sleep/Sleep.h
)

add_executable(
        class_test
        ${MAIN_SOURCE}
        ${CPP_SOURCES}
)

target_include_directories(class_test PRIVATE ${LIBMYSQLCLIENT_INCLUDE_DIRS})
target_link_libraries(class_test PRIVATE ${LIBMYSQLCLIENT_LIBRARIES})
