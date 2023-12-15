//
// Created by eddi on 23. 12. 15.
//

#include "RandomSleeper.h"
#include <iostream>
#include <chrono>
#include <random>
#include <thread>

// 생성자 정의
RandomSleeper::RandomSleeper(double minSeconds, double maxSeconds) : minSeconds(minSeconds), maxSeconds(maxSeconds) {}

// 랜덤한 소수점 형태의 sleep 함수 정의
void RandomSleeper::randomSleep() {
    // 시드를 현재 시간으로 설정
    std::random_device rd;
    std::default_random_engine generator(rd());

    // 범위를 지정하여 소수점 형태의 랜덤한 초 값을 생성
    std::uniform_real_distribution<double> distribution(minSeconds, maxSeconds);
    double sleepTime = distribution(generator);

    // 초 단위로 sleep
    std::this_thread::sleep_for(std::chrono::duration<double>(sleepTime));


    std::cout << "Slept for " << sleepTime << " seconds." << std::endl;
}






