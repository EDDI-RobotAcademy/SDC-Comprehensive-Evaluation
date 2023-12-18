//
// Created by eddi on 23. 12. 15.
//

#include "Velocity.h"

Velocity::Velocity(float distance, float startTime, float endTime)
                : distance(distance), startTime(startTime), endTime(endTime) { }


float Velocity::get_distance()
{
    return distance;
}
float Velocity::get_startTime()
{
    return startTime;
}
float Velocity::get_endTime()
{
    return endTime;
}





