#ifndef __RESPONSE_H__
#define __RESPONSE_H__

typedef struct _board_service_create_response board_service_create_response;

struct _board_service_create_response
{
    unsigned int id;
    char *title;
    char *writer;
    char *content;
};

board_service_create_response *init_board_service_create_response(
    unsigned int, char *title, char *writer, char *content);

char *get_board_service_create_response_title(board_service_create_response *);
char *get_board_service_create_response_writer(board_service_create_response *);
char *get_board_service_create_response_content(board_service_create_response *);

void clear_board_service_create_response(board_service_create_response *);

void print_board_service_response(board_service_create_response *);

#endif