//
// Created by eddi on 23. 12. 15.
//
#include "DatabaseConnection.h"

DatabaseConnection::DatabaseConnection() {
    driver = sql::mysql::get_mysql_driver_instance();
    con = driver->connect("tcp://127.0.0.1:3306", "user", "password");
}

DatabaseConnection& DatabaseConnection::getInstance() {
    static DatabaseConnection instance;
    return instance;
}

sql::Connection* DatabaseConnection::getConnection() {
    return con;
}