#include "../entities/Product.h"
#include "../comm.h"

ProductCollection::ProductCollection() {	// 노드 초기화
	head = NULL;
	cur = NULL;
}

void ProductCollection::addProduct(Product** wholeProductArr, string sellerId, string pName, string cName, int money, int num) {
	Product* newProduct = new Product(sellerId, pName, cName, money, num);
	wholeProductArr[wholeProductNum++] = new Product(sellerId, pName, cName, money, num);

	if (head == NULL) {
		head = newProduct;
		return;
	}
	Product* cur = head;
	while (cur->getNext() != NULL) {
		cur = cur->getNext();
	}
	cur->SetpNext(newProduct);
}

Product* ProductCollection::findFirst() {
	return this->head;
}

Product* ProductCollection::getCur() {
	return this->cur;
}

