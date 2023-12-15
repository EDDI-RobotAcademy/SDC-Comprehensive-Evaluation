cmake_minimum_required(VERSION 3.16)
project(comp12)

set(CMAKE_CXX_STANDARD 17)

include(FindPkgConfig)
pkg_check_modules(LIBMYSQLCLIENT REQUIRED mysqlclient)

link_directories(${LIBMYSQLCLIENT_LIBRARY_DIRS})

file(GLOB CPP_SOURCES
        "entity/*.cpp"
        "mysql/*.cpp"
        "utility/random/*.cpp"
        "utility/sleep/*.cpp"
)

file(GLOB MAIN_SOURCE
        "*.cpp"
)

add_executable(
        comp12
        ${MAIN_SOURCE}
        ${CPP_SOURCES}
)

target_include_directories(comp12 PRIVATE ${LIBMYSQLCLIENT_INCLUDE_DIRS})
target_link_libraries(comp12 PRIVATE ${LIBMYSQLCLIENT_LIBRARIES})