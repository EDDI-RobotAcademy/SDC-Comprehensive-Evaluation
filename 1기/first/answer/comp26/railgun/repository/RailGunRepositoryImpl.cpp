//
// Created by eddi on 23. 12. 15.
//

#include "RailGunRepositoryImpl.h"

#include <iostream>

RailGunRepositoryImpl RailGunRepositoryImpl::instance;

RailGunRepositoryImpl& RailGunRepositoryImpl::getInstance() {
    return instance;
}

void RailGunRepositoryImpl::fire() {
    // 탄환 종단 속도 도달 시간
    // a = 1250 0000 0000
    // S = Vo * t + 0.5 * a * t^2
    // 100 = 0 + 0.5 * a * t^2
    // a * t^2 = 100 * 2
    // t^2 = 200 / 125000000000
    // t = sqrt(200 / 125000000000) = 0.00004


    // 탄환의 종단 속도
    // V = Vo + a * t
    // V = 0 + 125000000000 * 0.00004
    // V = 5000000 (5000 km / s)

    // 전함까지의 도달 시간
    // 적함과의 거리 = 10000 km
    // 초당 5000 km 를 이동하므로 2초

    std::cout << "Repository: Fire!" << std::endl;
    std::cout << "Hit after: 2.00004 초" << std::endl;
}
