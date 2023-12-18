//
// Created by eddi on 23. 12. 15.
//

#include "VelocityController.h"

VelocityController::VelocityController(std::shared_ptr<VelocityService> velocityService) : velocityService(velocityService) {}

VelocityController &VelocityController::getInstance(std::shared_ptr<VelocityService> velocityService) {
    static VelocityController instance(velocityService);
    return instance;
}

void VelocityController::randomVelocityGeneration() {
    velocityService->randomGenerationAndSave();
}