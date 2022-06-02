#pragma once
#include "../entities/Order.h"

class OrderCollection
{
private:
	Order* head;
	Order* cur;
public:
	OrderCollection();
	Order* findFirst();
	Order* getCur();
	void addOrder(Product** wholeProductArr, Order** wholeOrderArr, string Id, string name, string address, string contact);
};