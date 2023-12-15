#include <iostream>
#include "utility/random/RandomGenerator.h"
#include "utility/sleep/Sleeper.h"
#include "entity/Vector.h"
#include "mysql/DbProcess.h"
#include "entity/Velocity.h"

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
    for(int i = 0; i<10; i++)
    {
        int randomNumber = RandomGenerator::generate(300,1000);
        Sleeper::sleep(randomNumber);
        Velocity velocity(RandomGenerator::generate(),RandomGenerator::generate());
        dbProcess->insertData(velocity.toQueryString());

    }

    return 0;
}
