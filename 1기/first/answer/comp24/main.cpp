#include <iostream>

#include "product/entity/product.h"

int main() {
    product *product_object = init_product_object(3000, "떡볶이", "정말 맜있어요!");

    if (product_object) {
        print_product_info(product_object);
        clear_product_object(product_object);
    }

    return 0;
}
