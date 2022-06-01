#pragma once
#include "Product.h"

class Member {
private:
	ProductCollection productCollection;	
	Product* product;			

	string memberName;
	string residentRegistrationNum;
	string memberId;
	string memberPw;
	int productOnSale;
	int soldProducts;
	int orders;

public:
	Member(string name, string residentNum, string id, string pw) {
		memberName = name;
		residentRegistrationNum = residentNum;
		memberId = id;
		memberPw = pw;
	}
	void registerProductInfo(Product** wholeProductArr,string productName, string companyName, int price, int salesNum);
	void listProductsOnSale();
};