//
// Created by eddi on 23. 12. 15.
//
#include "Sleep.h"
#include "RandomGenerator.h"
#include <iostream>
#include <thread>
#include <chrono>


double Sleep::randomsleep() {
    int millisecound = RandomGenerator::generate();
    std::cout << "sleep 사용" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds (millisecound));

    return (double)millisecound/1000;

}