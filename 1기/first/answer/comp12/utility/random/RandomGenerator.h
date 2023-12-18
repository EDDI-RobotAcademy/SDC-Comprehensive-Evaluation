//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_RANDOMGENERATOR_H
#define COMP12_RANDOMGENERATOR_H


#include <random>

class RandomGenerator {

private:
    static std::random_device rd;
    static std::mt19937 intGenerator;
    static std::mt19937 doubleGenerator;
    static std::uniform_int_distribution<int> intDistribution;
    static std::uniform_real_distribution<double> doubleDistribution;

public:
    static double getDoubleRandomNumber(double min, double max);
    static int getIntRandomNumber(int min, int max);
};


#endif //COMP12_RANDOMGENERATOR_H
