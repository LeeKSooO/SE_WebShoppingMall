#pragma once
#include <iostream>
#include <string>
#include "../entities/Member.h"
#include "../entities/Product.h"
#include "../comm.h"
using namespace std;
class PurchaseProductUI
{
private:
public:
	void startInterface(Product **wholeProductArr);
	void purchaseProduct(Member **wholeMemberArr, Product **wholeProductArr, Order **wholeOrderArr);
};

//���߿� ���� ����
void PurchaseProductUI::purchaseProduct(Member **wholeMemberArr, Product **wholeProductArr, Order **wholeOrderArr)
{
	Member *member = wholeMemberArr[wholeMemIndex];
	wholeMemberArr[wholeMemIndex]->inputOrderInfo(wholeProductArr, wholeOrderArr);
}

void PurchaseProductUI::startInterface(Product **wholeProductArr)
{
	ofstream fout("C:\\Users\\rtrt0\\OneDrive\\���� ȭ��\\textfile\\output.txt", ios::app);
	fout << "4.2. ��ǰ ����\n";
	fout << "> " << wholeProductArr[searchPoint]->getSellerId() << " " << wholeProductArr[searchPoint]->getProductName() << endl;

	//----------output check----------
	cout << "4.2. ��ǰ ����\n";
	cout << "> " << wholeProductArr[searchPoint]->getSellerId() << " " << wholeProductArr[searchPoint]->getProductName() << endl;
}
