#include <iostream>
#include "Order.h"

Order::Order(string id, int money, string name, string address, string contact) {	// 노드 초기화
	productId = id;
	price = money;
	recipientName = name;
	deliveryAddress = address;
	contatcInformation = contact;
	next = NULL;
}

Order::Order(string id, int money, string name, string address, string contact, Order* pNext) {  // 노드 초기화
	productId = id;
	price = money;
	recipientName = name;
	deliveryAddress = address;
	contatcInformation = contact;
	next = pNext;
}

Order* Order::getNext() {
	return this->next;
}

void Order::SetpNext(Order* newProduct) {
	this->next = newProduct;
}

OrderCollection::OrderCollection() {	// 노드 초기화
	head = NULL;
	cur = NULL;
}

void OrderCollection::addOrder(Order** wholeOrderArr, string id, int money, string name, string address, string contact) {
	static int wholeOrderNum = 0;
	Order* newOrder = new Order(id, money, name, address, contact);
	wholeOrderArr[wholeOrderNum++] = new Order(id, money, name, address, contact);

	if (head == NULL) {
		head = newOrder;
		return;
	}
	Order* cur = head;
	while (cur->getNext() != NULL) {
		cur = cur->getNext();
	}
	cur->SetpNext(newOrder);
}

Order* OrderCollection::findFirst() {
	return this->head;
}

Order* OrderCollection::getCur() {
	return this->cur;
}