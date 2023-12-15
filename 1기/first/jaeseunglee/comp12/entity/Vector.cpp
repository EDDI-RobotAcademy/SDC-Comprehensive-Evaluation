//
// Created by eddi on 23. 12. 15.
//

#include "Vector.h"
#include <cmath>
#include <iostream>

Vector::Vector(double _x, double _y) : x(_x), y(_y) {}

double Vector::getX() {
    return x;
}

double Vector::getY() {
    return y;
}

double Vector::magnitude() {
    auto result = sqrt(pow(x,2) + pow(y,2));
    return result;
}

Vector Vector::normalized() {
    double mag = magnitude();
    return Vector(x / mag, y / mag);
}

std::string Vector::toQueryString(){
    std::string X = std::to_string(x);
    std::string Y = std::to_string(y);
    std::string queryString = "INSERT INTO vectorInfo (x, y) VALUES \
                          ('" + X + "', '" + Y + "' )";
    return queryString;
}




Vector Vector::operator-(const Vector &other) const {
    return Vector(x-other.x, y-other.y);
}

void Vector::printVectorInfo() {
    std::cout << "x: " << x << "y: " << y << std::endl;

}
