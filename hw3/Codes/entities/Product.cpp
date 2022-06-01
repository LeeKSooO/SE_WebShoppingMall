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
}
string Product::getSellerId() { return sellerId; }
// Product Product::getProductDetails() { return *this; } // 판매중인 상품 리스트 가져오기
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