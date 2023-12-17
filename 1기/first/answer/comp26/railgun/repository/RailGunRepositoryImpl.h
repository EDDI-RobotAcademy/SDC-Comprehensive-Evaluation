//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP26_RAILGUNREPOSITORYIMPL_H
#define COMP26_RAILGUNREPOSITORYIMPL_H

#include "RailGunRepository.h"

class RailGunRepositoryImpl : public RailGunRepository {

private:
    static RailGunRepositoryImpl instance;

public:
    static RailGunRepositoryImpl& getInstance();
    void fire(double expectedTime) override;
};


#endif //COMP26_RAILGUNREPOSITORYIMPL_H
