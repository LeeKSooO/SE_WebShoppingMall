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

//�ɹ� class ����Ʈ �ֹ� ����
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
	ofstream fout("C:\\Users\\rtrt0\\OneDrive\\���� ȭ��\\textfile\\output.txt", ios::app);
	if (head == NULL) { fout << "ProductCollection is empty." << endl; return; }

	fout << "3.2. ��� ��ǰ ��ȸ- - - - - - - -" << endl;
	fout << ">  " << endl;
	cur = head;

	fout << "��ǰ�� : " << cur->getProductName() << endl;
	fout << "����ȸ��� : " << cur->getCompanyName() << endl;
	fout << "���� : " << cur->getPrice() << endl;
	fout << "�Ǹ� ���� : " << cur->getSalesNum() << endl;
	fout << "- - - - - - - - - - - - - - - - - - -" << endl;

	while (cur->getNext() != NULL) {
		cur = cur->getNext();

		fout << "��ǰ�� : " << cur->getProductName() << endl;
		fout << "����ȸ��� : " << cur->getCompanyName() << endl;
		fout << "���� : " << cur->getPrice() << endl;
		fout << "�Ǹ� ���� : " << cur->getSalesNum() << endl;

		fout << "- - - - - - - - - - - - - - - - - - -" << endl;
	}

	//----------output check----------//
	head = productCollection.findFirst();
	cur = productCollection.getCur();
	if (head == NULL) { cout << "ProductCollection is empty." << endl; return; }

	cout << "3.2. ��� ��ǰ ��ȸ - - - - - - - - -" << endl;
	cout << ">  " << endl;
	cur = head;

	cout << "��ǰ�� : " << cur->getProductName() << endl;
	cout << "����ȸ��� : " << cur->getCompanyName() << endl;
	cout << "���� : " << cur->getPrice() << endl;
	cout << "�Ǹ� ���� : " << cur->getSalesNum() << endl;
	cout << "- - - - - - - - - - - - - - - - - - -" << endl;

	while (cur->getNext() != NULL) {
		cur = cur->getNext();

		cout << "��ǰ�� : " << cur->getProductName() << endl;
		cout << "����ȸ��� : " << cur->getCompanyName() << endl;
		cout << "���� : " << cur->getPrice() << endl;
		cout << "�Ǹ� ���� : " << cur->getSalesNum() << endl;

		cout << "- - - - - - - - - - - - - - - - - - -" << endl;
	}
}