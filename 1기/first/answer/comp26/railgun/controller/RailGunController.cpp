//
// Created by eddi on 23. 12. 15.
//

#include "RailGunController.h"

#include <iostream>

RailGunController RailGunController::instance(nullptr);

RailGunController::RailGunController(
        std::unique_ptr<RailGunService> service)
            : railGunService(std::move(service)) {}

RailGunController& RailGunController::getInstance(std::unique_ptr<RailGunService> service) {
    if (!instance.railGunService) {
        instance.railGunService = std::move(service);
    }
    return instance;
}

RailGunController& RailGunController::getInstance() {
    return instance;
}

void RailGunController::fire() {
    std::cout << "Controller: Fire!" << std::endl;
    railGunService->fire();
}
