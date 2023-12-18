//
// Created by eddi on 23. 12. 15.
//

#ifndef ANSWER_VELOCITY_H
#define ANSWER_VELOCITY_H

#include <chrono>

class Velocity {
private:
    double speed;
    double direction;
    std::chrono::system_clock::time_point reg_date;
public:
    Velocity(double speed, double direction, std::chrono::system_clock::time_point reg_date);
    double getSpeed() const;
    double getDirection() const;

    std::vector<Velocity> randomGenerationOfVelocity();
};


#endif //ANSWER_VELOCITY_H
