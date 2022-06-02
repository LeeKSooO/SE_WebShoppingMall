#pragma once
#include <iostream>
using namespace std;

// leftNum 삭제 고려
class Product {
private:
	string productId;
	string sellerId;		// 판매자ID
	string productName;		// 상품명
	string companyName;		// 제작회사명
	int price;		//가격
	int salesNum;	//판매 수량
	int leftNum;	//남은 수량	
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
	Product* findFirst();	// first node의 head포인터 반환
	Product* getCur();		// cur 반환
	void getProducts();	// 등록 상품 정보
	void addProduct(Product** wholeProductArr, string sellerId, string pName, string cName, int money, int num);
};