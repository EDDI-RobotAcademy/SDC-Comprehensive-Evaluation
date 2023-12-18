//
// Created by eddi on 23. 12. 15.
//

#include <chrono>
#include <thread>
#include "RandomSleep.h"

void RandomSleep::sleep() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0.5, 5.0);

    double sleepTime = dis(gen);

    std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(sleepTime * 1000)));
}
