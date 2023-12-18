//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_SPEED_H
#define COMP12_SPEED_H
#include <cmath>

class Speed {
private:
    double xSpeed; // x축 방향 속도
    double ySpeed; // y축 방향 속도

public:
    Speed(double x = 0.0, double y = 0.0);
    double getMagnitude() const;
    double getDirection() const;
    double getXSpeed() const;
    double getYSpeed() const;
    void setXSpeed(double x);
    void setYSpeed(double y);
};

#endif //COMP12_SPEED_H
