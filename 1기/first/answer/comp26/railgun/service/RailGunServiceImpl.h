//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP26_RAILGUNSERVICEIMPL_H
#define COMP26_RAILGUNSERVICEIMPL_H


#include <memory>
#include "RailGunService.h"

#include "../repository/RailGunRepository.h"

class RailGunServiceImpl : public RailGunService {

private:
    std::unique_ptr<RailGunRepository> railGunRepository;
    static RailGunServiceImpl instance;

public:
    RailGunServiceImpl(std::unique_ptr<RailGunRepository> repository);

    static RailGunServiceImpl& getInstance(std::unique_ptr<RailGunRepository> repository);
    static RailGunServiceImpl& getInstance();

    void fire() override;
};


#endif //COMP26_RAILGUNSERVICEIMPL_H
