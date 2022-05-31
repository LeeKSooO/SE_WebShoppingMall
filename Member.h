#pragma once
#include <iostream>
#include "Product.h"

class Member {
private:
	ProductCollection productCollection;	// Member class에서 productCollection의 주소 가짐.
	Product* product;			// Member class에서 product의 주소 가짐.

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