//
// Created by eddi on 23. 12. 14.
//

#include "request.h"

#include <stdlib.h>

request *init_request_object(int number)
{
    request *tmp = (request *) malloc(sizeof(request));
    tmp->number = number;

    return tmp;
}

void clear_request_object(request *request_object)
{
    free(request_object);
}

int get_request_number(request *object)
{
    return object->number;
}