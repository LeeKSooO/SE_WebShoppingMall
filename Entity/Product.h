#pragma once
#include <iostream>
using namespace std;

class Product {			
private:
	string sellerId;
	string productName;		// 상품명
	string companyName;		// 제작회사명
	int price;		//가격
	int salesNum;	//판매 수량
	int leftNum;	//남은 수량
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
	Product* findFirst();	// first node의 head포인터 반환
	Product* getCur();		// cur 반환
	void getProducts();	// 등록 상품 정보
	void addProduct(Product** wholeProductArr,string pName, string cName, int money, int num);
};