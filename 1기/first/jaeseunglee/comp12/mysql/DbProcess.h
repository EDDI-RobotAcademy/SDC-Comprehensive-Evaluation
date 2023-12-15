//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_DBPROCESS_H
#define COMP12_DBPROCESS_H

#include <mysql/mysql.h>
#include <string>
#include <optional>
#include <memory>

class DbProcess {
private:
    DbProcess(const char* _host, const char* _user, const char* _pass, const char* _dbName);
    static DbProcess* instance;

    MYSQL* conn;
    const char* DB_HOST;
    const char* DB_USER;
    const char* DB_PASS;
    const char* DB_NAME;
public:
    ~DbProcess();
    static DbProcess* getInstance(const char* _host, const char* _user, const char* _pass, const char* _dbName);
    static DbProcess* getInstance();

    bool connect();

};


#endif //COMP12_DBPROCESS_H
