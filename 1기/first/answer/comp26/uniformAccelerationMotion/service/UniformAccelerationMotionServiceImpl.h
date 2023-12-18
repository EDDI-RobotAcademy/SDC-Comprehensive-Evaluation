//
// Created by oem on 23. 12. 15.
//

#ifndef UNIQUETEST_UNIFORMACCELERATIONMOTIONSERVICEIMPL_H
#define UNIQUETEST_UNIFORMACCELERATIONMOTIONSERVICEIMPL_H

#include "UniformAccelerationMotionService.h"
#include "../repository/UniformAccelerationMotionRepository.h"

#include <memory>

class UniformAccelerationMotionServiceImpl: public UniformAccelerationMotionService {

private:
    std::unique_ptr<UniformAccelerationMotionRepository> uniformAccelerationMotionRepository;
    static UniformAccelerationMotionServiceImpl instance;

public:
    UniformAccelerationMotionServiceImpl(std::unique_ptr<UniformAccelerationMotionRepository> repository);

    static UniformAccelerationMotionServiceImpl& getInstance(std::unique_ptr<UniformAccelerationMotionRepository> repository);
    static UniformAccelerationMotionServiceImpl& getInstance();

    double calculateTime(double distance, double acceleration) override;
};


#endif //UNIQUETEST_UNIFORMACCELERATIONMOTIONSERVICEIMPL_H
