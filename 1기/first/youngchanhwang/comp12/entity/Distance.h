//
// Created by eddi on 23. 12. 15.
//

#ifndef SPEED_DISTANCE_H
#define SPEED_DISTANCE_H

class Distance {
private:
    int speed;
    double accel;
    double duration;

public:
    Distance(int speed, double accel, double duration);
    double getDistance();
};

#endif //SPEED_DISTANCE_H
