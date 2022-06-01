#include <iostream>
#include "/Member.h"
#include "/Product.h"
#include "Member.h"
#include "Product.h"
#include "../comm.h"
#include "../collections/ProductCollection.h"
#include "../collections/OrderCollection.h"

using namespace std;

Product *Member::listSoldProducts(ProductCollection *c)
Member::Member(string newMemberId, string newMemberPw, string newMemberName, string newResidentRegistrationNum)
{
    return c->getSoldProducts;
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

// void Member::registerProduct(string productName, string companyName, int price, int salesNum)
// {
//     Product product = new Product(productName, companyName, price, salesNum);

// } 
string Member::getMemberId() { return memberId; }
string Member::getMemberName() { return memberName; }
string Member::getMemberRrn() { return residentRegistrationNum; }
string Member::getMemberPw() { return memberPw; }
int Member::getNumSoldProducts() { return numSoldProducts; }
ProductCollection *Member::getProductCollection() { return productCollection; }
OrderCollection *Member::getOrderCollection() { return orderCollection; } 

bool Member::checkIdPw(string Id, string Pw) {

   for (int i = 0; i < wholeMemberNum; i++) {

      if (wholeMemberArr[i] == NULL) continue;
      else {
         if ((wholeMemberArr[i]->memberId == Id) & (wholeMemberArr[i]->memberPw == Pw)) {
            nowLogIn = wholeMemberArr[i];
            return true;
         }
         else continue;
      }
   }
   return false;
}


string Member::deleteMember() {
   for (int i = 0; i < wholeMemberNum; i++) {

      if (wholeMemberArr[i] = this) {
         string Id = wholeMemberArr[i]->memberId;
         wholeMemberArr[i] = NULL;
         nowLogIn = NULL;
         return Id;
      }

   }
}

void Member::createNewMember(Member* member) {
   wholeMemberArr[wholeMemberNum++] = member;
}

