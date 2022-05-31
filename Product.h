#pragma once
#include <vector>
#include <iostream>
using namespace std;

class Product {			
private:
	string productName;		// ��ǰ��
	string companyName;		// ����ȸ���
	int price;		//����
	int salesNum;	//�Ǹ� ����
	int leftNum;	//���� ����
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
	ProductCollection();	// ��� �ʱ�ȭ
	void findFirst();	// first node�� head������ ��ȯ
	void getNext();		// next ��ȯ
	void listProducts();
	void addProduct(string pName, string cName, int money, int num);
};