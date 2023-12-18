//
// Created by eddi on 23. 12. 15.
//

#include "RandomGenerator.h"

std::random_device RandomGenerator::rd;

std::mt19937 RandomGenerator::intGenerator(rd());
std::mt19937 RandomGenerator::doubleGenerator(rd());

std::uniform_int_distribution<int> RandomGenerator::intDistribution;
std::uniform_real_distribution<double> RandomGenerator::doubleDistribution;

double RandomGenerator::getDoubleRandomNumber(double min, double max) {
    doubleDistribution.param(std::uniform_real_distribution<double>::param_type(min, max));
    return doubleDistribution(doubleGenerator);
}

int RandomGenerator::getIntRandomNumber(int min, int max) {
    intDistribution.param(std::uniform_int_distribution<int>::param_type(min, max));
    return intDistribution(intGenerator);
}
