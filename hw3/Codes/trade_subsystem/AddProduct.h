#pragma once
#include "AddProductUI.h"
#include "../comm.h"

class AddProductUI;

class AddProduct {
private:
	Member* member;
	string productName;
	string companyName;
	string sellerId;
	int price;
	int salesNum;
public:
	AddProduct(Member** wholeMemberArr, Product** wholeProductArr, string pName, string cName, int money, int num)
	{
		sellerId = wholeMemberArr[wholeMemIndex]->getMemberId();
		AddProductUI* ui = new AddProductUI();
		ui->registerProduct(wholeMemberArr, wholeProductArr, sellerId, pName, cName, money, num);
		ui->startInterface(wholeProductArr);
	}
	void inputProductInfo(Member** wholeMemberArr, Product** wholeProductArr, string productName, string companyName, int price, int salesNum);
};

void AddProduct::inputProductInfo(Member** wholeMemberArr, Product** wholeProductArr, string productName, string companyName, int price, int salesNum) {
	member->registerProductInfo(wholeProductArr, sellerId, productName, companyName, price, salesNum);
}