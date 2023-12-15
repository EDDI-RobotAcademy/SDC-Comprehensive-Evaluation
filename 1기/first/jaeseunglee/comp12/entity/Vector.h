//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_VECTOR_H
#define COMP12_VECTOR_H


#include <vector>
#include <string>

class Vector {
private:
    double x;
    double y;
public:
    Vector(double _x, double _y);
    ~Vector() = default;
    double getX();
    double getY();
    double magnitude();
    Vector normalized();
    std::string toQueryString();

    Vector operator-(const Vector& other) const;
};


#endif //COMP12_VECTOR_H
