#include <iostream>
#include <mysql/mysql.h>
#include <memory>
#include <random>
#include <thread>
#include <chrono>

#include "mysql/DbProcess.h"
#include "velocity/entity/Velocity.h"



void init_database_object()
{
    const char* host = "localhost";
    const char* user = "eddi";
    const char* pass = "eddi@123";
    const char* dbName = "test_db";

    DbProcess* dbInstance = DbProcess::getInstance(host, user, pass, dbName);
    dbInstance->connect();
}

void random_sleep()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(0.3, 1.0);

    double randomFloat = dis(gen);
    std::this_thread::sleep_for(std::chrono::seconds (randomFloat));

}


int main() {
    init_database_object();

    int i;


    for (i=0; i<=9; i++)
    {


        random_sleep();
    }




    return 0;
}
