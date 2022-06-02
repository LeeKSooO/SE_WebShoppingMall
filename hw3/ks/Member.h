#pragma once
#include "Product.h"
#include "Order.h"

class Member {
private:
	ProductCollection productCollection;
	OrderCollection orderCollection;
	Product* product;
	Order* order;

	Member* nowLogin;
	string memberId; // ¸â¹ö id
	string memberPw; // ¸â¹ö ºñ¹Ð¹øÈ£
	string memberName;
	string residentRegistrationNum;
	int numSoldProducts;

	string recipientName;
	string deriveryAddress;
	string contactInformation;

public:
	Member(string, string, string, string);
	string getMemberId();
	void setMemberId(string memberId) { this->memberId = memberId; }
	string getMemberName();
	void setMemberName(string memberName) { this->memberName = memberName; }
	string getMemberRrn();
	void setMemberRrn(string residentRegistrationNum) { this->residentRegistrationNum = residentRegistrationNum; }
	string getMemberPw();
	void setMemberPw(string memberPw) { this->memberPw = memberPw; }
	int getNumSoldProducts();
	ProductCollection* getProductCollection();
	OrderCollection* getOrderCollection();
	bool checkIdPw(string Id, string Pw);
	string deleteMember();
	void createNewMember(Member* member);
	void registerProductInfo(Product** wholeProductArr, string sellerId, string productName, string companyName, int price, int salesNum);
	void inputOrderInfo(Product** wholeProductArr, Order** wholeOrderArr, string productId, string recipientName, string deriveryAddress, string contactInformation);
	void listProductsOnSale();
	string getRecipientName(); 
	string getDeliveryAddress(); 
	string getContactInformatin();
};