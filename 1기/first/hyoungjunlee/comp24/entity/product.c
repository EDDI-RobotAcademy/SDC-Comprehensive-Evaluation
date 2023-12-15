//
// Created by eddi on 23. 12. 15.
//
#include <stdio.h>
#include <string.h>
#include "product.h"

void setproduct(product *product1, int id, double price, const char *name, const char *desc) {
    product1->product_id = id;
    product1->price = price;
    strncpy(product1->productName, name, sizeof(product1->productName));
    product1->productName[sizeof(product1->productName) - 1] = '\0';  // 문자열 끝에 널 문자 추가
    strncpy(product1->description, desc, sizeof(product1->description));
    product1->description[sizeof(product1->description) - 1] = '\0';  // 문자열 끝에 널 문자 추가
}

// Product 정보를 출력하는 함수
void printProduct(product *product1) {
    printf("Product ID: %d\n", product1->product_id);
    printf("Price: %.2f\n", product1->price);
    printf("Product Name: %s\n", product1->productName);
    printf("Description: %s\n", product1->description);
}