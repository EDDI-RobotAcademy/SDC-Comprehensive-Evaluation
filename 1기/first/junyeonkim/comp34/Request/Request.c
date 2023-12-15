//
// Created by eddi on 23. 12. 15.
//

#include "Request.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

Request* createRequest(int id, const char* data) {
    Request* req = (Request*)malloc(sizeof(Request));
    req->id = id;
    req->data = (char*)malloc(strlen(data) + 1);
    strcpy(req->data, data);
    return req;
}

void sendRequest(Request* req) {
    // Here you can send your request
    printf("Sending request with id: %d and data: %s\n", req->id, req->data);
}

void freeRequest(Request* req) {
    free(req->data);
    free(req);
}