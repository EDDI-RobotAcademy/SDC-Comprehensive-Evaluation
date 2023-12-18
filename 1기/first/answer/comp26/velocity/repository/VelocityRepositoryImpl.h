//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP26_VELOCITYREPOSITORYIMPL_H
#define COMP26_VELOCITYREPOSITORYIMPL_H

#include "VelocityRepository.h"

class VelocityRepositoryImpl : public VelocityRepository {

private:
    static VelocityRepositoryImpl instance;

public:
    static VelocityRepositoryImpl& getInstance();
    void check() override;
};


#endif //COMP26_VELOCITYREPOSITORYIMPL_H
