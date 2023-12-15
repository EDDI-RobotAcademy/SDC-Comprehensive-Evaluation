//
// Created by eddi on 23. 12. 15.
//
#include "product.h"

#include <stdlib.h>
#include <string.h>

product *init_product_object(unsigned int unique_number,unsigned int price, char* product_name, char* detailed_product_description)
{
    int name_length, detailed_length;

    name_length = strlen(product_name) + 1;
    detailed_length = strlen(detailed_product_description) + 1;

    if (name_length == 0) { return NULL; }

    if (detailed_length == 0) { return NULL; }

    product *tmp_product = (product*)malloc(sizeof(product));

    tmp_product->product_name = (char*) malloc(sizeof(char) * name_length);
    tmp_product->detailed_product_description = (char*) malloc(sizeof(char) * detailed_length);
    tmp_product->unique_number = unique_number;
    tmp_product->price = price;

    strncpy(tmp_product->product_name, product_name, name_length);
    strncpy(tmp_product->detailed_product_description, detailed_product_description, detailed_length);

    return tmp_product;
}