#include <gtest/gtest.h>

#include "../../entity/Product.h"

// 25번 정답
TEST(Product, initiationOfProductIsPossible)
{
    int sample_uid = 1;
    unsigned int sample_price = 10000;
    auto sample_name = "플스";
    auto sample_info = "이것은 게임기입니다.";

    Product *sample_product = init_product_object(sample_uid, sample_price, sample_name, sample_info);

    EXPECT_NE(sample_product, nullptr);

    delete sample_product;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
