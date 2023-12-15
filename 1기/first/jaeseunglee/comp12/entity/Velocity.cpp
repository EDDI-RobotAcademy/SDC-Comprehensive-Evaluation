//
// Created by eddi on 23. 12. 15.
//

#include <iostream>
#include "Velocity.h"

Velocity::Velocity(double _speed, double _direction)
        : speed(_speed), direction(_direction){}

std::string Velocity::toQueryString() {
    std::string strSpeed = std::to_string(speed);
    std::string strDirection = std::to_string(direction);
    std::string queryString = "INSERT INTO velocityInfo (speed, direction) VALUES \
                          ('" + strSpeed + "', '" + strDirection + "' )";

    std::cout << "속도: " << strSpeed << "m/s, 방향: " << strDirection << std::endl;
    return queryString;
}


