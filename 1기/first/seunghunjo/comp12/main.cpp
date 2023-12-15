#include <iostream>
#include <unistd.h>
#include "sleep/RandomGenerator.h"
#include "mysql_db/DbProcess.h"
#include "entity/Speed.h"
#include "sleep/Sleep.h"


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
    std::cout << "Hello, World!" << std::endl;
    init_database_object();
    int i;
    Speed speed;
    for(i = 0; i < 10; i++)
    {
        Sleep();
        speed.saveSpeed();
    }

    return 0;
}



