//
// Created by eddi on 23. 12. 15.
//
#include "Railgun_shoot_time.h"

Railgun_shoot_time::Railgun_shoot_time(int length, int accel) :
length(length), accel(accel) { }

double Railgun_shoot_time::getduration() {
    return 100/2500000
}