#ifndef __PRODUCT_H__
#define __PRODUCT_H__

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _product_struct product_struct;
struct _product_struct {
    int id;           // 고유번호
    double price;     // 가격
    char name;        // 상품명
    char description; // 상품 상세 설명
};

product_struct *createProduct(int id, double price, const char* name, const char* description);

#ifdef __cplusplus
}
#endif

#endif