#include <iostream>
#include <memory>
#include "railgun/repository/RailGunRepository.h"
#include "railgun/controller/RailGunController.h"
#include "railgun/service/RailGunServiceImpl.h"
#include "railgun/repository/RailGunRepositoryImpl.h"
#include "velocity/repository/VelocityRepositoryImpl.h"
#include "velocity/service/VelocityServiceImpl.h"

void initEachDomain (void)
{
    std::unique_ptr<RailGunRepository> repository = std::make_unique<RailGunRepositoryImpl>();
    std::unique_ptr<RailGunService> service = std::make_unique<RailGunServiceImpl>(std::move(repository));
    RailGunController::getInstance(std::move(service));

    std::unique_ptr<VelocityRepository> velocityRepository = std::make_unique<VelocityRepositoryImpl>();
    VelocityServiceImpl::getInstance(std::move(velocityRepository));
}

int main() {
    initEachDomain();

    RailGunController& railGunController = RailGunController::getInstance();
    railGunController.fire();

    return 0;
}
