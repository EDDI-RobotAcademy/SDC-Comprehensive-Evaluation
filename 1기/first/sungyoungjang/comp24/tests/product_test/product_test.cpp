#include <gtest/gtest.h>

#include <stdio.h>

#include "../../entity/product/product.h"

TEST(ProductTest, CreateAndPrintProduct) {
    struct Product product = createProduct(1, 29.99, "갤럭", "효자폰");

    testing::internal::CaptureStdout();
    printProduct(&product);

    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Product ID: 1\nPrice: 29.99\nProduct Name: 갤럭시\nDescription: 2년짜리 효자폰.\n\n");
}