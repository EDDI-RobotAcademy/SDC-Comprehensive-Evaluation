//
// Created by eddi on 23. 12. 15.
//

#include <iostream>
#include "Velocity.h"
#include "../utility/RandomGenerator.h"

//Velocity::Velocity(double X, double y, double second) : X(X), Y(Y), second(second) {}
void Velocity::_Velocity() {
    x = (int)(RandomGenerator::generate(minVelocity, maxVelocity));
    y = (int)(RandomGenerator::generate(minVelocity, maxVelocity));
    second = (double)(RandomGenerator::generate(minSecond, maxSecond)) / 10;
    std::cout << "x: " << x << "y: " << y << "second: " << second << std::endl;
}

