#include "Member.h"
using namespace std;

void Member::registerProductInfo(Product** wholeProductArr, string productName, string companyName, int price, int salesNum) {
	productCollection.addProduct(wholeProductArr, productName, companyName, price, salesNum);
}

void Member::listProductsOnSale() {
	Product* head = productCollection.findFirst();
	Product* cur = productCollection.getCur();
	
	//���� ������� ��ȯ�ϱ�
	//-----output check-----//
	if (head == NULL) { cout << "ProductCollection is empty." << endl; return; }

	cout << "----------��� ��ǰ list ��ȸ----------" << endl;
	cur = head;

	cout << "��ǰ�� : " << cur->getProductName() << endl;
	cout << "����ȸ��� : " << cur->getCompanyName() << endl;
	cout << "���� : " << cur->getPrice() << endl;
	cout << "�Ǹ� ���� : " << cur->getSalesNum() << endl;
	cout << "---------------------------------------" << endl;

	while (cur->getNext() != NULL) {
		cur = cur->getNext();

		cout << "��ǰ�� : " << cur->getProductName() << endl;
		cout << "����ȸ��� : " << cur->getCompanyName() << endl;
		cout << "���� : " << cur->getPrice() << endl;
		cout << "�Ǹ� ���� : " << cur->getSalesNum() << endl;

		cout << "---------------------------------------" << endl;
	}
	cout << endl;
}