//
// Created by oem on 23. 12. 14.
//

#ifndef CPP_TEST_VELOCITY2D_H
#define CPP_TEST_VELOCITY2D_H

#include <ostream>
#include "../../utility/vector/Vector2d.h"

class Velocity2d {

private:
    Vector2d velocity;
    std::string timestamp;

public:
    Velocity2d();
    Velocity2d(int, int);
    Velocity2d(int, int, std::string);

    Vector2d getVelocity() const;

    const std::string &getTimestamp() const;

    friend std::ostream &operator<<(std::ostream &os, const Velocity2d &d);
};


#endif //CPP_TEST_VELOCITY2D_H
