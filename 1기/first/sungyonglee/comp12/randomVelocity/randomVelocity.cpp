//
// Created by eddi on 23. 12. 15.
//

#include <iostream>
#include "randomVelocity.h"
#include "../utility/RandomGenerator.h"

void RandomVelocity::RandomSecond(int minSecond, int maxSecond) {
    double pointSecond[10];
    double sumSecond = 0;
    int count = 10;
    for (int i = 0 ; i < count ; i++) {
        pointSecond[i] = (double)(RandomGenerator::generate(minSecond, maxSecond)) / 10;
        //std::cout.precision(2);
        std::cout<< pointSecond[i] << std::endl;
        sumSecond += pointSecond[i];
    }
    std::cout << "sumSecond: " << sumSecond << std::endl;
}

void RandomVelocity::_RandomVelocity(int minVelocity, int maxVelocity) {
    int pointVelocity[10];
    int sumVelocity = 0;
    int count = 10;
    for (int i = 0 ; i < count ; i++) {
        pointVelocity[i] = (int)(RandomGenerator::generate(minVelocity, maxVelocity));
        std::cout << pointVelocity[i] << std::endl;
        sumVelocity += pointVelocity[i];

    }
    std::cout << "sumVelocity: " << sumVelocity << std::endl;
}