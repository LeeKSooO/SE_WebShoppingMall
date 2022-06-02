#include <iostream>
#include "Order.h"
#include "comm.h"

Order::Order(string id, string name, string address, string contact) {	// ��� �ʱ�ȭ
	productId = id;
	recipientName = name;
	deliveryAddress = address;
	contatcInformation = contact;
	next = NULL;
}

Order::Order(string id, string name, string address, string contact, Order* pNext) {  // ��� �ʱ�ȭ
	productId = id;
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

OrderCollection::OrderCollection() {	// ��� �ʱ�ȭ
	head = NULL;
	cur = NULL;
}

void OrderCollection::addOrder(Product** wholeProductArr, Order** wholeOrderArr, string id, string name, string address, string contact) {

	//wholeMemberArr[wholeMemIndex]->setLeftNum();
	wholeProductArr[searchPoint]->setLeftNum();
	Order* newOrder = new Order(id, name, address, contact);
	wholeOrderArr[wholeOrderNum++] = new Order(id, name, address, contact);

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