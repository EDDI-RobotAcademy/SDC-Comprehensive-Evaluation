//
// Created by eddi on 23. 12. 15.
//

#ifndef ANSWER_RAILGUN_H
#define ANSWER_RAILGUN_H


class Railgun {
private:
    float velocityOfBullet;
public:
    Railgun();

    void calculateTerminalVelocity(float gunLength, float initialPosition, float acceleration);
    float getVelocityOfBullet();
    float calculateTimeToReachTerminalVelocity(float terminalVelocity, float initialVelocity, float acceleration);
    float calculateTimeToDestroyEnemy(float distanceFromEnemy, float terminalVelocity);
};


#endif //ANSWER_RAILGUN_H
