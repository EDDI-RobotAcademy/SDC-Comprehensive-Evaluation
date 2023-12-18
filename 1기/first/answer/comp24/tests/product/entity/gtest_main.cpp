#include <gtest/gtest.h>

#include "../../../product/entity/product.h"

TEST(product_entity, create_product_entity)
{
    product *product_object = init_product_object(1500, "슈크림 붕어빵", "맜있다");

    EXPECT_NE(product_object, nullptr);

    clear_product_object(product_object);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
