//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_DATABASECONNECTION_H
#define COMP12_DATABASECONNECTION_H

#include <mysql_driver.h>
#include <mysql_connection.h>

class DatabaseConnection {
private:
    sql::mysql::MySQL_Driver *driver;
    sql::Connection *con;
    DatabaseConnection();

public:
    DatabaseConnection(DatabaseConnection const&) = delete;
    void operator=(DatabaseConnection const&) = delete;
    static DatabaseConnection& getInstance();
    sql::Connection* getConnection();
};
#endif //COMP12_DATABASECONNECTION_H
