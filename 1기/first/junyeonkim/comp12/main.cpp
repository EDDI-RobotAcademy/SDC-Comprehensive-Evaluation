#include <iostream>
#include "Speed/Speed.h"
#include "DatabaseConnection/DatabaseConnection.h"
#include "RandomSleep/RandomSleep.h"

int main() {
    RandomSleep randomSleep;
    sql::Connection* con = DatabaseConnection::getInstance().getConnection();

    // Prepare statement for inserting speed data
    sql::PreparedStatement* pstmt = con->prepareStatement("INSERT INTO SpeedData(xSpeed, ySpeed) VALUES (?, ?)");

    // Random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(-10.0, 10.0); // Generate speed between -10 to 10

    for (int i = 0; i < 10; ++i) {
        double xSpeed = dis(gen);
        double ySpeed = dis(gen);

        Speed speed(xSpeed, ySpeed);

        // Insert data into DB
        pstmt->setDouble(1, speed.getXSpeed());
        pstmt->setDouble(2, speed.getYSpeed());
        pstmt->executeUpdate();

        // Sleep for random time
        randomSleep.sleep();
    }

    delete pstmt;
    delete con;

    return 0;
}