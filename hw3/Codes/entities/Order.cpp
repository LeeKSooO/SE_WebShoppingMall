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