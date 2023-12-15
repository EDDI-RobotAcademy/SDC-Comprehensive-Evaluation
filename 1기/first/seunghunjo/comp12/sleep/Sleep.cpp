//
// Created by eddi on 23. 12. 15.
//

#include <thread>
#include "Sleep.h"
#include "RandomGenerator.h"

Sleep::Sleep() {
    std::this_thread::sleep_for(std::chrono::milliseconds(RandomGenerator::generate(300,1000)));
}

Sleep::~Sleep() {

}
