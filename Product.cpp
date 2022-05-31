#include <iostream>
#include <fstream>
#include <string>
#include "Product.h"

Product::Product(string pName, string cName, int money, int num) {	// ��� �ʱ�ȭ
	productName = pName;
	companyName = cName;
	price = money;
	salesNum = num;
	next = NULL;
}

Product::Product(string pName, string cName, int money, int num, Product* pNext) {  // ��� �ʱ�ȭ
	productName = pName;		// ��ǰ��
	companyName = cName;		// ����ȸ���
	price = money;				//����
	salesNum = num;				//�Ǹ� ����
	next = pNext;
}

ProductCollection::ProductCollection() {	// ��� �ʱ�ȭ
	head = NULL;
	cur = NULL;
}

void ProductCollection::addProduct(string pName, string cName, int money, int num) {
	Product* newProduct = new Product(pName, cName, money, num);

	if (head == NULL) {
		head = newProduct;
		return;
	}
	Product* cur = head;
	while (cur->getNext() != NULL) {
		cur = cur->getNext();
	}
	cur->SetpNext(newProduct);
}

void ProductCollection::listProducts() {

	//output test//
	if (head == NULL) { cout << "ProductCollection is empty." << endl; return; }

	cout << "----------��� ��ǰ list ��ȸ----------" << endl;
	cur = head;

	cout << "��ǰ�� : " << cur->getProductName() << endl;
	cout << "����ȸ��� : " << cur->getCompanyName() << endl;
	cout << "���� : " << cur->getPrice() << endl;
	cout << "�Ǹ� ���� : " << cur->getSalesNum() << endl;
	cout << "---------------------------------------" << endl;

	while (cur->getNext() != NULL) {
		cur = cur->getNext();

		cout << "��ǰ�� : " << cur->getProductName() << endl;
		cout << "����ȸ��� : " << cur->getCompanyName() << endl;
		cout << "���� : " << cur->getPrice() << endl;
		cout << "�Ǹ� ���� : " << cur->getSalesNum() << endl;

		cout << "---------------------------------------" << endl;
	}
	//output test//

	cout << endl;
}
