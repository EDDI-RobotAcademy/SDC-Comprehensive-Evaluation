//
// Created by eddi on 23. 12. 14.
//

#include "response.h"

#include <stdlib.h>
#include <stdio.h>

void process_response(response_constructor response_constructor,
                      response_destructor response_destructor,
                      int number)
{
    response *response_object = response_constructor(number);
    // response 관련 작업
    printf("get response number: %d\n", get_response_number(response_object));

    response_destructor(response_object);
}

response *init_response_object(int number)
{
    response *tmp = (response *) malloc(sizeof(response));
    tmp->number = number;

    return tmp;
}

void clear_response_object(response *response_object)
{
    free(response_object);
}

int get_response_number(response *object)
{
    return object->number;
}
