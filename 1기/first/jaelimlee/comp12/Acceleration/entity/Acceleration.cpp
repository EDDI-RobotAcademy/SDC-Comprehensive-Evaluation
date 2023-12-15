//
// Created by eddi on 23. 12. 15.
//

#include "Acceleration.h"

Acceleration:: Acceleration(const Velocity& v1, const Velocity& v2): v1(v1), v2(v2) {}

//double Acceleration::calculate_acceleration() const {
//
//    auto time_diff;
//    double speed_diff;
//
//    // 가속도 = 속도 변화량 / 시간
//    if (time_diff > 0) {
//        return speed_diff / time_diff;
//    } else {
//        std::cout << "Error: Invalid time difference. Acceleration calculation failed." << std::endl;
//    }
//}

