//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_VECTOR_H
#define COMP12_VECTOR_H


#include <vector>

class Vector {
private:
    float x;
    float y;
public:
    Vector(float _x, float _y);
    ~Vector() = default;
    float getX();
    float getY();
    float getSizeOfVector();
};


#endif //COMP12_VECTOR_H
