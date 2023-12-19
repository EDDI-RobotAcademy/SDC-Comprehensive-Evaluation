//
// Created by eddi on 23. 12. 15.
//
#include <random>
#include "RandomGenerator.h"

double RandomGenerator::generate() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_real_distribution<> dis(RANDOM_MIN, RANDOM_MAX);
    return dis(gen);
}

int RandomGenerator::generate(int min, int max) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis(gen);
}
