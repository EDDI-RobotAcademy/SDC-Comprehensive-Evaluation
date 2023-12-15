//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_RANDOMSLEEPER_H
#define COMP12_RANDOMSLEEPER_H
#include <chrono>
#include <random>
#include <thread>

class RandomSleeper {
public:
    // 생성자: 랜덤 범위 초기화
    RandomSleeper(double minSeconds, double maxSeconds);

    // 랜덤한 소수점 형태의 sleep 함수
    void randomSleep();

private:
    double minSeconds;
    double maxSeconds;
};


#endif //COMP12_RANDOMSLEEPER_H
