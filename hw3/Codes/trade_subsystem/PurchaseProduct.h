#pragma once
#include "PurchaseProductUI.h"

class PurchaseProductUI;

class PurchaseProduct {
private:
	Member* member;
	string productId;
	string recipientName;
	string deliveryAddress;
	string contatcInformation;
public:
	PurchaseProduct(Order** wholeOrderArr, string id, string name, string address, string contact)
	{
		PurchaseProductUI* ui = new PurchaseProductUI();
		ui->purchaseProduct(wholeOrderArr, id, name, address, contact);
	}

	void inputBuyerInfo(Order** wholeOrderArr, string productId, string recipientName, string deliveryAddress, string contactinformation);
};

void PurchaseProduct::inputBuyerInfo(Order** wholeOrderArr, string productId, string recipientName, string deliveryAddress, string contactInformation)
{
	member->registerOrderInfo(wholeOrderArr, productId, recipientName, deliveryAddress, contactInformation);
}
