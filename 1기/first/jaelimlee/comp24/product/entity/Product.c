#include "Product.h"

product_struct *createProduct(int id, double price, const char* name, const char* description)
{
    product_struct *tmp_struct = (product_struct *)malloc(sizeof(product_struct));

    tmp_struct->id = id;
    tmp_struct->price = price;
    tmp_struct->name = *name;
    tmp_struct->description = *description;

    return tmp_struct;
}