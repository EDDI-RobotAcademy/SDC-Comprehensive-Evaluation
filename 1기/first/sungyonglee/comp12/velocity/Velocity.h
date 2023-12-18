//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_VELOCITY_H
#define COMP12_VELOCITY_H

class Velocity {
private:

    int minVelocity = 0;
    int maxVelocity = 10;
    double minSecond = 3;
    double maxSecond = 10;


public:
    int x;
    int y;
    double second;

    void _Velocity();

//    ~Velocity();
};

#endif //COMP12_VELOCITY_H
