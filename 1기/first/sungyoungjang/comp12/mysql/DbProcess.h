////
//// Created by eddi on 23. 12. 15.
////
//
//#ifndef COMP12_DBPROCESS_H
//#define COMP12_DBPROCESS_H
//
//
//#include <mysql/mysql.h>
//#include <string>
//#include <optional>
//#include <memory>
//
//class DbProcess {
//public:
//    static DbProcess* getInstance(const char* host, const char* user, const char* pass, const char* dbName);
//
//    bool connect();
//    bool insertData(const std::string& queryString);
//
//    MYSQL* getConn();
//
//private:
//    static DbProcess* instance;
//
//    MYSQL* conn;
//    const char* DB_HOST;
//    const char* DB_USER;
//    const char* DB_PASS;
//    const char* DB_NAME;
//
//    DbProcess(const char* host, const char* user, const char* pass, const char* dbName);
//    ~DbProcess();
//
//    void createTable();
//
//};
//
//
//
//#endif //COMP12_DBPROCESS_H
