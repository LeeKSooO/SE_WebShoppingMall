#include <iostream>
#include "../collections/ProductCollection.h"
#include "../collections/OrderCollection.h"

using namespace std;

#ifndef Member_H
#define Member_H

// 멤버 엔티티 클래스
class Member
{
private:
	string memberId; // 멤버 id
	string memberPw; // 멤버 비밀번호
	string memberName;
	string residentRegistrationNum;
	int numSoldProducts = 0;
	ProductCollection *productCollection;
	OrderCollection *orderCollection;

public:
	Member(string memberId, string memberPw, string memberName, string residentRegistrationNum)
	{
		this->memberId = memberId;
		this->memberPw = memberPw;
		this->memberName = memberName;
		this->residentRegistrationNum = residentRegistrationNum;
		ProductCollection *p = new ProductCollection();
		this->productCollection = p;
		OrderCollection *o = new OrderCollection();
		this->orderCollection = o;
	};
	string getMemberId() { return this->memberId; }
	void listProductsOnSale();						// 판매중인 상품 리스트 가져오기
	Product *listSoldProducts(ProductCollection *); // 판매한 상품들 리스트 가져오기
	Order *listOrders(OrderCollection *);
	void deleteMember();
	void checkidpw();
	void createNewMember();
	void registerProduct(string sellerId, string productName, string companyName, int price, int salesNum)
	{
		Product *product = new Product(sellerId, productName, companyName, price, salesNum);
	}
	int getNumSoldProducts() { return numSoldProducts; }
	ProductCollection *getProductCollection() { return this->productCollection; }
	OrderCollection *getOrderCollection() { return this->orderCollection; }
};

#endif