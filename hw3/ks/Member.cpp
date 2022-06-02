#include <iostream>
#include <fstream>
#include "Member.h"
using namespace std;

Member::Member(string newMemberName, string newResidentRegistrationNum, string newMemberId, string newMemberPw)
{
	numSoldProducts = 0;
	memberId = newMemberId;
	memberPw = newMemberPw;
	memberName = newMemberName;
	residentRegistrationNum = newResidentRegistrationNum;
//	string recipientName;	
//	string deliveryAddress;
//	string contactInformation;
//	string productId;

//	ProductCollection* p = new ProductCollection();
//	productCollection = p;
//	OrderCollection* o = new OrderCollection();
//	orderCollection = o;
}
string Member::getMemberId() { return memberId; }
string Member::getMemberName() { return memberName; }
string Member::getMemberRrn() { return residentRegistrationNum; }
string Member::getMemberPw() { return memberPw; }
int Member::getNumSoldProducts() { return numSoldProducts; }

//맴버 class 디폴트 주문 정보
string Member::getRecipientName() { return this->recipientName; }
string Member::getDeliveryAddress() { return this->deriveryAddress; }
string Member::getContactInformatin() { return this->contactInformation; }

//ProductCollection* Member::getProductCollection() { return productCollection; }
//OrderCollection* Member::getOrderCollection() { return orderCollection; }

void Member::registerProductInfo(Product** wholeProductArr, string sellerId, string productName, string companyName, int price, int salesNum) {
	productCollection.addProduct(wholeProductArr, sellerId, productName, companyName, price, salesNum);
}

void Member::inputOrderInfo(Product** wholeProductArr, Order** wholeOrderArr, string productId, string recipientName, string deriveryAddress, string contactInformation) {
	orderCollection.addOrder(wholeProductArr, wholeOrderArr, productId, recipientName, deriveryAddress, contactInformation);
}


void Member::listProductsOnSale() {
	Product* head = productCollection.findFirst();
	Product* cur = productCollection.getCur();
	ofstream fout("C:\\Users\\rtrt0\\OneDrive\\바탕 화면\\textfile\\output.txt", ios::app);
	if (head == NULL) { fout << "ProductCollection is empty." << endl; return; }

	fout << "3.2. 등록 상품 조회- - - - - - - -" << endl;
	fout << ">  " << endl;
	cur = head;

	fout << "상품명 : " << cur->getProductName() << endl;
	fout << "제작회사명 : " << cur->getCompanyName() << endl;
	fout << "가격 : " << cur->getPrice() << endl;
	fout << "판매 수량 : " << cur->getSalesNum() << endl;
	fout << "- - - - - - - - - - - - - - - - - - -" << endl;

	while (cur->getNext() != NULL) {
		cur = cur->getNext();

		fout << "상품명 : " << cur->getProductName() << endl;
		fout << "제작회사명 : " << cur->getCompanyName() << endl;
		fout << "가격 : " << cur->getPrice() << endl;
		fout << "판매 수량 : " << cur->getSalesNum() << endl;

		fout << "- - - - - - - - - - - - - - - - - - -" << endl;
	}

	//----------output check----------//
	head = productCollection.findFirst();
	cur = productCollection.getCur();
	if (head == NULL) { cout << "ProductCollection is empty." << endl; return; }

	cout << "3.2. 등록 상품 조회 - - - - - - - - -" << endl;
	cout << ">  " << endl;
	cur = head;

	cout << "상품명 : " << cur->getProductName() << endl;
	cout << "제작회사명 : " << cur->getCompanyName() << endl;
	cout << "가격 : " << cur->getPrice() << endl;
	cout << "판매 수량 : " << cur->getSalesNum() << endl;
	cout << "- - - - - - - - - - - - - - - - - - -" << endl;

	while (cur->getNext() != NULL) {
		cur = cur->getNext();

		cout << "상품명 : " << cur->getProductName() << endl;
		cout << "제작회사명 : " << cur->getCompanyName() << endl;
		cout << "가격 : " << cur->getPrice() << endl;
		cout << "판매 수량 : " << cur->getSalesNum() << endl;

		cout << "- - - - - - - - - - - - - - - - - - -" << endl;
	}
}