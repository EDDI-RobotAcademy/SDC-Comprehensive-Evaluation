//
// Created by eddi on 23. 12. 15.
//

#ifndef ANSWER_DBPROCESS_H
#define ANSWER_DBPROCESS_H

#include <mysql/mysql.h>

class DbProcess {

private:
    static DbProcess* instance;

    MYSQL* conn;
    const char* DB_HOST;
    const char* DB_USER;
    const char* DB_PASS;
    const char* DB_NAME;

public:
    DbProcess(const char* host, const char* user, const char* pass, const char* dbName);
    ~DbProcess();

    static DbProcess* getInstance(const char* host, const char* user, const char* pass, const char* dbName);

};


#endif //ANSWER_DBPROCESS_H
