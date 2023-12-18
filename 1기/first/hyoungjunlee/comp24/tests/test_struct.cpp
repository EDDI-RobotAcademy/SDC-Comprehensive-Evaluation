//
// Created by eddi on 23. 12. 15.
//
#include <gtest/gtest.h>
#include <stdio.h>
#include "../entity/product.h"
TEST(구조체테스트, 갚잘들어가나)
{
    int test=100;
    product product1;
    product1.price=100;
    //setproduct(&product1, 1, 90000, "리빵준", "테스"); 왜 product.h에 잘 있는 함수를 인식을 못하지....
    printf("출력되니?>%f\n",product1.price);
    EXPECT_EQ(100,test);
}