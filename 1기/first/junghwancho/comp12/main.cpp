#include <iostream>
#include <thread>
#include "mysql/DbProcess.h"
#include "velocity/Velocity.h"

void init_database_object()
{
    const char* host = "localhost";
    const char* user = "eddi";
    const char* pass = "eddi@123";
    const char* dbName = "test_db";

    // 14. DB 접속 싱글톤
    DbProcess* dbInstance = DbProcess::getInstance(host, user, pass, dbName);
    dbInstance->connect();
}

Velocity saveVelocity(Velocity* velocity);

int main() {
    init_database_object();
    for (int i = 0; i < 10; i++) {
        Velocity velocity(RandomGenerate::generateSpeed(), RandomGenerate::generateDirection());
        saveVelocity(&velocity);
        std::cout << velocity.getVelocityInfo() << std::endl;
        //15. 소숫점 형태의 랜덤 Sleep (0.3~1.0초) & 16. 0.3~1.0초 사이 간격으로 저장
        std::this_thread::sleep_for(std::chrono::milliseconds(std::rand() % 700 + 300));
    }
    return 0;
}
