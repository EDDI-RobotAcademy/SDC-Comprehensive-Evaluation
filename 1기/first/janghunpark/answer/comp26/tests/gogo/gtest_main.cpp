#include <gtest/gtest.h>

#include "../../railgun/Railgun.h"

// 27번
TEST(Railgun, doesCalculationOfTerminalVelocityWork)
{
    auto *sampleGun1 = new Railgun();
    sampleGun1->calculateTerminalVelocity(10.0, 0.0, 20.0);

    EXPECT_EQ(sampleGun1->getVelocityOfBullet(), 20);

    delete sampleGun1;
}

// 30번
TEST(Railgun, doesCalculationOfTimeWork)
{
    float time;
    auto *sampleGun2 = new Railgun();
    time = sampleGun2->calculateTimeToReachTerminalVelocity(100.0, 0, 10);

    EXPECT_EQ(time, 10);

    delete sampleGun2;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
