//
// Created by eddi on 23. 12. 14.
//

#ifndef COMP35_RESPONSE_H
#define COMP35_RESPONSE_H

typedef struct _response response;
struct _response
{
    int number;
};

typedef response *(* response_constructor)(int);
typedef void (* response_destructor)(response *);

typedef response_destructor (* process_response_type) (response *response_object);

void process_response(response_constructor, response_destructor, int number);

response *init_response_object(int number);
void clear_response_object(response *);
int get_response_number(response *);

#endif //COMP35_RESPONSE_H
