#include <iostream>
#include <string>
#include "../entities/Order.h"
#include "../entities/Product.h"

using namespace std;

#ifndef OrderCollection_H
#define OrderCollection_H

// 오더 컬렉션 클래스
class OrderCollection
{
private:
    int numOrders;
    Order *orders[100]; // 구매 내역
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
