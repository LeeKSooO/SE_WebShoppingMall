#include <iostream>
#include "Member.h"
#include "Product.h"
#include "../comm.h"
#include "../collections/ProductCollection.h"
#include "../collections/OrderCollection.h"

using namespace std;

Member::Member(string newMemberId, string newMemberPw, string newMemberName, string newResidentRegistrationNum)
{
   numSoldProducts = 0;
   memberId = newMemberId;
   memberPw = newMemberPw;
   memberName = newMemberName;
   residentRegistrationNum = newResidentRegistrationNum;
   ProductCollection *p = new ProductCollection();
   productCollection = p;
   OrderCollection *o = new OrderCollection();
   orderCollection = o;
}
string Member::getMemberId() { return memberId; }
string Member::getMemberName() { return memberName; }
string Member::getMemberRrn() { return residentRegistrationNum; }
string Member::getMemberPw() { return memberPw; }
int Member::getNumSoldProducts() { return numSoldProducts; }
ProductCollection *Member::getProductCollection() { return productCollection; }
OrderCollection *Member::getOrderCollection() { return orderCollection; }
