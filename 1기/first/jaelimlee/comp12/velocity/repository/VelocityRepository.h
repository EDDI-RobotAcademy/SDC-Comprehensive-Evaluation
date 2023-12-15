//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_VELOCITYREPOSITORY_H
#define COMP12_VELOCITYREPOSITORY_H

#include "../entity/Velocity.h"

class VelocityRepository {
public:
    virtual ~VelocityRepository() = default;
    virtual Velocity *save(Velocity *velocity) = 0;
};

#endif //COMP12_VELOCITYREPOSITORY_H
