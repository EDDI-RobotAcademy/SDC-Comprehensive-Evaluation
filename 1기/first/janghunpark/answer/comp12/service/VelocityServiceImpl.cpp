//
// Created by eddi on 23. 12. 15.
//

#include "VelocityServiceImpl.h"

VelocityServiceImpl::VelocityServiceImpl(std::shared_ptr<VelocityRepository> velocityRepository) : velocityRepository(velocityRepository) {}

void VelocityServiceImpl::randomGenerationAndSave() {
    velocityRepository->save();
}