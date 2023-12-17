//
// Created by oem on 23. 12. 15.
//

#ifndef UNIQUETEST_UNIFORMACCELERATIONMOTIONREPOSITORYIMPL_H
#define UNIQUETEST_UNIFORMACCELERATIONMOTIONREPOSITORYIMPL_H


#include "UniformAccelerationMotionRepository.h"

class UniformAccelerationMotionRepositoryImpl : public UniformAccelerationMotionRepository {

private:
    static UniformAccelerationMotionRepositoryImpl instance;

public:
    static UniformAccelerationMotionRepositoryImpl& getInstance();
    double calculateTime(double distance, double acceleration) override;

    double calculateTerminalVelocity(double time) override;
};


#endif //UNIQUETEST_UNIFORMACCELERATIONMOTIONREPOSITORYIMPL_H
