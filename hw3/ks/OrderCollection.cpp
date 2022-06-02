#include "../entities/Order.h"
#include "../comm.h"

OrderCollection::OrderCollection() {	// 노드 초기화
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