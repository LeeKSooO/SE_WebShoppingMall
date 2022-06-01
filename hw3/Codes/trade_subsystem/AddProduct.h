#pragma once
#include "AddProductUI.h"

class AddProductUI;

class AddProduct {
private:
	Member* member;
	string productName;
	string companyName;
	int price;
	int salesNum;
public:
	AddProduct(Product** wholeProductArr, string pName, string cName, int money, int num)
	{
		AddProductUI *ui = new AddProductUI(); 
		ui->registerProduct(wholeProductArr, pName, cName, money, num);
	}
	void inputProductInfo(Product** wholeProductArr, string productName, string companyName, int price, int salesNum);
};

void AddProduct::inputProductInfo(Product **wholeProductArr, string productName, string companyName, int price, int salesNum) {
	member->registerProductInfo(wholeProductArr, productName, companyName, price, salesNum);
}