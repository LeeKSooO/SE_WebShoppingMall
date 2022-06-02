#include <iostream>
#include <fstream>
#include "OrderCollection.h"
#include "../comm.h"
#include "../entities/Member.h"
#include "../entities/Product.h"
#include "../entities/Order.h"

OrderCollection::OrderCollection()
{ // ��� �ʱ�ȭ
    head = NULL;
    cur = NULL;
}

void OrderCollection::addOrder(Product **wholeProductArr, Order **wholeOrderArr)
{

    // wholeMemberArr[wholeMemIndex]->setLeftNum();
    wholeProductArr[searchPoint]->setLeftNum();
    Order *newOrder = new Order(sellerId, productName);
    wholeOrderArr[wholeOrderNum++] = new Order(sellerId, productName);
    this->orders[(this->numOrders)++] = order;

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