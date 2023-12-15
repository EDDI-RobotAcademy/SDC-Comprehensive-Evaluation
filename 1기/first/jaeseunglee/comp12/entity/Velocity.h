//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_VELOCITY_H
#define COMP12_VELOCITY_H


#include <string>

class Velocity {
private:
    double speed;
    double direction;
public:
    Velocity(double _speed, double _direction);
    ~Velocity() = default;

    std::string toQueryString();



};


#endif //COMP12_VELOCITY_H
