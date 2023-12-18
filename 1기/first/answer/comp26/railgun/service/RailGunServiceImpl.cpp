//
// Created by eddi on 23. 12. 15.
//

#include "RailGunServiceImpl.h"
#include "../../uniformAccelerationMotion/service/UniformAccelerationMotionServiceImpl.h"
#include "../../uniformVelocityMotion/service/UniformVelocityMotionServiceImpl.h"
#include "../../uniformAccelerationMotion/repository/UniformAccelerationMotionRepositoryImpl.h"
#include "../../uniformVelocityMotion/repository/UniformVelocityMotionRepositoryImpl.h"

#include <iostream>
#include <iomanip>

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

    UniformAccelerationMotionRepositoryImpl& uniformAccelerationMotionRepository = UniformAccelerationMotionRepositoryImpl::getInstance();
    double timeToReachTerminalVelocity = uniformAccelerationMotionRepository.calculateTime(100, 125000000000);
    std::cout << "탄환 가속에 소요된 시간: " << std::fixed << std::setprecision(5)
            << timeToReachTerminalVelocity << std::endl;

    double terminalVelocityFromUniformAcceleration =
            uniformAccelerationMotionRepository.calculateTerminalVelocity(timeToReachTerminalVelocity);
    std::cout << "가속 이후 탄환 속도: " << terminalVelocityFromUniformAcceleration << std::endl;

    UniformVelocityMotionRepositoryImpl& uniformVelocityMotionRepository = UniformVelocityMotionRepositoryImpl::getInstance();
    double timeOfSpaceFlight = uniformVelocityMotionRepository.calculateTime(10000000, terminalVelocityFromUniformAcceleration);
    std::cout << "종단 속도 도달 이후 탄환의 체공 시간: " << timeOfSpaceFlight << std::endl;

    double ImpactTimeAfterShot = timeToReachTerminalVelocity + timeOfSpaceFlight;

    railGunRepository->fire(ImpactTimeAfterShot);
}
