//
// Created by oem on 23. 12. 14.
//

#include "Velocity2d.h"

Velocity2d::Velocity2d() : velocity() { }

Velocity2d::Velocity2d(int x, int y) : velocity(x, y) { }

Velocity2d::Velocity2d(int x, int y, std::string timestamp) : velocity(x, y), timestamp(std::move(timestamp)) { }

Vector2d Velocity2d::getVelocity() const {
    return velocity;
}

std::ostream &operator<<(std::ostream &os, const Velocity2d &d) {
    os << "velocity: " << d.velocity;
    if (!d.timestamp.empty()) {
        os << " - " << d.timestamp;
    }
    return os;
}

const std::string &Velocity2d::getTimestamp() const {
    return timestamp;
}
