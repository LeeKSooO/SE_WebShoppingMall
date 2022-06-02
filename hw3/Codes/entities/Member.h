#include <iostream>
#include "../collections/ProductCollection.h"
#include "../collections/OrderCollection.h"

using namespace std;

#ifndef Member_H
#define Member_H

class Member
{
private:
   string memberId;
   string memberPw;
   string memberName;
   string residentRegistrationNum;
   int numSoldProducts;
   ProductCollection *productCollection;
   OrderCollection *orderCollection;

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
   ProductCollection *getProductCollection();
   OrderCollection *getOrderCollection();
   bool checkIdPw(string Id, string Pw);
   string deleteMember();
   void registerProductInfo(Product **wholeProductArr, string sellerId, string productName, string companyName, int price, int salesNum);
   void inputOrderInfo(Product **wholeProductArr, Order **wholeOrderArr);
   void listProductsOnSale();
};

#endif