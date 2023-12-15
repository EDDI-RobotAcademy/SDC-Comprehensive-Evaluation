//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_DBPROCESS_H
#define COMP12_DBPROCESS_H


#include <mysql/mysql.h>
#include <string>

class DbProcess {
public:
    DbProcess(const char* host, const char* user, const char* pass, const char* dbName);
    ~DbProcess();

    static DbProcess* getInstance(const char* host, const char* user, const char* pass, const char* dbName);
    static DbProcess* getInstance();

    bool connect();
    bool insertData(const std::string& queryString);

private:
    static DbProcess* instance;

    MYSQL* conn;
    const char* DB_HOST;
    const char* DB_USER;
    const char* DB_PASS;
    const char* DB_NAME;
};


#endif //COMP12_DBPROCESS_H
