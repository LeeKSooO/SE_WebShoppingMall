#include <iostream>
#include <string>
#include "../entities/Order.h"
#include "../entities/Product.h"

using namespace std;

#ifndef OrderCollection_H
#define OrderCollection_H

class OrderCollection
{
private:
    int numOrders;
    Order *orders[100];
    Order *head;
    Order *cur;

public:
    OrderCollection();
    Order **getOrders()
    {
        return orders;
    }
    int getNumOrders() { return this->numOrders; }
    void addOrder(Product **wholeProductArr, Order **wholeOrderArr);
    Order *findFirst();
    Order *getCur();
};

#endif
