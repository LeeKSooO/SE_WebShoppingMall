#include <string>
#include "Product.h"
using namespace std;

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

Product* Product::getNext() {
	return this->next;
}

void Product::SetpNext(Product* newProduct) {
	this->next = newProduct;
}

string Product::getProductName() {
	return this->productName;
}

string Product::getCompanyName() {
	return this->companyName;
}

int Product::getPrice() {
	return this->price;
}

int Product::getSalesNum() {
	return this->salesNum;
}

void Product::getProductDetails(string id, string pName, string cName, int money, int num, float avgNum)
{
	sellerId = id;
	productName = pName;		
	companyName = cName;		
	price = money;		
	leftNum = num;	
	avgPurchaseEvaluation = avgNum;
}

ProductCollection::ProductCollection() {	// 노드 초기화
	head = NULL;
	cur = NULL;
}

void ProductCollection::addProduct(Product** wholeProductArr, string pName, string cName, int money, int num) {
	static int wholeProductNum = 0;
	Product* newProduct = new Product(pName, cName, money, num);
	wholeProductArr[wholeProductNum++] = new Product(pName, cName, money, num);


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

Product* ProductCollection::findFirst() {
	return this->head;
}

Product* ProductCollection::getCur() {
	return this->cur;
}

