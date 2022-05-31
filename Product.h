#pragma once
#include <vector>
#include <iostream>
using namespace std;

class Product {			
private:
	string productName;		// 상품명
	string companyName;		// 제작회사명
	int price;		//가격
	int salesNum;	//판매 수량
	int leftNum;	//남은 수량
	Product* next;

public:
	Product(string pName, string cName, int money, int num);
	Product(string pName, string cName, int money, int num, Product* pNext);
	Product* getNext() { return this->next; }
	void SetpNext(Product* newProduct) { this->next = newProduct; }
	string getProductName() { return this->productName; }
	string getCompanyName() { return this->companyName; }
	int getPrice() { return this->price; }
	int getSalesNum() { return this->salesNum; }
};

class ProductCollection {
private:
	Product* head;
	Product* cur;
public:
	ProductCollection();	// 노드 초기화
	void findFirst();	// first node의 head포인터 반환
	void getNext();		// next 반환
	void listProducts();
	void addProduct(string pName, string cName, int money, int num);
};