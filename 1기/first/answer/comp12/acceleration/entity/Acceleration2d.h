//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_ACCELERATION2D_H
#define COMP12_ACCELERATION2D_H


#include <ostream>
#include "../../utility/vector/Vector2d.h"

class Acceleration2d {

private:
    Vector2d acceleration;

public:
    Acceleration2d();
    Acceleration2d(float, float);

    const Vector2d &getAcceleration() const;

    friend std::ostream &operator<<(std::ostream &os, const Acceleration2d &d);
};


#endif //COMP12_ACCELERATION2D_H
