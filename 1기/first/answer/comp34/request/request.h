//
// Created by eddi on 23. 12. 14.
//

#ifndef COMP35_REQUEST_H
#define COMP35_REQUEST_H

#include "../response/response.h"

typedef struct _request request;
struct _request
{
    int number;
};

typedef request *(* request_constructor)(int);
typedef void (* request_destructor)(request *);



request *init_request_object(int number);
void clear_request_object(request *);
int get_request_number(request *);

#endif //COMP35_REQUEST_H
