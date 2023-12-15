//
// Created by eddi on 23. 12. 15.
//

#include "DbProcess.h"

DbProcess::DbProcess(const char *_host, const char *_user, const char *_pass, const char *_dbName)
        : conn(nullptr), DB_HOST(_host), DB_USER(_user), DB_PASS(_pass), DB_NAME(_dbName) {}

DbProcess::~DbProcess() {
    if(conn != nullptr) {
        mysql_close(conn);
    }
}

DbProcess *DbProcess::getInstance(const char *_host, const char *_user, const char *_pass, const char *_dbName) {
    if (instance == nullptr) {
        instance = new DbProcess(_host, _user, _pass, _dbName);
    }
    return instance;
}

DbProcess *DbProcess::getInstance() {
    return instance;
}

bool DbProcess::connect() {
    conn = mysql_init(nullptr);
    return (mysql_real_connect(conn, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, nullptr, 0) != nullptr);
}
