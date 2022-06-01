#include <iostream>
#include <string>
#include "../entities/Order.h"

using namespace std;

#ifndef OrderCollection_H
#define OrderCollection_H

// 오더 컬렉션 클래스
class OrderCollection
{
private:
    int numOrders;
    Order *orders[100]; // 구매 내역

public:
    OrderCollection()
    {
        this->numOrders = 0;
    }
    Order **getOrders()
    {
        return orders;
    }
    int getNumOrders() { return this->numOrders; }
    void addOrder(Order *order)
    {
        this->orders[(this->numOrders)++] = order;
    }
};

#endif
