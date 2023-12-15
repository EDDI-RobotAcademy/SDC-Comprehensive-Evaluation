//
// Created by eddi on 23. 12. 15.
//

#include "Displacement.h"

Displacement::Displacement(Vector _vectorDisplacement) : vectorDisplacement(_vectorDisplacement) {}

Vector Displacement::getVectorDisplacement() {
    return vectorDisplacement;
}
