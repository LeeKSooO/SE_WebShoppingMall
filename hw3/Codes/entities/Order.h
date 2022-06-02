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
    string sellerId;
    string productName;
    int purchaseEvaluation;
    Product *product;
    Order *next;

public:
    Order(string sellerId, string productName, Product *product);
    Order(string sellerId, string name, Product *newProduct, Order *pNext);
    string getSellerId();
    string getProductName();
    int getPurchaseEvaluation();
    void setPurchaseEvaluation(int purchaseEvaluation);
    Product *getProduct();
    void SetpNext(Order *newOrder);
    Order *getNext();
};

#endif