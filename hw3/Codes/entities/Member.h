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
	int numSoldProducts;
	ProductCollection *productCollection;
	OrderCollection *orderCollection;

public:
	Member(string, string, string, string);
	string getMemberId();
	int getNumSoldProducts();
	ProductCollection *getProductCollection();
	OrderCollection *getOrderCollection();
};

#endif