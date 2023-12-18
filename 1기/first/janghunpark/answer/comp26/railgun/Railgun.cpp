//
// Created by eddi on 23. 12. 15.
//

#include "Railgun.h"

#include <math.h>

Railgun::Railgun() {}

void Railgun::calculateTerminalVelocity(float gunLength, float initialPosition, float acceleration) {
//    float initialVelocity = 0;
    this->velocityOfBullet = sqrt(2*(acceleration)*(gunLength-initialPosition));
}

float Railgun::getVelocityOfBullet() {
    return velocityOfBullet;
}

float Railgun::calculateTimeToReachTerminalVelocity(float terminalVelocity, float initialVelocity, float acceleration) {
    float time;
    time = (terminalVelocity - initialVelocity) / acceleration;
    return time;
}

float Railgun::calculateTimeToDestroyEnemy(float distanceFromEnemy, float terminalVelocity) {
    float timeToReachTheTarget;
    timeToReachTheTarget = distanceFromEnemy / terminalVelocity;
    return timeToReachTheTarget;
}
