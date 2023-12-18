//
// Created by oem on 23. 12. 15.
//

#ifndef COMP26_UNIFORMVELOCITYMOTIONREPOSITORYIMPL_H
#define COMP26_UNIFORMVELOCITYMOTIONREPOSITORYIMPL_H


#include "UniformVelocityMotionRepository.h"

class UniformVelocityMotionRepositoryImpl : public UniformVelocityMotionRepository {

private:
    static UniformVelocityMotionRepositoryImpl instance;

public:
    static UniformVelocityMotionRepositoryImpl& getInstance();
    double calculateTime(double distance, double velocity) override;
};


#endif //COMP26_UNIFORMVELOCITYMOTIONREPOSITORYIMPL_H
