//
// Created by eddi on 23. 12. 15.
//

#include <malloc.h>
#include <string.h>

#include "product.h"

product *init_product_object(int price, char *name, char *product_details)
{
    int name_length, product_details_length;
    product *tmp = (product *)malloc(sizeof(product));

    name_length = strlen(name);
    product_details_length = strlen(product_details);

    tmp->name = (char *)malloc(sizeof(char) * name_length + 1);
    tmp->product_details = (char *)malloc(sizeof(char) * product_details_length + 1);

    tmp->price = price;

    strncpy(tmp->name, name, name_length);
    strncpy(tmp->product_details, product_details, product_details_length);

    return tmp;
}

void print_product_info(const product *object) {
    if (object == NULL) { return; }

    printf("Product ID: %u\n", object->id);
    printf("Product Name: %s\n", object->name);
    printf("Product Price: %d\n", object->price);
    printf("Product Details: %s\n", object->product_details);
}

void clear_product_object(product *object)
{
    free(object->name);
    free(object->product_details);

    free(object);
}
