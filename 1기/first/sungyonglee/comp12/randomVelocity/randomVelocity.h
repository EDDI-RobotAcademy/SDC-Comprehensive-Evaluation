//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_RANDOMVELOCITY_H
#define COMP12_RANDOMVELOCITY_H

class RandomVelocity {

private:
    int minSecond, maxSecond;
    int minVelocity, maxVelocity;
    double pointSecond;
    double sumSecond;
    int pointVelocity;
    int sumVelocity;

public:

    static void RandomSecond(int min, int max);
    static void _RandomVelocity(int min, int max);

    ~RandomVelocity();
};

#endif //COMP12_RANDOMVELOCITY_H
