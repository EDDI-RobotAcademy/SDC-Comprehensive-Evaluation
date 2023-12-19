//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_DISPLACEMENT_H
#define COMP12_DISPLACEMENT_H


#include "Vector.h"

class Displacement {
private:
    Vector vectorDisplacement;
public:
    Displacement(Vector _vectorDisplacement);
    Vector getVectorDisplacement();
};


#endif //COMP12_DISPLACEMENT_H
