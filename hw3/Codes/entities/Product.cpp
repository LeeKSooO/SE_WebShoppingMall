#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

Product::Product(string newSellerId, string newProductName, string newCompanyName, int newPrice, int newLeftNum)
{
    sellerId = newSellerId;
    productName = newProductName;
    companyName = newCompanyName;
    price = newPrice;
    leftNum = newLeftNum;
    salesNum = 0;
    next = NULL;
}
Product::Product(string id, string pName, string cName, int money, int num, Product *pNext)
{
    sellerId = id;
    productName = pName;
    companyName = cName;
    price = money;
    leftNum = num;
    salesNum = 0;
    next = pNext;
}
string Product::getSellerId() { return sellerId; }
string Product::getProductName() { return productName; }
string Product::getCompanyName() { return companyName; }
int Product::getPrice() { return price; }
int Product::getSalesNum() { return salesNum; }
int Product::getLeftNum() { return leftNum; }
void Product::increaseSalesNumAndDecreaseLeftNum()
{
    salesNum++;
    leftNum--;
}
float Product::getAvgPurchaseEvaluation() { return avgPurchaseEvaluation; }

Product *Product::getNext()
{
    return this->next;
}

void Product::SetpNext(Product *newProduct)
{
    this->next = newProduct;
}

void Product::setLeftNumAndSalesNum()
{
    this->salesNum = ++salesNum;
    this->leftNum = --leftNum;
}