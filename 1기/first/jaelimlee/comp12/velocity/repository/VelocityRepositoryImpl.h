//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_VELOCITYREPOSITORYIMPL_H
#define COMP12_VELOCITYREPOSITORYIMPL_H


#include "VelocityRepository.h"
#include <optional>
#include <memory>

class VelocityRepositoryImpl : public VelocityRepository{
private:
    static std::shared_ptr<VelocityRepositoryImpl> instance;

public:
    Velocity *save(Velocity *velocity) override;

    VelocityRepositoryImpl();
    static std::shared_ptr<VelocityRepositoryImpl> getInstance();
};


#endif //COMP12_VELOCITYREPOSITORYIMPL_H
