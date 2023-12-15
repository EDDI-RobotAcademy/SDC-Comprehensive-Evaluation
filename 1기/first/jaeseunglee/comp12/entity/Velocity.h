//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_VELOCITY_H
#define COMP12_VELOCITY_H


#include <string>
#include "Vector.h"

class Velocity {
private:
    Vector vectorOfVelocity;
public:
    Velocity(Vector _vectorOfVelocity);
    ~Velocity() = default;

    std::string toQueryString();
    Vector normalized();
    double speed();


};


#endif //COMP12_VELOCITY_H
