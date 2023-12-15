//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_SPEED_H
#define COMP12_SPEED_H


#include <memory>

class Speed {
private:
    int vectorX;
    int vectorY;
    static std::shared_ptr<Speed> instance;

public:
    Speed();
    static std::shared_ptr<Speed> getInstance();
    int saveSpeed();
    ~Speed();
};


#endif //COMP12_SPEED_H
