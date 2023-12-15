cmake_minimum_required(VERSION 3.26)
project(speed)

set(CMAKE_CXX_STANDARD 17)


include(FindPkgConfig)
pkg_check_modules(LIBMYSQLCLIENT REQUIRED mysqlclient)

link_directories(${LIBMYSQLCLIENT_LIBRARY_DIRS})

add_executable(speed main.cpp
        entity/Speed.h
        entity/Speed.cpp
        db/DbProcess.cpp
        db/DbProcess.h
        utility/RandomGenerator.h
        utility/RandomGenerator.cpp
        utility/Sleep.h
        utility/Sleep.cpp
        entity/Acceleration.cpp
        entity/Acceleration.h
        save/SaveInDb.cpp
        save/SaveInDb.h
        entity/Distance.cpp
        entity/Distance.h
)



target_include_directories(speed PRIVATE ${LIBMYSQLCLIENT_INCLUDE_DIRS})
target_link_libraries(speed PRIVATE ${LIBMYSQLCLIENT_LIBRARIES})
