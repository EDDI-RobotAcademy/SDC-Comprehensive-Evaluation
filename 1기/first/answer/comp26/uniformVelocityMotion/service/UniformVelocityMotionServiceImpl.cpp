//
// Created by oem on 23. 12. 15.
//

#include "UniformVelocityMotionServiceImpl.h"

#include <iostream>

UniformVelocityMotionServiceImpl UniformVelocityMotionServiceImpl::instance(nullptr);

UniformVelocityMotionServiceImpl::UniformVelocityMotionServiceImpl(
        std::unique_ptr<UniformVelocityMotionRepository> repository)
        : uniformVelocityMotionRepository(std::move(repository)) { }

UniformVelocityMotionServiceImpl &
UniformVelocityMotionServiceImpl::getInstance(std::unique_ptr<UniformVelocityMotionRepository> repository) {
    if (!instance.uniformVelocityMotionRepository) {
        instance.uniformVelocityMotionRepository = std::move(repository);
    }

    return instance;
}

UniformVelocityMotionServiceImpl &UniformVelocityMotionServiceImpl::getInstance() {
    return instance;
}

double UniformVelocityMotionServiceImpl::calculateTime(double distance, double acceleration) {
    std::cout << "Service: calculateTime()" << std::endl;
    return uniformVelocityMotionRepository->calculateTime(distance, acceleration);
}
