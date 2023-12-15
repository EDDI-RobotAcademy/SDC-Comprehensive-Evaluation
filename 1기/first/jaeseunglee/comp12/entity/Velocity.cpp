//
// Created by eddi on 23. 12. 15.
//

#include <iostream>
#include "Velocity.h"

Velocity::Velocity(Vector _vectorOfVelocity)
        : vectorOfVelocity(_vectorOfVelocity){}

std::string Velocity::toQueryString() {
    std::string X = std::to_string(vectorOfVelocity.getX());
    std::string Y = std::to_string(vectorOfVelocity.getY());
    std::string queryString = "INSERT INTO velocityInfo (x, y) VALUES \
                          ('" + X + "', '" + Y + "' )";

    return queryString;
}

Vector Velocity::normalized() {
    return vectorOfVelocity.normalized();
}

double Velocity::speed() {
    return vectorOfVelocity.magnitude();
}

Vector Velocity::getVector() {
    return vectorOfVelocity;
}

double Velocity::calculateDistance(double _time) {
    return vectorOfVelocity.magnitude() * _time;
}


