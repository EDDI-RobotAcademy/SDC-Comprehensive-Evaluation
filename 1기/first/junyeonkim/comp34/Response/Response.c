//
// Created by eddi on 23. 12. 15.
//

#include "Response.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

Response* createResponse(int status, const char* message) {
    Response* res = (Response*)malloc(sizeof(Response));
    res->status = status;
    res->message = (char*)malloc(strlen(message) + 1);
    strcpy(res->message, message);
    return res;
}

void sendResponse(Response* res) {
    // Sends the response
    printf("Sending response with status: %d and message: %s
           ", res->status, res->message);
}

void freeResponse(Response* res) {
    free(res->message);
    free(res);
}