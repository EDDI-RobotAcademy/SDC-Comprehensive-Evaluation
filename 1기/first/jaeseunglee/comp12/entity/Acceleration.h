//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_ACCELERATION_H
#define COMP12_ACCELERATION_H


#include "Velocity.h"

class Acceleration {
private:
    Vector vectorOfAcceleration;
public:
    Acceleration(Velocity afterVelocity, Velocity beforeVelocity);
    double getAccelX();
    double getAccelY();
    Vector getAccelVector();
};


#endif //COMP12_ACCELERATION_H
