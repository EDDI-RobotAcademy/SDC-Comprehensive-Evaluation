//
// Created by eddi on 23. 12. 15.
//
#include "Distance.h"

Distance::Distance(int speed, double accel, double duration) :
                speed(speed), accel(accel), duration(duration) {}

double Distance::getDistance() {
    double distance = (speed * duration) + (accel*duration*duration)/2 ;
    return distance;
}