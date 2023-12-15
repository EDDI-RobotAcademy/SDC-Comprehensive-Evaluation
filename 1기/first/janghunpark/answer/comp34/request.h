//
// Created by eddi on 23. 12. 15.
//

#ifndef ANSWER_REQUEST_H
#define ANSWER_REQUEST_H

typedef struct _request request;

struct _request {
    int num1;
    int num2;
};

request *init_request_object(int a, int b);

#endif //ANSWER_REQUEST_H
