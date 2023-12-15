//
// Created by eddi on 23. 12. 15.
//

#include "product.h"
#include "stdlib.h"

product *init_product(int _uid, int _price,const char* _product_name,const char* _product_description)
{
    product *result_product = (product *) malloc (sizeof(product));

    result_product->unique_id = _uid;
    result_product->price = _price;
    result_product->product_name = _product_name;
    result_product->product_description = _product_description;

    return result_product;
}