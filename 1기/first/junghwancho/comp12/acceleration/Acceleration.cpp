//
// Created by eddi on 23. 12. 15.
//

#include "Acceleration.h"
#include "../velocity/Velocity.h"

Acceleration::Acceleration(double acceleration) : acceleration(acceleration) {}

double Acceleration::getAcceleration() const {
    return acceleration;
}

