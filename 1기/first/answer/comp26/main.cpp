#include <iostream>
#include <memory>
#include "railgun/repository/RailGunRepository.h"
#include "railgun/controller/RailGunController.h"
#include "railgun/service/RailGunServiceImpl.h"
#include "railgun/repository/RailGunRepositoryImpl.h"
#include "uniformAccelerationMotion/repository/UniformAccelerationMotionRepository.h"
#include "uniformAccelerationMotion/repository/UniformAccelerationMotionRepositoryImpl.h"
#include "uniformAccelerationMotion/service/UniformAccelerationMotionServiceImpl.h"

void initEachDomain (void)
{
    std::unique_ptr<RailGunRepository> repository = std::make_unique<RailGunRepositoryImpl>();
    std::unique_ptr<RailGunService> service = std::make_unique<RailGunServiceImpl>(std::move(repository));
    RailGunController::getInstance(std::move(service));

    std::unique_ptr<UniformAccelerationMotionRepository> uniformAccelerationMotionRepository =
            std::make_unique<UniformAccelerationMotionRepositoryImpl>();
    UniformAccelerationMotionServiceImpl::getInstance(
            std::move(uniformAccelerationMotionRepository));
}

int main() {
    initEachDomain();

    RailGunController& railGunController = RailGunController::getInstance();
    railGunController.fire();

    return 0;
}
