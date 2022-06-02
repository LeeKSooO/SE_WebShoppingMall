#pragma once
#include "../entities/Product.h"

class ProductCollection {
private:
	Product* head;
	Product* cur;
public:
	ProductCollection();
	Product* findFirst();	// first node의 head포인터 반환
	Product* getCur();		// cur 반환
	void getProducts();	// 등록 상품 정보
	void addProduct(Product** wholeProductArr, string sellerId, string pName, string cName, int money, int num);
};