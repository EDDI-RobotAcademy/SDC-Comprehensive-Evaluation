#include <iostream>

#include "Entity/12_Speed/Speed.h"
#include "Entity/15_Sleep/Sleep.h"
#include "mysql/DbProcess.h"


int main() {
//    const char* host = "localhost";
//    const char* user = "eddi";
//    const char* pass = "eddi@123";
//    const char* dbName = "test_comp12";
//
//    DbProcess* dbInstance = DbProcess::getInstance(host, user, pass, dbName);
//    dbInstance->connect();

    // 12번

    Speed *speed = new Speed();
    speed->random_speed();
    std::cout<<"X의 속력은: " << speed->getSpeedX() <<
                " Y의 속력은: " << speed->getSpeedY()<< std::endl;

    // 14번

    // 15번
    Sleep sleepManager;
    sleepManager.randomSleep(1.0, 3.0);

    //



};
