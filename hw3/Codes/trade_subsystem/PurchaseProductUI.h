#pragma once
#include "../entities/Member.h"
#include "../comm.h"

class PurchaseProductUI {
private:
public:
	void startInterface(Product ** wholeProductArr);	
	void purchaseProduct(Member** wholeMemberArr, Product** wholeProductArr, Order** wholeOrderArr);
};

//나중에 수정 고려
void PurchaseProductUI::purchaseProduct(Member** wholeMemberArr, Product** wholeProductArr, Order** wholeOrderArr) {
	
	string productId = wholeProductArr[searchPoint]->getProductId();
	string recipientName = wholeMemberArr[wholeMemIndex]->getRecipientName(); 
	string deliveryAddress = wholeMemberArr[wholeMemIndex]->getDeliveryAddress(); 
	string contactInformation = wholeMemberArr[wholeMemIndex]->getContactInformatin(); 
	Member * member = member = wholeMemberArr[wholeMemIndex];
	wholeMemberArr[wholeMemIndex]->inputOrderInfo(wholeProductArr, wholeOrderArr, productId, recipientName, deliveryAddress, contactInformation);
}

void PurchaseProductUI::startInterface(Product** wholeProductArr) {
	ofstream fout("C:\\Users\\rtrt0\\OneDrive\\바탕 화면\\textfile\\output.txt", ios::app);
	fout << "4.2. 상품 구매\n";
	fout << "> " << wholeProductArr[searchPoint]->getSellerId() << " " << wholeProductArr[searchPoint]->getProductName() << endl;

	//----------output check----------
	cout << "4.2. 상품 구매\n";
	cout << "> " << wholeProductArr[searchPoint]->getSellerId() << " " << wholeProductArr[searchPoint]->getProductName() << endl;
}
