#include <iostream>
#include "utility/random/RandomGenerator.h"
#include "utility/sleep/Sleeper.h"
#include "entity/Vector.h"
#include "mysql/DbProcess.h"

void initSingleton()
{
    const char* host = "localhost";
    const char* user = "eddi";
    const char* pass = "eddi@123";
    const char* dbName = "comp_db";

    DbProcess *dbInstance = DbProcess::getInstance(host, user, pass, dbName);
    dbInstance->connect();
}





int main()
{

    for(int i = 0; i<10; i++)
    {
        int randomNumber = RandomGenerator::generate(300,1000);
        Sleeper::sleep(randomNumber);
    }

    return 0;
}
