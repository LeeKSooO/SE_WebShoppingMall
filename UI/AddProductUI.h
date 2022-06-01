#pragma once
#include <string>
#include "Member.h"
#include "Product.h"

class AddProductUI {
private:
public:
	void startInterface();
	void registerProduct(Product** wholeProductArr, string pName, string cName, int money, int num) {

		Member* newMember = new Member("kyoungsoo","1234","이경수","324234");
		newMember->registerProductInfo(wholeProductArr, pName, cName, money, num);

		cout << "3.1. 판매 의류 등록" << endl;
		cout << "> " << wholeProductArr[0]->getProductName() << " " << wholeProductArr[0]->getCompanyName() 
			<< " " << wholeProductArr[0]->getPrice() << " " << wholeProductArr[0]->getSalesNum() << endl << endl;
	}
};