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

   fout << "3.2. ��� ��ǰ ��ȸ- - - - - - - -" << endl;
   if (head == NULL)
   {
      fout << "\n"
           << endl;
      return;
   }

   fout << ">  " << endl;
   cur = head;

   fout << "��ǰ�� : " << cur->getProductName() << endl;
   fout << "����ȸ��� : " << cur->getCompanyName() << endl;
   fout << "���� : " << cur->getPrice() << endl;
   fout << "�Ǹ� ���� : " << cur->getSalesNum() << endl;
   fout << "- - - - - - - - - - - - - - - - - - -" << endl;

   while (cur->getNext() != NULL)
   {
      cur = cur->getNext();

      fout << "��ǰ�� : " << cur->getProductName() << endl;
      fout << "����ȸ��� : " << cur->getCompanyName() << endl;
      fout << "���� : " << cur->getPrice() << endl;
      fout << "�Ǹ� ���� : " << cur->getSalesNum() << endl;

      fout << "- - - - - - - - - - - - - - - - - - -" << endl;
   }

   //----------output check----------//
   head = productCollection->findFirst();
   cur = productCollection->getCur();
   if (head == NULL)
   {
      cout << "ProductCollection is empty." << endl;
      return;
   }

   cout << "3.2. ��� ��ǰ ��ȸ - - - - - - - - -" << endl;
   cout << ">  " << endl;
   cur = head;

   cout << "��ǰ�� : " << cur->getProductName() << endl;
   cout << "����ȸ��� : " << cur->getCompanyName() << endl;
   cout << "���� : " << cur->getPrice() << endl;
   cout << "�Ǹ� ���� : " << cur->getSalesNum() << endl;
   cout << "- - - - - - - - - - - - - - - - - - -" << endl;

   while (cur->getNext() != NULL)
   {
      cur = cur->getNext();

      cout << "��ǰ�� : " << cur->getProductName() << endl;
      cout << "����ȸ��� : " << cur->getCompanyName() << endl;
      cout << "���� : " << cur->getPrice() << endl;
      cout << "�Ǹ� ���� : " << cur->getSalesNum() << endl;

      cout << "- - - - - - - - - - - - - - - - - - -" << endl;
   }
}