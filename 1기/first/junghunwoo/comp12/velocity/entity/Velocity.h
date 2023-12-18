//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_VELOCITY_H
#define COMP12_VELOCITY_H

#include <chrono>
#include <iostream>

class Velocity {
private:
    float distance;
    float startTime;
    float endTime;
    float startX;
    float startY;
    float endX;
    float endY;



public:
    Velocity(float distance, float startTime, float endTime);

    float get_distance();
    float get_startTime();
    float get_endTime();




};


#endif //COMP12_VELOCITY_H
