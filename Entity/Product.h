#pragma once
#include <iostream>
using namespace std;

class Product {			
private:
	string sellerId;
	string productName;		// ��ǰ��
	string companyName;		// ����ȸ���
	int price;		//����
	int salesNum;	//�Ǹ� ����
	int leftNum;	//���� ����
	float avgPurchaseEvaluation;
	Product* next;

public:
	Product(string pName, string cName, int money, int num);
	Product(string pName, string cName, int money, int num, Product* pNext);
	Product* getNext();
	void SetpNext(Product* newProduct);
	string getProductName();
	string getCompanyName();
	int getPrice();
	int getSalesNum();
	void getProductDetails(string sellerId,  string productName, string companyName, int price, int leftNum, float avgNum);
};

class ProductCollection {
private:
	Product* head;
	Product* cur;
public:
	ProductCollection();	
	Product* findFirst();	// first node�� head������ ��ȯ
	Product* getCur();		// cur ��ȯ
	void getProducts();	// ��� ��ǰ ����
	void addProduct(Product** wholeProductArr,string pName, string cName, int money, int num);
};