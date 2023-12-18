//
// Created by eddi on 23. 12. 15.
//

#include "Speed.h"

Speed::Speed(double x, double y) : xSpeed(x), ySpeed(y) { }

double Speed::getMagnitude() const {
    return std::sqrt(xSpeed * xSpeed + ySpeed * ySpeed);
}

double Speed::getDirection() const {
    return std::atan2(ySpeed, xSpeed);
}

double Speed::getXSpeed() const {
    return xSpeed;
}

double Speed::getYSpeed() const {
    return ySpeed;
}

void Speed::setXSpeed(double x) {
    xSpeed = x;
}

void Speed::setYSpeed(double y) {
    ySpeed = y;
}