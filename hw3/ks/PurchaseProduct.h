#pragma once
#include "Member.h"
#include "Product.h"
#include "comm.h"
#include "PurchaseProductUI.h"

//검색 후 즉시 구매
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

	void requestOrder(Member **wholeMemberArr, Product** wholeProductArr, Order** wholeOrderArr);	//맴버, 상품, 주문 포인터배열주소
};

void PurchaseProduct::requestOrder(Member** wholeMemberArr, Product** wholeProductArr, Order** wholeOrderArr) {
	
	productId = wholeProductArr[searchPoint]->getProductId();
	recipientName = wholeMemberArr[wholeMemIndex]->getRecipientName(); 
	deliveryAddress = wholeMemberArr[wholeMemIndex]->getDeliveryAddress(); 
	contactInformation = wholeMemberArr[wholeMemIndex]->getContactInformatin(); 

	member->inputOrderInfo(wholeProductArr, wholeOrderArr, productId, recipientName, deliveryAddress , contactInformation);
}
