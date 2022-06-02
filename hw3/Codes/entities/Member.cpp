#include <iostream>
#include <fstream>
#include "Member.h"
#include "Product.h"
#include "../comm.h"
#include "../collections/ProductCollection.h"
#include "../collections/OrderCollection.h"

using namespace std;

Member::Member(string newMemberName, string newResidentRegistrationNum, string newMemberId, string newMemberPw)
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

void Member::registerProductInfo(Product **wholeProductArr, string sellerId, string productName, string companyName, int price, int salesNum)
{
   productCollection->addProduct(wholeProductArr, sellerId, productName, companyName, price, salesNum);
}

void Member::inputOrderInfo(Product **wholeProductArr, Order **wholeOrderArr)
{
   orderCollection->addOrder(wholeProductArr, wholeOrderArr);
}

void Member::listProductsOnSale()
{
   Product *head = productCollection->findFirst();
   Product *cur = productCollection->getCur();
   ofstream fout("output.txt", ios::app);

   fout << "3.2. 등록 상품 조회" << endl;
   if (head == NULL)
   {
      fout << "\n"
           << endl;
      return;
   }

   fout << ">  " << endl;
   cur = head;

   fout << cur->getProductName() << " " << cur->getCompanyName() << " " << cur->getPrice() << " " << cur->getLeftNum() << endl;

   while (cur->getNext() != NULL)
   {
      cur = cur->getNext();
      fout << cur->getProductName() << " " << cur->getCompanyName() << " " << cur->getPrice() << " " << cur->getLeftNum() << endl;
   }
   cout << endl;
}