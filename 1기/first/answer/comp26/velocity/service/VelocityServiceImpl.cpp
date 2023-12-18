//
// Created by eddi on 23. 12. 15.
//

#include <iostream>

#include "VelocityServiceImpl.h"

VelocityServiceImpl VelocityServiceImpl::instance(nullptr);

VelocityServiceImpl::VelocityServiceImpl(
        std::unique_ptr<VelocityRepository> repository)
            : velocityRepository(std::move(repository)) {}

VelocityServiceImpl& VelocityServiceImpl::getInstance(std::unique_ptr<VelocityRepository> repository) {
    if (!instance.velocityRepository) {
        instance.velocityRepository = std::move(repository);
    }
    return instance;
}

VelocityServiceImpl& VelocityServiceImpl::getInstance() {
    return instance;
}

void VelocityServiceImpl::processVelocity() {
    velocityRepository->check();
    std::cout << "Processing velocity" << std::endl;
}
