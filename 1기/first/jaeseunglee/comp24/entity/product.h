//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP24_PRODUCT_H
#define COMP24_PRODUCT_H

typedef struct _product product;

struct _product
{
    int unique_id;
    int price;
    const char* product_name;
    const char* product_description;
};



product *init_product(int, int, const char*,const char*);


#endif //COMP24_PRODUCT_H
