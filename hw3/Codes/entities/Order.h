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
    string productName;
    int purchaseEvaluation = -1;
    Product *product;

public:
    Order(string productName, Product *product)
    {
        this->productName = productName;
        this->product = product;
    }
    string getProductName() { return this->productName; }
    int getPurchaseEvaluation() { return this->purchaseEvaluation; }
    Product *getProduct() { return this->product; }
};

#endif