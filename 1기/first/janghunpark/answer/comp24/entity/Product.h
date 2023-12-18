//
// Created by eddi on 23. 12. 15.
//

#ifndef ANSWER_PRODUCT_H
#define ANSWER_PRODUCT_H

typedef struct _Product Product;

struct _Product {
    int unique_id;
    unsigned int price;
    const char *product_name;
    const char *product_information;
};

Product *init_product_object(int, unsigned int, const char*, const char*);

#endif //ANSWER_PRODUCT_H
