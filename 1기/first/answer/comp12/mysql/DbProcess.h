//
// Created by eddi on 23. 11. 29.
//

#ifndef CPP_TEST_DBPROCESS_H
#define CPP_TEST_DBPROCESS_H

#include <mysql/mysql.h>
#include <string>
#include <optional>
#include <memory>
#include <list>
#include "../velocity/entity/Velocity2d.h"

class DbProcess {
public:
    DbProcess(const char* host, const char* user, const char* pass, const char* dbName);
    ~DbProcess();

    static DbProcess& getInstance(const char* host, const char* user, const char* pass, const char* dbName);
    static DbProcess& getInstance();

    bool connect();
    bool insertData(const Velocity2d& velocity);
    std::list<Velocity2d> findAll();

    bool executeQuery(const std::string& query);
    bool deleteAll(const char* tableName);

    MYSQL *getConn();

private:
    static std::unique_ptr<DbProcess> instance;

    MYSQL* conn;
    const char* DB_HOST;
    const char* DB_USER;
    const char* DB_PASS;
    const char* DB_NAME;
};


#endif //CPP_TEST_DBPROCESS_H
