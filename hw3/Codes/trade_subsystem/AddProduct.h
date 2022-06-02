#pragma once
#include <iostream>
#include <string>
#include "AddProductUI.h"
#include "../entities/Member.h"
#include "../entities/Product.h"
#include "../comm.h"
using namespace std;

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