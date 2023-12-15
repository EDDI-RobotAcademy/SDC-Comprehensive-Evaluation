//
// Created by eddi on 23. 12. 15.
//
#include <gtest/gtest.h>
#include "../../product/product.h"

TEST(fuckgtest,gtest)
{
    char name[MAX_USER_LENGTH] = "사진기";
    char detailied[MAX_DETAILED_LENGTH] = "사진찍기";
    unsigned int unique_number = 4;
    unsigned int price = 15000;

    product *test_object;

    test_object = init_product_object(unique_number,price,name,detailied);

    EXPECT_NE(test_object, nullptr);
}
