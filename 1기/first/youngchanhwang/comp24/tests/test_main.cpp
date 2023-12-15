#include <gtest/gtest.h>

#include "../entity/Product.h"

TEST(producttestgo, test)
{
    unsigned int price = 9000;
    char name[32] = "상품명";
    char detail[128] = "좋은상품이다.";

    product *test_product;

    test_product = init_product_object(price, name, detail);

    EXPECT_NE(test_product, nullptr);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
