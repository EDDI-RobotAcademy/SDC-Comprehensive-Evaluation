//
// Created by eddi on 23. 12. 15.
//
#include <random>
#include "RandomGenerator.h"

int RandomGenerator::generate() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_real_distribution<> dis(300, 1000);
    return dis(gen);

}

int RandomGenerator::generate(int min, int max) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(min, max);
    return dis(gen);

}