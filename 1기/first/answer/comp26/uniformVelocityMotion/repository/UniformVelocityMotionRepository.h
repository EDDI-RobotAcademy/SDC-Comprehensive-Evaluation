//
// Created by oem on 23. 12. 15.
//

#ifndef UNIQUETEST_UNIFORMVELOCITYMOTIONREPOSITORY_H
#define UNIQUETEST_UNIFORMVELOCITYMOTIONREPOSITORY_H

class UniformVelocityMotionRepository {
public:
    virtual double calculateTime(double distance, double velocity) = 0;
};

#endif //UNIQUETEST_UNIFORMVELOCITYMOTIONREPOSITORY_H
