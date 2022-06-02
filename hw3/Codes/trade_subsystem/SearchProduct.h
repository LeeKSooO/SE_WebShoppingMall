#include <iostream>
#include <string>
#include "../entities/Member.h"
#include "../entities/Product.h"
#include "../comm.h"
#include "SearchProductUI.h"
using namespace std;
// ��ǰ ���� �˻� : �Ǹ���id, ��ǰ��, ����ȸ���, ����, ��������, ��ձ��Ÿ�����
class SearchProduct {
private:
public:
	SearchProduct(Product** wholeProductArr, string productName) {
		SearchProductUI* ui = new SearchProductUI();
		searchPoint = searchProduct(wholeProductArr, productName);
		ui->startInterface(wholeProductArr[searchPoint]);
	}

	int searchProduct(Product** wholeProductArr, string productName);
};

int SearchProduct::searchProduct(Product** wholeProductArr, string productName) {
	for (int i = 0; i <30; i++) {	// �� �κ� ���߿� static in wholeProductNum ���� ����.(���� �� ������Ʈ �ȵ�)
		if ((wholeProductArr[i]->getProductName()) == productName) {
			return i;
		}
	}
	return -1;
}
