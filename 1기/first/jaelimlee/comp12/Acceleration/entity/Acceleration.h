//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_ACCELERATION_H
#define COMP12_ACCELERATION_H
#include <string>
#include <chrono>
#include "../../velocity/entity/Velocity.h"

class Acceleration {
private:
    Velocity v1;
    Velocity v2;

public:
    Acceleration(const Velocity& v1, const Velocity& v2);
    //double calculate_acceleration() const;
};


#endif //COMP12_ACCELERATION_H
