//
// Created by eddi on 23. 12. 15.
//

#ifndef TEST_APP_PRODUCT_H
#define TEST_APP_PRODUCT_H

extern unsigned int product_unique_id;

typedef struct _product product;

struct _product
{
    unsigned int id;
    unsigned int price;
    char *name;
    char *detail;
};

product *init_product_object(unsigned int price, char *name, char *detail);

#endif //TEST_APP_PRODUCT_H
