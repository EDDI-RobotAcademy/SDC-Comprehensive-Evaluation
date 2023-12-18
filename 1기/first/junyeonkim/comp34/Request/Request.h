//
// Created by eddi on 23. 12. 15.
//

#ifndef REQUEST_H
#define REQUEST_H

typedef struct {
    int id;
    char* data;
} Request;

Request* createRequest(int id, const char* data);
void sendRequest(Request* req);
void freeRequest(Request* req);

#endif