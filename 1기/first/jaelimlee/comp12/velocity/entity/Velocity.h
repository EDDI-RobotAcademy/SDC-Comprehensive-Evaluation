//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_VELOCITY_H
#define COMP12_VELOCITY_H


#include <iosfwd>
#include <ostream>
#include <string>
#include <chrono>
#include <iostream>
#include "../../utility/Randomgenerator.h"

class Velocity {
private:
    double speed;
    double direction;
    int velocity_number;
    std::chrono::system_clock::time_point  registration_time ;

public:
    Velocity(double speed, double direction);
    Velocity(double speed, double direction, const std::string& registration_time);

    // 출력 연산자 오버로딩
    friend std::ostream& operator<<(std::ostream& os, const Velocity& velocity);

    int get_velocity_number();
    double get_velocity_speed();
    double get_velocity_direction();

};



#endif //COMP12_VELOCITY_H
