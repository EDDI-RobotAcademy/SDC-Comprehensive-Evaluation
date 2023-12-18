//
// Created by eddi on 23. 12. 15.
//

#include <stdlib.h>

#include "request.h"

request *init_request_object(int a, int b) {
    request *tmp_request = (request *) malloc(sizeof(request));
    tmp_request->num1 = a;
    tmp_request->num2 = b;
    return tmp_request;
}