#include <gtest/gtest.h>

#include <stdio.h>

#include "../../../entity/product.h"

TEST(testClass, testMethod)
{
    extern int uid;
    product *test_product;
    const char* name = "붕어싸만코";
    const char* description = "오리지널이 최고임";
    test_product = init_product(1, 3000,name, description);

    EXPECT_NE(test_product, nullptr);
}