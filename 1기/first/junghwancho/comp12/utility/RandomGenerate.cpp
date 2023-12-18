//
// Created by eddi on 23. 12. 15.
//

#include <random>
#include "RandomGenerate.h"

// 15. 소수점 형태의 random sleep
double RandomGenerate::generateSleep() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_real_distribution<> dis(0.3, 1.0);
    return dis(gen);
}

double RandomGenerate::generateSpeed() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_real_distribution<> dis(0.0, 100.0);
    return dis(gen);
}

double RandomGenerate::generateDirection() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_real_distribution<> dis(0, 360);
    return dis(gen);
}