//
// Created by eddi on 23. 12. 15.
//
#include "Acceleration.h"

Acceleration::Acceleration(int firstSpeed, int secondSpeed, double duration) :
firstSpeed(firstSpeed), secondSpeed(secondSpeed), duration(duration){}

double Acceleration::getAcceleration() {
    double acceleration = (secondSpeed - firstSpeed) / duration;
    return acceleration;
}