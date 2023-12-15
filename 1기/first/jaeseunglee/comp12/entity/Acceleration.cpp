//
// Created by eddi on 23. 12. 15.
//

#include "Acceleration.h"

Acceleration::Acceleration(Velocity afterVelocity, Velocity beforeVelocity, double time) : vectorOfAcceleration ((afterVelocity.getVector() - beforeVelocity.getVector())/time){}

double Acceleration::getAccelX() {
    return vectorOfAcceleration.getX();
}

double Acceleration::getAccelY() {
    return vectorOfAcceleration.getY();
}

Vector Acceleration::getAccelVector() {
    return vectorOfAcceleration;
}


