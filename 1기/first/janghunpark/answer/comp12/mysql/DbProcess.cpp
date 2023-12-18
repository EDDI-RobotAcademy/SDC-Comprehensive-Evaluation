//
// Created by eddi on 23. 12. 15.
//

#include "DbProcess.h"

DbProcess* DbProcess::instance = nullptr;

DbProcess::DbProcess(const char *host, const char *user, const char *pass, const char *dbName)
        : conn(nullptr), DB_HOST(host), DB_USER(user), DB_PASS(pass), DB_NAME(dbName) {}

DbProcess* DbProcess::getInstance(const char* host, const char* user, const char* pass, const char* dbName) {
    if (instance == nullptr) {
        instance = new DbProcess(host, user, pass, dbName);
    }
    return instance;
}