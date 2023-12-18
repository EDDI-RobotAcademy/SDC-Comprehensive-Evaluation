//
// Created by oem on 23. 12. 15.
//

#ifndef COMP26_UNIFORMVELOCITYMOTIONSERVICEIMPL_H
#define COMP26_UNIFORMVELOCITYMOTIONSERVICEIMPL_H

#include <memory>
#include "../repository/UniformVelocityMotionRepository.h"
#include "UniformVelocityMotionService.h"

class UniformVelocityMotionServiceImpl : public UniformVelocityMotionService {

private:
    std::unique_ptr<UniformVelocityMotionRepository> uniformVelocityMotionRepository;
    static UniformVelocityMotionServiceImpl instance;

public:
    UniformVelocityMotionServiceImpl(std::unique_ptr<UniformVelocityMotionRepository> repository);

    static UniformVelocityMotionServiceImpl& getInstance(std::unique_ptr<UniformVelocityMotionRepository> repository);
    static UniformVelocityMotionServiceImpl& getInstance();

    double calculateTime(double distance, double velocity) override;
};


#endif //COMP26_UNIFORMVELOCITYMOTIONSERVICEIMPL_H
