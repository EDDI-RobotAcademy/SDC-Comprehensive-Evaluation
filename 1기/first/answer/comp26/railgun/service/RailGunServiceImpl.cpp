//
// Created by eddi on 23. 12. 15.
//

#include "RailGunServiceImpl.h"

#include <iostream>

RailGunServiceImpl RailGunServiceImpl::instance(nullptr);

RailGunServiceImpl::RailGunServiceImpl(
        std::unique_ptr<RailGunRepository> repository)
            : railGunRepository(std::move(repository)) {}

RailGunServiceImpl& RailGunServiceImpl::getInstance(std::unique_ptr<RailGunRepository> repository) {
    if (!instance.railGunRepository) {
        instance.railGunRepository = std::move(repository);
    }
    return instance;
}

RailGunServiceImpl& RailGunServiceImpl::getInstance() {
    return instance;
}

void RailGunServiceImpl::fire() {
    std::cout << "Service: Fire!" << std::endl;
    railGunRepository->fire();
}
