#pragma once
#include <string>
#include "Member.h"
#include "Product.h"

class PurchaseProductUI {
private:
public:
	void startInterface();
	void purchaseProduct(Order** wholeOrderArr, string id, string name, string address, string contact) {
		Member *newMember = new Member("kyoungsoo", "1234", "�̰��", "324234");
		newMember->registerOrderInfo(wholeOrderArr, id, name, address, contact);

		//fout
		cout << "4.2. ��ǰ ����" << endl;
	}
};
