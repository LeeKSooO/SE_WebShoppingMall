#pragma once
#include "../entities/Product.h"

class ProductCollection {
private:
	Product* head;
	Product* cur;
public:
	ProductCollection();
	Product* findFirst();	// first node�� head������ ��ȯ
	Product* getCur();		// cur ��ȯ
	void getProducts();	// ��� ��ǰ ����
	void addProduct(Product** wholeProductArr, string sellerId, string pName, string cName, int money, int num);
};