//
// Created by eddi on 23. 12. 15.
//

#include <iostream>
#include "Velocity.h"
#include "../mysql/DbProcess.h"

// 12. velocity entity

Velocity::Velocity(double speed, double direction) : speed(speed), direction(direction){ }


std::string Velocity::getVelocityInfo() {
    return "속도: " + std::to_string(speed) + " m/s, 방향: " + std::to_string(direction) + " 도";
}

double Velocity::getSpeed() const{
    return speed;
}

double Velocity::getDirection() const {
    return direction;
}

Velocity saveVelocity(Velocity *velocity){

    DbProcess* dbInstance= DbProcess::getInstance();
    double speed = velocity->getSpeed();
    double direction = velocity->getDirection();
    std::string queryString = "INSERT INTO velocity (speed, direction, reg_date) VALUES ('" +
            std::to_string(speed) + "', '" + std::to_string(direction) + "', NOW(6))";
    dbInstance->insertVelocityData(queryString);
    return *velocity;
}
