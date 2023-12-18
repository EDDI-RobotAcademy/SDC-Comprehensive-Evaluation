#include "request/request.h"
#include "response/response.h"

#include <stdio.h>

void request_response_manager_object(int number,
                                     request_constructor request_constructor,
                                     request_destructor request_destructor,
                                     response_constructor response_constructor,
                                     response_destructor response_destructor)
{
    request *request_object = request_constructor(number);
    // request 관련 작업
    printf("get request number: %d\n", get_request_number(request_object));

    process_response(response_constructor, response_destructor, get_request_number(request_object));
    request_destructor(request_object);
}

#define REQUEST_RESPONSE_MANAGER(number)    \
    request_response_manager_object(        \
        number,                             \
        init_request_object,                \
        clear_request_object,               \
        init_response_object,               \
        clear_response_object)

int main (void)
{
    // valgrind --leak-check=yes ./comp34
    REQUEST_RESPONSE_MANAGER(3);

    return 0;
}
