//
// Created by eddi on 23. 12. 15.
//

#ifndef GOGO_PRODUCT_H
#define GOGO_PRODUCT_H

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_USER_LENGTH         32
#define MAX_DETAILED_LENGTH        32

typedef struct _product product;

struct _product
{
    unsigned int unique_number;
    unsigned int price;
    char* product_name;
    char* detailed_product_description;
};

product *init_product_object(unsigned int unique_number,unsigned int price, char* product_name, char* detailed_product_description);

#ifdef __cplusplus
}
#endif

#endif //GOGO_PRODUCT_H
