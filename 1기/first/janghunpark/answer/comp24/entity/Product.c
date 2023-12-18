//
// Created by eddi on 23. 12. 15.
//

#include "Product.h"

#include <stdlib.h>

Product *init_product_object(int id, unsigned int cost, const char *name, const char *info) {
    Product *tmp_product = (Product *)malloc(sizeof(Product));
    tmp_product->unique_id = id;
    tmp_product->price = cost;
    tmp_product->product_name = name;
    tmp_product->product_information = info;
    return tmp_product;
}