#pragma once
#include <iostream>
using namespace std;

// leftNum ���� ���
class Product {
private:
	string productId;
	string sellerId;		// �Ǹ���ID
	string productName;		// ��ǰ��
	string companyName;		// ����ȸ���
	int price;		//����
	int salesNum;	//�Ǹ� ����
	int leftNum;	//���� ����	
	float avgPurchaseEvaluation;
	Product* next;
	
public:
	Product(string id, string pName, string cName, int money, int num);
	Product(string id, string pName, string cName, int money, int num, Product* pNext);
	Product* getNext();
	void SetpNext(Product* newProduct);
	string getSellerId();
	string getProductName();
	string getCompanyName();
	string getProductId();
	int getPrice();
	int getSalesNum();
	int getLeftNum();
	float getavgPurchaseEvaluation();
	void setLeftNum();
	void getProductDetails(string sellerId, string productName, string companyName, int price, int leftNum, float avgNum);
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
	void addProduct(Product** wholeProductArr, string sellerId, string pName, string cName, int money, int num);
};