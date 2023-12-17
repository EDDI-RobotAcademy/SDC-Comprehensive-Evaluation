//
// Created by oem on 23. 12. 15.
//

#include <iostream>
#include <cmath>

#include "UniformAccelerationMotionRepositoryImpl.h"

UniformAccelerationMotionRepositoryImpl UniformAccelerationMotionRepositoryImpl::instance;

UniformAccelerationMotionRepositoryImpl &UniformAccelerationMotionRepositoryImpl::getInstance() {
    return instance;
}

double UniformAccelerationMotionRepositoryImpl::calculateTime(double distance, double acceleration) {
    std::cout << "Repository: calculateTime()" << std::endl;
    // S = Vo * t + 0.5 * a * t^2;
    // S = 0.5 * a * t^2
    // t^2 = 2 * S / a
    return sqrt(2.0 * distance / acceleration);
}