#include "Request/Request.h"
#include "Response/Response.h"

int main() {
    Request* req = createRequest(1, "Hello, World!");
    sendRequest(req);
    freeRequest(req);

    Response* res = createResponse(200, "OK");
    sendResponse(res);
    freeResponse(res);
    return 0;
}
