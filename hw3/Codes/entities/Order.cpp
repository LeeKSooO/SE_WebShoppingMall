#include <iostream>
#include "Member.h"
#include "Product.h"
#include "Order.h"
#include "../comm.h"
#include "../collections/ProductCollection.h"
#include "../collections/OrderCollection.h"

using namespace std;

Order::Order(string newSellerId, string newProductName, Product *newProduct)
{
    sellerId = newSellerId;
    productName = newProductName;
    product = newProduct;
    purchaseEvaluation = 0;
    next = NULL;
}

Order::Order(string newSellerId, string newProductName, Product *newProduct, Order *pNext)
{ 
    sellerId = newSellerId;
    productName = newProductName;
    product = newProduct;
    purchaseEvaluation = 0;
    next = pNext;
}

string Order::getSellerId()
{
    return sellerId;
}

string Order::getProductName()
{
    return productName;
}

int Order::getPurchaseEvaluation()
{
    return purchaseEvaluation;
}

void Order::setPurchaseEvaluation(int newPurchaseEvaluation)
{
    purchaseEvaluation = newPurchaseEvaluation;
}

Product *Order::getProduct()
{
    return product;
}

Order *Order::getNext()
{
    return this->next;
}

void Order::SetpNext(Order *newProduct)
{
    this->next = newProduct;
}
