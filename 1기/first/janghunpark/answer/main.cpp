#include <iostream>
//#include "comp12/utility/RandomTimeSleep.h"
//#include "comp12/utility/RandomGenerator.h"
//#include "comp12/controller/VelocityController.h"
//#include "comp12/service/VelocityServiceImpl.h"

#include "comp26/railgun/Railgun.h"

// C 파일들 이므로 리펙토링을 통해 main.c로 바꾸어서 컴파일 가능
#include "comp34/request.h"
#include "comp34/response.h"


//void initiation() {
//    std::shared_ptr<VelocityService> velocityService
//        = std::make_shared<VelocityServiceImpl>(std::make_shared<VelocityRepositoryImpl>());
//    VelocityController& velocityController = VelocityController::getInstance(velocityService);
//}

int main() {
//    std::cout << "Hello, World!" << std::endl;
//    RandomTimeSleep::randomSleep(3.3, 5.0);
//    std::cout << "Sleep completed." << std::endl;
//    RandomGenerator::generate();

    // 28번 정답 = 31622.8m/s
    // 30번 정답 = 0.00632456초
    float acceleration = 5000000; // 500만 m/s^2
    float distanceFromEnemy = 10000000; // 10000 km
    float durationInRailgun, timeToReachTheTarget;
    Railgun sampleGun;
    sampleGun.calculateTerminalVelocity(110.0, 10.0, acceleration);
    std::cout << "종단 속도는 " << sampleGun.getVelocityOfBullet() << " m/s 입니다." << std::endl;
    durationInRailgun = sampleGun.calculateTimeToReachTerminalVelocity(
            sampleGun.getVelocityOfBullet(), 0.0, acceleration);
    std::cout << "종단 속도에 도달할 때까지 걸린 시간은 " << durationInRailgun << "초 입니다." << std::endl;
    timeToReachTheTarget = sampleGun.calculateTimeToDestroyEnemy(distanceFromEnemy, sampleGun.getVelocityOfBullet());
    std::cout << "타겟을 맞출 때까지 걸린 시간은 " << timeToReachTheTarget << "초 입니다." << std::endl;

    // 34~36번 정답 (main.c로 리펙토링해서 실행 가능)
//    request *sample_request = init_request_object(1, 2);
//    response *sample_response = init_response_object_with_request(sample_request);
//    free_response_memory_after_print(sample_response);

    return 0;
}
