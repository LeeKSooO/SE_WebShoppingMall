#include <iostream>
#include <string>

using namespace std;

#ifndef Product_H
#define Product_H

// 상품 엔티티 클래스
class Product
{
private:
  string productId;   //
  string productName; //
  string companyName;
  int price;
  float avgPurchaseEvaluation;
  int leftNum;
  int salesNum;

public:
  Product(string productName, string companyName, int price, int leftNum)
  {
    this->productName = productName;
    this->companyName = companyName;
    this->price = price;
    this->leftNum = leftNum;
  }
  Product getProductDetails() { return *this; } // 판매중인 상품 리스트 가져오기
  string getProductName();
  string getCompanyName();
  int getPrice();
  int getSalesNum();
  float getAvgPurchaseEvaluation();
  float calAvgPurchaseEvaluation(string productName, int purchaseEvaluation); // 판매한 상품들 리스트 가져오기
};

#endif