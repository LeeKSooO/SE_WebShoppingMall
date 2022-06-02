#pragma once
#include <iostream>
#include <string>
#include "../entities/Member.h"
#include "../entities/Product.h"
#include "../comm.h"
using namespace std;

class AddProductUI {
private:
	string sellerId;
public:
	void registerProduct(Member** wholeMemberArr, Product** wholeProductArr, string sellerId, string pName, string cName, int money, int num) {
		
		wholeMemberArr[wholeMemIndex]->registerProductInfo(wholeProductArr, sellerId, pName, cName, money, num);
	}

	void startInterface(Product** wholeProductArr) {
		ofstream fout("output.txt", ios::app);
		fout << "3.1 판매 의류 등록\n";
		fout << "> " << wholeProductArr[wholeProductNum]->getProductName() << " " << wholeProductArr[wholeProductNum]->getCompanyName()
			<< " " << wholeProductArr[wholeProductNum]->getPrice() << " " << wholeProductArr[wholeProductNum]->getSalesNum() << endl;
		fout.close();
	}
};