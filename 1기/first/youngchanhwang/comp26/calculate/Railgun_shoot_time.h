//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP26_RAILGUN_SHOOT_TIME_H
#define COMP26_RAILGUN_SHOOT_TIME_H

class Railgun_shoot_time{
private:
    int length;
    int accel;

public:
    Railgun_shoot_time(int length, int accel);
    double getduration();
};

#endif //COMP26_RAILGUN_SHOOT_TIME_H
