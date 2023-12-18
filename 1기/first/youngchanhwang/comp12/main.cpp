#include <iostream>

#include "db/DbProcess.h"
#include "utility/RandomGenerator.h"
#include "utility/Sleep.h"
#include "entity/Speed.h"
#include "save/SaveInDb.h"
#include "entity/Acceleration.h"
#include "entity/Distance.h"

void init_database_object()
{
    const char* host = "localhost";
    const char* user = "eddi";
    const char* pass = "eddi@123";
    const char* dbName = "test_db";

    DbProcess* dbInstance = DbProcess::getInstance(host, user, pass, dbName);
    dbInstance->connect();
}



int main() {
    init_database_object();
    int i, firstspeed;
    double alldistance, duration;
    std::cout << "Hello, World!" << std::endl;
// 처음속도
    Speed *speed = new Speed(RandomGenerator::generate(10,30));
    SaveInDb::saveInDb(speed);
    firstspeed = speed->getSpeed();


    for(i = 0; i < 9; i++){
        // 시간
        duration = Sleep::randomsleep();
        // 다음속도
        Speed *speed = new Speed(RandomGenerator::generate(10,30));
        SaveInDb::saveInDb(speed);
        // 가속도
        Acceleration *acceleration = new Acceleration(firstspeed, speed->getSpeed(), duration);
        std::cout << "현재 가속도는 " ;
        std::cout << acceleration->getAcceleration() << std::endl;
        // 시간동안 이동한 거리
        Distance *distance = new Distance(firstspeed, acceleration->getAcceleration(), duration);
        std::cout << "가속도로 이동한 거리는 " ;
        std::cout << distance->getDistance() << std:: endl;
        // 처음속도로 저장
        firstspeed = speed->getSpeed();
        // 이동한 거리 추가
        alldistance += distance->getDistance();

    }

    std::cout << "전체거리는 ";
    std::cout << alldistance << std::endl;
    return 0;
}
