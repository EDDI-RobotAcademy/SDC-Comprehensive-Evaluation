//
// Created by eddi on 23. 12. 15.
//

#include "Vector.h"
#include <cmath>

Vector::Vector(float _x, float _y) : x(_x), y(_y) {}

float Vector::getX() {
    return x;
}

float Vector::getY() {
    return y;
}

float Vector::getSizeOfVector() {
    auto result = (float)sqrt(pow(x,2) + pow(y,2));
    return result;
}
