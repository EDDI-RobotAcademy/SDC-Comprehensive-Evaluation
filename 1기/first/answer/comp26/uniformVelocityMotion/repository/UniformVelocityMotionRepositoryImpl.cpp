//
// Created by oem on 23. 12. 15.
//

#include <iostream>

#include "UniformVelocityMotionRepositoryImpl.h"

UniformVelocityMotionRepositoryImpl UniformVelocityMotionRepositoryImpl::instance;

UniformVelocityMotionRepositoryImpl &UniformVelocityMotionRepositoryImpl::getInstance() {
    return instance;
}

double UniformVelocityMotionRepositoryImpl::calculateTime(double distance, double velocity) {
    std::cout << "Repository: calculateTime()" << std::endl;
    // S = V * t
    // t = S / V
    return distance / velocity;
}