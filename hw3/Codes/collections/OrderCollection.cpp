#include <iostream>
#include <fstream>
#include "OrderCollection.h"
#include "../comm.h"
#include "../entities/Member.h"
#include "../entities/Product.h"
#include "../entities/Order.h"

OrderCollection::OrderCollection()
{
    head = NULL;
    cur = NULL;
    numOrders = 0;
}

void OrderCollection::addOrder(Product **wholeProductArr, Order **wholeOrderArr)
{
    wholeProductArr[searchPoint]->setLeftNumAndSalesNum();
    //판매 완료 상품에 추가

    Order *newOrder = new Order(wholeProductArr[searchPoint]->getSellerId(), wholeProductArr[searchPoint]->getProductName(), wholeProductArr[searchPoint]);
    wholeOrderArr[wholeOrderNum++] = new Order(wholeProductArr[searchPoint]->getSellerId(), wholeProductArr[searchPoint]->getProductName(), wholeProductArr[searchPoint]);
    this->orders[(this->numOrders)++] = newOrder;

    if (head == NULL)
    {
        head = newOrder;
        return;
    }
    Order *cur = head;
    while (cur->getNext() != NULL)
    {
        cur = cur->getNext();
    }

    cur->SetpNext(newOrder);
}

Order *OrderCollection::findFirst()
{
    return this->head;
}

Order *OrderCollection::getCur()
{
    return this->cur;
}