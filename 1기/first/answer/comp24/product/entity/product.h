//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP24_PRODUCT_H
#define COMP24_PRODUCT_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _product product;
struct _product {
    unsigned int id;
    int price;
    char *name;
    char *product_details;
};

product *init_product_object(int, char *, char *);
void print_product_info(const product *);
void clear_product_object(product *);

#ifdef __cplusplus
}
#endif

#endif //COMP24_PRODUCT_H
