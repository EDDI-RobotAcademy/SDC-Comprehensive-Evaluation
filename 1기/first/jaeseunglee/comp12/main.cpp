#include <iostream>
#include "utility/random/RandomGenerator.h"
#include "utility/sleep/Sleeper.h"
#include "entity/Vector.h"
#include "mysql/DbProcess.h"
#include "entity/Velocity.h"
#include "entity/Acceleration.h"
#include "entity/Displacement.h"

void initSingleton()
{
    const char* host = "localhost";
    const char* user = "eddi";
    const char* pass = "eddi@123";
    const char* dbName = "comp_db";

    DbProcess *dbInstance = DbProcess::getInstance(host, user, pass, dbName);
    dbInstance->connect();
}


void vectorToDb(Vector _vec){
    std::string vecX = std::to_string(_vec.getX());
    std::string vecY = std::to_string(_vec.getY());
    std::string queryString = "INSERT INTO board (x, y) VALUES \
                          ('" + vecX + "', '" + vecY + "' )";
    DbProcess *dbProcess = DbProcess::getInstance();
    dbProcess->insertData(queryString);
}


int main()
{
    initSingleton();
    DbProcess *dbProcess = DbProcess::getInstance();
    Vector originVector(0,0);
    Velocity originVelocity(originVector);
    Velocity beforeVelocity(originVector);
    double totalDistance = 0;
    for(int i = 0; i<10; i++)
    {
        int randomSleep = RandomGenerator::generate(300,1000);

        Vector vec(RandomGenerator::generate(),RandomGenerator::generate());
        Velocity velocity(vec);
        Acceleration accel(velocity ,beforeVelocity, randomSleep/100);
        accel.getAccelVector().printVectorInfo();
        dbProcess->insertData(velocity.toQueryString());
        totalDistance += velocity.calculateDistance(randomSleep/100);

        std::cout << "\n[초기위치를 기반으로한 현재 변위]" <<  std::endl;
        Displacement displacement(velocity.getVector()-originVelocity.getVector());
        displacement.getVectorDisplacement().printVectorInfo();
        beforeVelocity = velocity;
        Sleeper::sleep(randomSleep);
        std::cout << "\n" << std::endl;
    }
    std::cout << "총 이동거리: " << totalDistance << std::endl;
    return 0;
}
