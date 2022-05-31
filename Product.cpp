#include <iostream>
#include <fstream>
#include <string>
#include "Product.h"

Product::Product(string pName, string cName, int money, int num) {	// 노드 초기화
	productName = pName;
	companyName = cName;
	price = money;
	salesNum = num;
	next = NULL;
}

Product::Product(string pName, string cName, int money, int num, Product* pNext) {  // 노드 초기화
	productName = pName;		// 상품명
	companyName = cName;		// 제작회사명
	price = money;				//가격
	salesNum = num;				//판매 수량
	next = pNext;
}

ProductCollection::ProductCollection() {	// 노드 초기화
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

	cout << "----------등록 상품 list 조회----------" << endl;
	cur = head;

	cout << "상품명 : " << cur->getProductName() << endl;
	cout << "제작회사명 : " << cur->getCompanyName() << endl;
	cout << "가격 : " << cur->getPrice() << endl;
	cout << "판매 수량 : " << cur->getSalesNum() << endl;
	cout << "---------------------------------------" << endl;

	while (cur->getNext() != NULL) {
		cur = cur->getNext();

		cout << "상품명 : " << cur->getProductName() << endl;
		cout << "제작회사명 : " << cur->getCompanyName() << endl;
		cout << "가격 : " << cur->getPrice() << endl;
		cout << "판매 수량 : " << cur->getSalesNum() << endl;

		cout << "---------------------------------------" << endl;
	}
	//output test//

	cout << endl;
}
