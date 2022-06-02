#pragma once
#include "../entities/Member.h"
#include "../entities/Product.h"
#include "../comm.h"
#include "PurchaseProductUI.h"

//�˻� �� ��� ����
class PurchaseProduct {
private:
	Member* member;
	string productId;
	string recipientName;
	string deliveryAddress;
	string contactInformation;

public:
	PurchaseProduct(Member** wholeMemberArr, Product** wholeProductArr ,Order**wholeOrderArr) {
		PurchaseProductUI* ui = new PurchaseProductUI();
		ui->purchaseProduct(wholeMemberArr, wholeProductArr, wholeOrderArr);
		ui->startInterface(wholeProductArr);
	}

	void requestOrder(Member **wholeMemberArr, Product** wholeProductArr, Order** wholeOrderArr);	//�ɹ�, ��ǰ, �ֹ� �����͹迭�ּ�
};

void PurchaseProduct::requestOrder(Member** wholeMemberArr, Product** wholeProductArr, Order** wholeOrderArr) {
	
	productId = wholeProductArr[searchPoint]->getProductId();
	recipientName = wholeMemberArr[wholeMemIndex]->getRecipientName(); 
	deliveryAddress = wholeMemberArr[wholeMemIndex]->getDeliveryAddress(); 
	contactInformation = wholeMemberArr[wholeMemIndex]->getContactInformatin(); 

	member->inputOrderInfo(wholeProductArr, wholeOrderArr, productId, recipientName, deliveryAddress , contactInformation);
}
