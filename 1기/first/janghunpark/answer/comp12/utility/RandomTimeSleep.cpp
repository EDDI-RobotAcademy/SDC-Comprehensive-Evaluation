//
// Created by eddi on 23. 12. 15.
//

#include "RandomTimeSleep.h"

// 소수점 형태의 랜덤 시간 sleep 구현
void RandomTimeSleep::randomSleep(double minSeconds, double maxSeconds) {
    // 시드 초기화
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    // 균등 분포의 랜덤 시간 생성
    std::uniform_real_distribution<double> distribution(minSeconds, maxSeconds);
    double randomSleepTime = distribution(generator);

    // 대기
    std::this_thread::sleep_for(std::chrono::duration<double>(randomSleepTime));

    std::cout << "sleep time = " << randomSleepTime << std::endl;
}