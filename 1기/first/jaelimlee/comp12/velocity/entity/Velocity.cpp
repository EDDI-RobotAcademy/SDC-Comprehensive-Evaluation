//
// Created by eddi on 23. 12. 15.
//

#include "Velocity.h"

Velocity::Velocity(double speed, double direction) : speed(speed), direction(direction){}

Velocity::Velocity(double speed, double direction, const std::string& registration_time)
                        : speed(speed), direction(direction),
                        registration_time(std::chrono::system_clock::now()) {}

std::ostream& operator<<(std::ostream& os, const Velocity& velocity) {
    os << "Velocity (speed: " << velocity.speed << ", direction: " << velocity.direction << ")";
    return os;
}

int Velocity::get_velocity_number()
{
    return velocity_number;
}

double Velocity::get_velocity_speed()
{
    return speed;
}

double Velocity::get_velocity_direction()
{
    return direction;
}
