#include "DbProcess.h"
#include <iostream>
#include <chrono>

std::unique_ptr<DbProcess> DbProcess::instance = nullptr;

DbProcess::DbProcess(const char* host, const char* user, const char* pass, const char* dbName)
        : conn(nullptr), DB_HOST(host), DB_USER(user), DB_PASS(pass), DB_NAME(dbName) {}

DbProcess::~DbProcess() {
    if (conn != nullptr) {
        std::cout << "mysql db 객체 정리" << std::endl;
        mysql_close(conn);
    }
}

DbProcess& DbProcess::getInstance(const char* host, const char* user, const char* pass, const char* dbName) {
    if (instance == nullptr) {
        instance = std::make_unique<DbProcess>(host, user, pass, dbName);
    }
    return *instance;
}

DbProcess& DbProcess::getInstance() {
    return *instance;
}

bool DbProcess::connect() {
    conn = mysql_init(nullptr);
    return (mysql_real_connect(conn, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, nullptr, 0) != nullptr);
}

//bool DbProcess::insertData(const Velocity2d& velocity) {
//    if (conn == nullptr) {
//        return false;
//    }
//
//    std::string queryString = "insert into velocity (x_coordinate, y_coordinate, registration_timestamp) values ("
//                              + std::to_string(velocity.getVelocity().getX()) + ", "
//                              + std::to_string(velocity.getVelocity().getY()) + ", NOW())"; // Assuming NOW() is MySQL function for current timestamp
//
//    if (mysql_query(conn, queryString.c_str()) != 0) {
//        return false;
//    }
//
//    return true;
//}
bool DbProcess::insertData(const Velocity2d& velocity) {
    if (conn == nullptr) {
        return false;
    }

    auto now = std::chrono::system_clock::now();
    auto now_us = std::chrono::time_point_cast<std::chrono::microseconds>(now);
    auto value = now_us.time_since_epoch();
    long long duration = std::chrono::duration_cast<std::chrono::microseconds>(value).count();

    std::string queryString = "INSERT INTO velocity (x_coordinate, y_coordinate, registration_datetime) VALUES ("
                              + std::to_string(velocity.getVelocity().getX()) + ", "
                              + std::to_string(velocity.getVelocity().getY()) + ", FROM_UNIXTIME("
                              + std::to_string(duration / 1000000) + "." + std::to_string(duration % 1000000) + "))";

    if (mysql_query(conn, queryString.c_str()) != 0) {
        std::cerr << "MySQL Error: " << mysql_error(conn) << std::endl;
        return false;
    }

    return true;
}


std::list<Velocity2d> DbProcess::findAll() {
    std::list<Velocity2d> result;

    if (conn == nullptr) {
        return result;
    }

    std::string queryString = "SELECT x_coordinate, y_coordinate, registration_datetime FROM velocity ORDER BY registration_datetime ASC";

    if (mysql_query(conn, queryString.c_str()) != 0) {
        return result;
    }

    MYSQL_RES* res = mysql_store_result(conn);

    if (res == nullptr) {
        return result;
    }

    int numFields = mysql_num_fields(res);

    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res)) != nullptr) {
        if (numFields >= 3 && row[0] != nullptr && row[1] != nullptr && row[2] != nullptr) {
            float x = std::stof(row[0]);
            float y = std::stof(row[1]);
            std::string timestamp = row[2];

            result.emplace_back(x, y, timestamp);
        }
    }

    mysql_free_result(res);

    return result;
}

bool DbProcess::executeQuery(const std::string& query) {
    if (!conn) {
        std::cerr << "Not connected to MySQL" << std::endl;
        return false;
    }

    if (mysql_query(conn, query.c_str()) != 0) {
        std::cerr << "Query execution failed: " << mysql_error(conn) << std::endl;
        return false;
    }

    return true;
}

bool DbProcess::deleteAll(const char* tableName) {
    std::string deleteQuery = "DELETE FROM ";
    deleteQuery += tableName;

    return executeQuery(deleteQuery);
}

MYSQL *DbProcess::getConn()
{
    return conn;
}
