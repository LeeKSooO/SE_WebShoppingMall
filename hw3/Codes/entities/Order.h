#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

#ifndef Order_H
#define Order_H

// 구매 엔티티 클래스
class Order
{
private:
  string productName; // 상품명
  Product *productDetails;
  int purchaseEvaluation;

public:
  Order(string productName, Product *productDetails)
  {
    this->productName = productName;
    this->productDetails = productDetails;
  }
  string getProductName() { return this->productName; }
  Product *getProductDetails() { return this->productDetails; }
  int getPurchaseEvaluation() { return this->purchaseEvaluation; }
};

#endif