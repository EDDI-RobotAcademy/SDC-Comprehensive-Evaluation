//
// Created by eddi on 23. 12. 15.
//

#include "RandomGenerator.h"

double RandomGenerator::generate() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_real_distribution<> dis(0.0, 10.0);
    std::cout << "random number = " << dis(gen) << std::endl;
    return dis(gen);
}