//
// Created by eddi on 23. 12. 15.
//

#ifndef TEST_APP_PRODUCT_H
#define TEST_APP_PRODUCT_H
#ifdef __cplusplus
extern "C" {
#endif
typedef struct _product product;
struct _product {
    int product_id;
    double price;
    char productName[100];
    char description[500];
};
void setproduct(product *product1, int id, double price, const char *name, const char *desc);
void printProduct(product *product1);
#ifdef __cplusplus
}
#endif
#endif //TEST_APP_PRODUCT_H
