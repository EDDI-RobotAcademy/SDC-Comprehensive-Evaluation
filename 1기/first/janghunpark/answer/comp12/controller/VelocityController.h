//
// Created by eddi on 23. 12. 15.
//

#ifndef ANSWER_VELOCITYCONTROLLER_H
#define ANSWER_VELOCITYCONTROLLER_H

#include <memory>
#include <vector>
#include "../service/VelocityService.h"

class VelocityController {
private:
    std::shared_ptr<VelocityService> velocityService;
public:
    VelocityController(std::shared_ptr<VelocityService> velocityService);

    void randomVelocityGeneration();

    static VelocityController& getInstance(std::shared_ptr<VelocityService> velocityService);
};


#endif //ANSWER_VELOCITYCONTROLLER_H
