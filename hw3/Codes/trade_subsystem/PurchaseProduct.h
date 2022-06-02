#pragma once
#include <iostream>
#include <string>
#include "../entities/Member.h"
#include "../entities/Product.h"
#include "../comm.h"
#include "PurchaseProductUI.h"
using namespace std;
class PurchaseProduct
{
private:
	Member *member;
	string recipientName;
	string deliveryAddress;
	string contactInformation;

public:
	PurchaseProduct(Member **wholeMemberArr, Product **wholeProductArr, Order **wholeOrderArr)
	{
		PurchaseProductUI *ui = new PurchaseProductUI();
		ui->purchaseProduct(wholeMemberArr, wholeProductArr, wholeOrderArr);
		ui->startInterface(wholeProductArr);
	}

	void requestOrder(Member **wholeMemberArr, Product **wholeProductArr, Order **wholeOrderArr);
};

void PurchaseProduct::requestOrder(Member **wholeMemberArr, Product **wholeProductArr, Order **wholeOrderArr)
{

	member->inputOrderInfo(wholeProductArr, wholeOrderArr);
}
