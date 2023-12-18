//
// Created by eddi on 23. 12. 15.
//

#ifndef ANSWER_RESPONSE_H
#define ANSWER_RESPONSE_H

#include "request.h"

typedef struct _response response;

struct _response {
    int sum;
};

response *init_response_object_with_request(request *);
void free_response_memory_after_print(response *);

#endif //ANSWER_RESPONSE_H
