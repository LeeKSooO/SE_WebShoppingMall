#pragma once
#include <iostream>
using namespace std;

class Order
{
private:
	string productId;
	string recipientName;
	string deliveryAddress;
	string contatcInformation;
	Order* next;
public:
	Order(string Id, string name, string address, string contact);
	Order(string Id, string name, string address, string contact, Order *pNext);
	void SetpNext(Order* newOrder);
	Order* getNext();

};

class OrderCollection
{
private:
	Order* head;
	Order* cur;
public:
	OrderCollection();
	Order* findFirst();	// first node�� head������ ��ȯ
	Order* getCur();		// cur ��ȯ
	void addOrder(Order** wholeOrderArr, string Id, string name, string address, string contact);
};