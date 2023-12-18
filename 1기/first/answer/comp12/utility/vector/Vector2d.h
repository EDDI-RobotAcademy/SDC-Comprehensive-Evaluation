//
// Created by oem on 23. 12. 14.
//

#ifndef CPP_TEST_VECTOR2D_H
#define CPP_TEST_VECTOR2D_H

#include <ostream>

class Vector2d {

private:
    float x;
    float y;

public:
    Vector2d();
    Vector2d(float, float);

    float getX() const;
    void setX(float x);
    float getY() const;
    void setY(float y);

    Vector2d& operator+=(const Vector2d& other);

    friend std::ostream &operator<<(std::ostream &os, const Vector2d &d);
};


#endif //CPP_TEST_VECTOR2D_H
