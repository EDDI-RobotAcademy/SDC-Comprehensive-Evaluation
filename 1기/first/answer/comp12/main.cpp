#include <iostream>
#include <thread>
#include <iomanip>

#include "velocity/entity/Velocity2d.h"
#include "utility/random/RandomGenerator.h"
#include "mysql/DbProcess.h"
#include "acceleration/entity/Acceleration2d.h"

void initMysqlObject(void)
{
    const char* host = "localhost";
    const char* user = "eddi";
    const char* pass = "eddi@123";
    const char* dbName = "test_db";

    DbProcess& dbInstance = DbProcess::getInstance(host, user, pass, dbName);
    dbInstance.connect();
}

void random_velocity_record_with_random_time (void)
{
    DbProcess& dbInstance = DbProcess::getInstance();

    for (int i = 0; i < 10; i++) {
        double randomDelay = RandomGenerator::getDoubleRandomNumber(0.3, 1.0);
        std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<long long>(randomDelay * 1000)));

        dbInstance.insertData(Velocity2d(
                RandomGenerator::getIntRandomNumber(5, 10),
                RandomGenerator::getIntRandomNumber(5, 10)));
    }
}

void delete_velocity_info (void)
{
    DbProcess& dbInstance = DbProcess::getInstance();
    dbInstance.deleteAll("velocity");
}

std::chrono::time_point<std::chrono::system_clock> parseTimestamp(const std::string& timestamp) {
    std::tm tm = {};
    long long milliseconds = 0;

    std::istringstream ss(timestamp);
    ss >> std::get_time(&tm, "%Y-%m-%d %H:%M:%S.");
    ss >> milliseconds;

    auto tp = std::chrono::system_clock::from_time_t(std::mktime(&tm));
    tp += std::chrono::milliseconds(milliseconds);

    return tp;
}

std::list<Acceleration2d> calculateAccelerationFromVelocityDerivative (void)
{
    DbProcess& dbInstance = DbProcess::getInstance();
    std::list<Velocity2d> velocityList = dbInstance.findAll();

    for (const auto& velocity : velocityList) {
        std::cout << velocity << std::endl;
    }

    std::list<Acceleration2d> accelerationList;

    auto velocity = velocityList.begin();
    if (velocity == velocityList.end()) {
        std::cerr << "Not enough data for acceleration calculation." << std::endl;
        return accelerationList;
    }

    Velocity2d prevVelocity = *velocity;
    ++velocity;

    for (; velocity != velocityList.end(); ++velocity) {
        auto timestamp1 = parseTimestamp(prevVelocity.getTimestamp());
        auto timestamp2 = parseTimestamp(velocity->getTimestamp());

        auto deltaTime = std::chrono::duration_cast<std::chrono::duration<double>>(timestamp2 - timestamp1).count();
        std::cout << "deltaTime: " << deltaTime << ", ";

        double deltaVx = velocity->getVelocity().getX() - prevVelocity.getVelocity().getX();
        double deltaVy = velocity->getVelocity().getY() - prevVelocity.getVelocity().getY();

        double accelerationX = deltaVx / deltaTime;
        double accelerationY = deltaVy / deltaTime;
        std::cout << "acceleration: (" << accelerationX << ", " << accelerationY << ")" << std::endl;

        accelerationList.push_back({static_cast<float>(accelerationX), static_cast<float>(accelerationY)});

        prevVelocity = *velocity;
    }

    return accelerationList;
}

void calculateTotalDistance (void)
{
    double totalDistance = 0.0;

    DbProcess& dbInstance = DbProcess::getInstance();
    std::list<Velocity2d> velocityList = dbInstance.findAll();

    auto velocity = velocityList.begin();
    if (velocity == velocityList.end()) {
        std::cerr << "Not enough data for distance calculation." << std::endl;
    }

    Velocity2d prevVelocity = *velocity;
    ++velocity;

    for (; velocity != velocityList.end(); ++velocity) {
        auto timestamp1 = parseTimestamp(prevVelocity.getTimestamp());
        auto timestamp2 = parseTimestamp(velocity->getTimestamp());

        auto deltaTime = std::chrono::duration_cast<std::chrono::duration<double>>(timestamp2 - timestamp1).count();
        double distanceX = prevVelocity.getVelocity().getX() * deltaTime;
        double distanceY = prevVelocity.getVelocity().getY() * deltaTime;

        double xyDistance = std::sqrt(distanceX * distanceX + distanceY * distanceY);
        std::cout << "xyDistance: " << xyDistance
                << ", velocityX: " << prevVelocity.getVelocity().getX()
                << ", velocityY: " << prevVelocity.getVelocity().getY() << std::endl;

        totalDistance += xyDistance;

        prevVelocity = *velocity;
    }

    std::cout << "전체 이동 거리: " << totalDistance << std::endl;
}

void calculateDisplacementFromVelocity (void)
{
    Vector2d displacement(0, 0);

    DbProcess& dbInstance = DbProcess::getInstance();
    std::list<Velocity2d> velocityList = dbInstance.findAll();

    auto velocity = velocityList.begin();
    if (velocity == velocityList.end()) {
        std::cerr << "Not enough data for displacement calculation." << std::endl;
    }

    Velocity2d prevVelocity = *velocity;
    ++velocity;

    for (; velocity != velocityList.end(); ++velocity) {
        auto timestamp1 = parseTimestamp(prevVelocity.getTimestamp());
        auto timestamp2 = parseTimestamp(velocity->getTimestamp());

        auto deltaTime = std::chrono::duration_cast<std::chrono::duration<double>>(timestamp2 - timestamp1).count();
        double displacementX = (prevVelocity.getVelocity().getX() + velocity->getVelocity().getX()) / 2 * deltaTime;
        double displacementY = (prevVelocity.getVelocity().getY() + velocity->getVelocity().getY()) / 2 * deltaTime;

        displacement += Vector2d(displacementX, displacementY);
        std::cout << "변위: " << displacement << std::endl;

        prevVelocity = *velocity;
    }
}

int main() {
    initMysqlObject();

    random_velocity_record_with_random_time();
    calculateAccelerationFromVelocityDerivative();
    calculateTotalDistance();
    calculateDisplacementFromVelocity();

    delete_velocity_info();
    return 0;
}
