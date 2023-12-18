//
// Created by eddi on 23. 12. 15.
//

#include <stdio.h>
#include <stdlib.h>

#include "response.h"

response *init_response_object_with_request(request *sample) {
    response *tmp_response = (response *) malloc(sizeof(response));
    tmp_response->sum = sample->num1 + sample->num2;
    return tmp_response;
}

void free_response_memory_after_print(response *res) {
    printf("sum = %d\n", res->sum);
    free(res);
}