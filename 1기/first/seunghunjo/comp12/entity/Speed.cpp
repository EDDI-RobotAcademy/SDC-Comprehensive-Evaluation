//
// Created by eddi on 23. 12. 15.
//

#include <iostream>
#include "Speed.h"
#include "../mysql_db/DbProcess.h"
#include "../sleep/RandomGenerator.h"

std::shared_ptr<Speed> Speed::instance;

Speed::Speed() {}

Speed::~Speed() {}

std::shared_ptr<Speed> Speed::getInstance()
{
    if (!instance) {
        std::cout << "Creating new AccountRepositoryImpl instance" << std::endl;

        instance = std::make_shared<Speed>();

    }
    return instance;
}

int Speed::saveSpeed() {
    DbProcess* dbInstance = DbProcess::getInstance();

    int _vectorX = RandomGenerator::generate(0,10);
    int _vectorY = RandomGenerator::generate(0,10);

    std::string queryString = "INSERT INTO speed (x, y) VALUES \
                          (_vectorX,_vectorY ) ";
    std::cout << "X: " << _vectorX << std::endl;
    std::cout << "Y: " << _vectorY << std::endl;

    dbInstance->insertData(queryString);
    return 0;
}

