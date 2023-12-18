//
// Created by eddi on 23. 12. 15.
//

#ifndef RESPONSE_H
#define RESPONSE_H

typedef struct {
    int status;
    char* message;
} Response;

Response* createResponse(int status, const char* message);
void sendResponse(Response* res);
void freeResponse(Response* res);

#endif