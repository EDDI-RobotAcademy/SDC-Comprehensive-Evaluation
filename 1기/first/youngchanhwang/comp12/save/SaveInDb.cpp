//
// Created by eddi on 23. 12. 15.
//
#include <iostream>
#include <string>


#include "SaveInDb.h"
#include "../db/DbProcess.h"

void SaveInDb::saveInDb(Speed *speed) {
    DbProcess* dbInstance = DbProcess::getInstance();

    int speeddata = speed->getSpeed();
    std::string strspeed = std::to_string(speeddata);

    std::string queryString = "INSERT INTO speedDB (speed, reg_date) VALUES \
                            ('" + strspeed + "', now(6))";

    dbInstance->insertData(queryString);


}