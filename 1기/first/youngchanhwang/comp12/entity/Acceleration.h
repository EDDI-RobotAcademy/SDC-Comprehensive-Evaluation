//
// Created by eddi on 23. 12. 15.
//

#ifndef SPEED_ACCELERATION_H
#define SPEED_ACCELERATION_H

class Acceleration {
private:
    int firstSpeed;
    int secondSpeed;
    double duration;

public:
    Acceleration(int firstSpeed, int secondSpeed, double duration);
    double getAcceleration();

};


#endif //SPEED_ACCELERATION_H
