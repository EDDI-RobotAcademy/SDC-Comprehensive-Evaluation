#include <iostream>
#include "utility/Randomgenerator.h"
#include "velocity/entity/Velocity.h"
#include "mysql/DbProcess.h"
#include "velocity/repository/VelocityRepositoryImpl.h"


void velocity_create()
{
    // s10번 실행
    for (int i = 0; i < 10; i++) {

        // 0.3에서 1.0 사이의 시간 동안 sleep
        Randomgenerator::randomsleep();

        // 랜덤 속도 생성
        Velocity randomVelocity(Randomgenerator::randomgenerate(0.0, 15.0),
                                Randomgenerator::randomgenerate(0.0, 360.0));

        std::shared_ptr<VelocityRepositoryImpl> velocityRepository = VelocityRepositoryImpl::getInstance();

        // velocity_data 테이블에 생성한 속도 저장
        velocityRepository->save(&randomVelocity);

        // 확인용 출력
        std::cout << "velocity example: " << randomVelocity << std::endl;
    }

}


void init_database_object()
{
    const char* host = "localhost";
    const char* user = "eddi";
    const char* pass = "eddi@123";
    const char* dbName = "test_db";

    DbProcess* dbInstance = DbProcess::getInstance(host, user, pass, dbName);
    dbInstance->connect();
}


int main() {
    //db 접속
    init_database_object();

    std::cout << "랜덤 속도 생성!" << std::endl;
    velocity_create();

    return 0;
}
