//
// Created by eddi on 23. 12. 15.
//
#include "Product.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int product_unique_id;

int increment_unique_id(void)
{
    return product_unique_id++;
}

product *init_product_object(unsigned int price, char *name, char *detail)
{
    product *tmp_product = (product *) malloc(sizeof (product));
    int name_length = strlen(name) +1;
    int detail_length = strlen(detail)+1;

    tmp_product->id = increment_unique_id();

    tmp_product->price = price;

    tmp_product->name = (char *)malloc(sizeof(char) * name_length);
    strncpy(tmp_product->name, name, name_length);

    tmp_product->detail = (char *)malloc(sizeof(char) * detail_length);
    strncpy(tmp_product->detail, detail, detail_length);

    return tmp_product;
}

