//
// Created by eddi on 23. 12. 15.
//

#include "Sleeper.h"

void Sleeper::sleep(int _number) {
    std::this_thread::sleep_for(std::chrono::milliseconds(_number));
}
