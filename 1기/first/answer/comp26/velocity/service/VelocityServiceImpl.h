//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP26_VELOCITYSERVICEIMPL_H
#define COMP26_VELOCITYSERVICEIMPL_H

#include <memory>

#include "VelocityService.h"
#include "../repository/VelocityRepository.h"

class VelocityServiceImpl : public VelocityService {

private:
    std::unique_ptr<VelocityRepository> velocityRepository;
    static VelocityServiceImpl instance;

public:
    VelocityServiceImpl(std::unique_ptr<VelocityRepository> repository);

    static VelocityServiceImpl& getInstance(std::unique_ptr<VelocityRepository> repository);
    static VelocityServiceImpl& getInstance();

    void processVelocity() override;
};


#endif //COMP26_VELOCITYSERVICEIMPL_H
