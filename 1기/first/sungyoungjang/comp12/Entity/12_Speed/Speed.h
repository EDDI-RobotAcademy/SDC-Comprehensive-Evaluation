//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_SPEED_H
#define COMP12_SPEED_H


class Speed {
private:
    const int MAX = 100;
    const int MIN = 1;
    double speed_X;
    double speed_Y;

public:
    void random_speed();
    int getRandom_speed();
    Speed();
    double getSpeedX() const;
    double getSpeedY() const;
    void printInfo();
};


#endif //COMP12_SPEED_H
