#include <stdio.h>
#include "entity/product/product.h"

int main() {
    // Product 생성 및 초기화
    struct Product product1 = createProduct(1, 29.99, "Smartphone", "갤럭시A");
    struct Product product2 = createProduct(2, 399.99, "Iphone", "그저 비싼폰.");

    // Product 정보 출력
    printf("Product 1:\n");
    printProduct(&product1);

    printf("Product 2:\n");
    printProduct(&product2);

    return 0;
}
