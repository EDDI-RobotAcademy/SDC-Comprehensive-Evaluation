//
// Created by eddi on 23. 12. 15.
//

#ifndef ANSWER_RANDOMTIMESLEEP_H
#define ANSWER_RANDOMTIMESLEEP_H

#include <iostream>
#include <chrono>
#include <thread>
#include <random>

class RandomTimeSleep {
public:
    static void randomSleep(double minSeconds, double maxSeconds);
};


#endif //ANSWER_RANDOMTIMESLEEP_H
