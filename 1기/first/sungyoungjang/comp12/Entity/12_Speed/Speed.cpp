//
// Created by eddi on 23. 12. 15.
//

#include <iostream>
#include <random>
#include "Speed.h"

void Speed::random_speed() {
    std::random_device rand_device;
    std::mt19937 mersenneTwister(rand_device());
    std::uniform_int_distribution<int> distribution(MIN, MAX);

    speed_X = distribution(mersenneTwister);
    speed_Y = distribution(mersenneTwister);
}

Speed::Speed() : speed_X(), speed_Y() { }


double Speed::getSpeedX() const{
    return speed_X;
}

double Speed::getSpeedY() const{
    return speed_Y;
}
