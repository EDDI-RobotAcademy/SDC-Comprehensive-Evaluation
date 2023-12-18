#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include "mysql/DbProcess.h"
#include "velocity/Velocity.h"

class Acceleration {
public:
    Acceleration(double acceleration) : acceleration(acceleration) {}

    double getAcceleration() const {
        return acceleration;
    }

private:
    double acceleration;
};

void init_database_object() {
    const char* host = "localhost";
    const char* user = "eddi";
    const char* pass = "eddi@123";
    const char* dbName = "test_db";

    // 14. DB 접속 싱글톤
    DbProcess* dbInstance = DbProcess::getInstance(host, user, pass, dbName);
    dbInstance->connect();
}

Velocity saveVelocity(Velocity* velocity);

// 시간 간격 계산 함수
double calculateDeltaTime(const std::chrono::time_point<std::chrono::high_resolution_clock>& previousTime,
                          const std::chrono::time_point<std::chrono::high_resolution_clock>& currentTime) {
    // 시간 간격 계산 (단위: 초)
    return std::chrono::duration<double>(currentTime - previousTime).count();
}

// 가속도를 계산하는 함수
double calculateAcceleration(const Velocity& current, const Velocity& previous, double deltaTime) {
    // 가속도 계산 (단순화하여 현재 속도에서 이전 속도를 뺀 값)
    return (current.getSpeed() - previous.getSpeed()) / deltaTime;
}

int main() {
    init_database_object();
    std::vector<Velocity> velocityData;
    std::vector<Acceleration> accelerationData;
    std::chrono::time_point<std::chrono::high_resolution_clock> previousTime = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 10; i++) {
        Velocity velocity(RandomGenerate::generateSpeed(), RandomGenerate::generateDirection());
        saveVelocity(&velocity);
        std::cout << velocity.getVelocityInfo() << std::endl;

        // 소숫점 형태의 랜덤 Sleep (0.3~1.0초)
        std::this_thread::sleep_for(std::chrono::milliseconds(std::rand() % 700 + 300));

        velocityData.push_back(velocity);

        // 현재 시간 갱신
        std::chrono::time_point<std::chrono::high_resolution_clock> currentTime = std::chrono::high_resolution_clock::now();
        double deltaTime = calculateDeltaTime(previousTime, currentTime);

        // 초기 속도가 없는 경우를 고려하여 초기 가속도 계산
        if (i == 0) {
            // 초기 속도를 0으로 가정하고 계산
            double initialVelocity = 0.0;
            double initialAcceleration = calculateAcceleration(velocity, Velocity(initialVelocity, 0.0), deltaTime);
            accelerationData.emplace_back(initialAcceleration);
        }

        // 나머지 가속도 계산 및 저장
        if (i > 0) {
            const Velocity& currentVelocity = velocityData[i];
            const Velocity& previousVelocity = velocityData[i - 1];

            // 가속도 계산
            double accelerationValue = calculateAcceleration(currentVelocity, previousVelocity, deltaTime);

            // 가속도 데이터 저장
            accelerationData.emplace_back(accelerationValue);
        }

        // 이전 시간 갱신
        previousTime = currentTime;
    }

    // 결과 출력
    for (const auto& acceleration : accelerationData) {
        std::cout << "가속도: " << acceleration.getAcceleration() << " m/s^2" << std::endl;
    }

    return 0;
}
