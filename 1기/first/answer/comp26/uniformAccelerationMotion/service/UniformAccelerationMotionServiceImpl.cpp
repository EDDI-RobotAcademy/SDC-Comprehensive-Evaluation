//
// Created by oem on 23. 12. 15.
//

#include <iostream>
#include "UniformAccelerationMotionServiceImpl.h"

UniformAccelerationMotionServiceImpl UniformAccelerationMotionServiceImpl::instance(nullptr);

UniformAccelerationMotionServiceImpl::UniformAccelerationMotionServiceImpl(
                std::unique_ptr<UniformAccelerationMotionRepository> repository)
                    : uniformAccelerationMotionRepository(std::move(repository)) { }

UniformAccelerationMotionServiceImpl &
UniformAccelerationMotionServiceImpl::getInstance(std::unique_ptr<UniformAccelerationMotionRepository> repository) {
    if (!instance.uniformAccelerationMotionRepository) {
        instance.uniformAccelerationMotionRepository = std::move(repository);
    }

    return instance;
}

UniformAccelerationMotionServiceImpl &UniformAccelerationMotionServiceImpl::getInstance() {
    return instance;
}

double UniformAccelerationMotionServiceImpl::calculateTime(double distance, double acceleration) {
    std::cout << "Service: calculateTime()" << std::endl;
    return uniformAccelerationMotionRepository->calculateTime(distance, acceleration);
}