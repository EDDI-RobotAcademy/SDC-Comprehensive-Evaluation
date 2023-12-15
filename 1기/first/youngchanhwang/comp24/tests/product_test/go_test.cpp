//
// Created by eddi on 23. 12. 15.
//
#include <gtest/gtest.h>

#include "../../entity/Product.h"


TEST(product_test_go, 테스트)
{
    int price = 9000;
    char name[32] = "상품명";
    char detail[128] = "좋은상품이다.";

    product *test_product;

    test_product = init_product_object(price, name, detail);

    EXPECT_NE(test_product, nullptr);
}