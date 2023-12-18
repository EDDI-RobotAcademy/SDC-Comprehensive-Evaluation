//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_VELOCITY_H
#define COMP12_VELOCITY_H

#include <string>
#include "../utility/RandomGenerate.h"

class Velocity {
private:
    double speed;
    double direction;

public:
    Velocity(double speed , double direction);
    Velocity saveVelocity(Velocity *velocity);
    std::string getVelocityInfo();

    double getSpeed() const;
    double getDirection() const;
};


#endif //COMP12_VELOCITY_H
