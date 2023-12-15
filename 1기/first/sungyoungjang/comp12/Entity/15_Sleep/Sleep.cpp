//
// Created by eddi on 23. 12. 15.
//

#include <chrono>
#include <random>
#include <thread>
#include <iostream>
#include "Sleep.h"

Sleep::Sleep() { }

Sleep::~Sleep() { }

void Sleep::randomSleep(double minSeconds, double maxSeconds) {

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);


    std::uniform_real_distribution<double> distribution(minSeconds, maxSeconds);
    double sleepTime = distribution(generator);


    std::this_thread::sleep_for(std::chrono::duration<double>(sleepTime));
    std::cout << "Slept for " << sleepTime << " seconds." << std::endl;
}