//
// Created by eddi on 23. 12. 15.
//

#include "Randomgenerator.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <random>

// 랜덤 sleep
void Randomgenerator::randomsleep() {
    std::srand(static_cast<unsigned>(std::time(0)));
    double randomSleepSecond = randomgenerate(0.3, 1.0); //랜덤 소수(0.3~1.0)
    std::this_thread::sleep_for(std::chrono::duration<double>(randomSleepSecond));
}


// 랜덤 소숫점 숫자 생성
double Randomgenerator::randomgenerate(double min, double max) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_real_distribution<> dis(min, max);
    return dis(gen);
}

// 랜덤 숫자(int형) 생성
int Randomgenerator::generate(int min, int max) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis(gen);
}