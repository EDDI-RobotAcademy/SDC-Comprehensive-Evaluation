//
// Created by eddi on 23. 12. 15.
//

#include "Velocity.h"

Velocity::Velocity(double speed, double direction, std::chrono::system_clock::time_point reg_date)
: speed(speed), direction(direction), reg_date(reg_date) {}