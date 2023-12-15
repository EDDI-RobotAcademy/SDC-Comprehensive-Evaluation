cmake_minimum_required(VERSION 3.16)
project(comp12)

set(CMAKE_CXX_STANDARD 17)

include(FindPkgConfig)
pkg_check_modules(LIBMYSQLCLIENT REQUIRED mysqlclient)

link_directories(${LIBMYSQLCLIENT_LIBRARY_DIRS})

file(GLOB CPP_SOURCES

#        "console_ui/repository/*.cpp"
#        "utility/keyboard/*.cpp"
#        "mysql/*.cpp"
)

file(GLOB MAIN_SOURCE
        "*.cpp"
)

add_executable(
        comp12
        ${MAIN_SOURCE}
        ${CPP_SOURCES}
        entity/Velocity.cpp
        entity/Velocity.h
        mysql/DbProcess.cpp
        mysql/DbProcess.h
        utility/RandomSleeper.cpp
        utility/RandomSleeper.h


)

target_include_directories(comp12 PRIVATE ${LIBMYSQLCLIENT_INCLUDE_DIRS})
target_link_libraries(comp12 PRIVATE ${LIBMYSQLCLIENT_LIBRARIES})
