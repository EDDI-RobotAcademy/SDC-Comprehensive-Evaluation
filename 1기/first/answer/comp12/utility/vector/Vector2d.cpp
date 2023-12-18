//
// Created by oem on 23. 12. 14.
//

#include "Vector2d.h"

Vector2d::Vector2d() : x(0), y(0) { }

Vector2d::Vector2d(float x, float y) : x(x), y(y) { }

float Vector2d::getX() const {
    return x;
}

void Vector2d::setX(float x) {
    Vector2d::x = x;
}

float Vector2d::getY() const {
    return y;
}

void Vector2d::setY(float y) {
    Vector2d::y = y;
}

Vector2d& Vector2d::operator+=(const Vector2d& other) {
    x += other.x;
    y += other.y;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Vector2d &d) {
    os << "(" << d.x << ", " << d.y << ")";
    return os;
}
