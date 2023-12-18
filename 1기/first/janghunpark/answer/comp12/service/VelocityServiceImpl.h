//
// Created by eddi on 23. 12. 15.
//

#ifndef ANSWER_VELOCITYSERVICEIMPL_H
#define ANSWER_VELOCITYSERVICEIMPL_H

#include <memory>
#include <vector>
#include "VelocityService.h"
#include "../repository/VelocityRepositoryImpl.h"

class VelocityServiceImpl : public VelocityService {
private:
    std::shared_ptr<VelocityRepository> velocityRepository;
public:
    VelocityServiceImpl(std::shared_ptr<VelocityRepository> velocityRepository);
    void randomGenerationAndSave() override;
};


#endif //ANSWER_VELOCITYSERVICEIMPL_H
