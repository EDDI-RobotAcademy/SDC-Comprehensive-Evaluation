//
// Created by eddi on 23. 12. 15.
//

#include "VelocityRepositoy.h"



float VelocityRepositoy::setdistance(float startX, float startY, float, endX, float endY)
{
    distance = x
}


float VelocityRepositoy::getvelocity(float distance, float startTime, float  endTime)
{
    totalvelocity = distance / (endTime-startTime);
    return totalvelocity;
}



DbProcess* dbInstance = DbProcess::getInstance();
std::string accountId = account->get_account_id();
std::string password = account->get_password();

std::string queryString = "INSERT INTO account (account_id, password) VALUES \
                          ('" + accountId + "', '" + password + "' )";

dbInstance->insertData(queryString);

return account;