#pragma once
#include <iostream>
#include "Product.h"

class Member {
private:
	ProductCollection productCollection;	// Member class���� productCollection�� �ּ� ����.
	Product* product;			// Member class���� product�� �ּ� ����.

	string memberName;
	int residentRegistrationNum;
	int memberId;
	int memberPw;
	int productOnSale;
	int soldProducts;
	int orders;

public:
	void registerProductInfo(string productName, string companyName, int price, int salesNum);
	void listProductsOnSale();
};