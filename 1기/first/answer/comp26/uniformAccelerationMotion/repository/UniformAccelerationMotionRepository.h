//
// Created by oem on 23. 12. 15.
//

#ifndef UNIQUETEST_UNIFORMACCELERATIONMOTIONREPOSITORY_H
#define UNIQUETEST_UNIFORMACCELERATIONMOTIONREPOSITORY_H

class UniformAccelerationMotionRepository {
public:
    virtual double calculateTime(double distance, double acceleration) = 0;
};

#endif //UNIQUETEST_UNIFORMACCELERATIONMOTIONREPOSITORY_H
