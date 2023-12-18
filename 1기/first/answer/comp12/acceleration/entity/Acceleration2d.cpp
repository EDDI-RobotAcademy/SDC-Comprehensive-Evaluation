//
// Created by eddi on 23. 12. 15.
//

#include "Acceleration2d.h"

Acceleration2d::Acceleration2d() : acceleration() { }

Acceleration2d::Acceleration2d(float x, float y) : acceleration(x, y) { }

const Vector2d &Acceleration2d::getAcceleration() const {
    return acceleration;
}

std::ostream &operator<<(std::ostream &os, const Acceleration2d &d) {
    os << "acceleration: " << d.acceleration;
    return os;
}
