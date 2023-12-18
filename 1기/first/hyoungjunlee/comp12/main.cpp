#include <iostream>
#include "entity/Velocity.h"
#include "utility/RandomSleeper.h"
#include "mysql/DbProcess.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    RandomSleeper sleeper(0.3, 1.0);

    std::random_device rand_device;
    std::mt19937 mersenneTwister(rand_device());
    std::uniform_int_distribution<int> distribution(0, 100);
    DbProcess* dbInstance = DbProcess::getInstance();
    for(int i=0;i<10;i++)
    {
        double RandomVelocity = distribution(mersenneTwister);

        std::cout << RandomVelocity<<std::endl;
        sleeper.randomSleep();

        std::string queryString = "INSERT INTO velocity (velocity) VALUES (\" + std::to_string(RandomVelocity) + \")";

        dbInstance->insertData(queryString);

    }




    // 삽입 쿼리 생성 및 실행



    return 0;
}
//CREATE TABLE velocity (
//        id bigint NOT NULL PRIMARY KEY AUTO_INCREMENT,
//        velocity DOUBLE  NOT NULL,
//        reg_date datetime(6) DEFAULT CURRENT_TIMESTAMP(6)
//);