#pragma once
#include <iostream>
#include <string>
#include "../entities/Member.h"
#include "../entities/Product.h"
#include "../comm.h"
using namespace std;

class AddProductUI {
private:
	string sellerId;
public:
	void registerProduct(Member** wholeMemberArr, Product** wholeProductArr, string sellerId, string pName, string cName, int money, int num) {
		//cout << "index check : " << wholeMemIndex << endl;

		//�α����� �� �� ���¿��� ��ǰ��� �Ұ��� // �α��� �� ���¿��� ��ǰ ��� ������ ����(�α׾ƿ��� �ʱ�ȭ)
		//���߿� product�� member attribute �߰��ϰ� ������ ���⼭ ����
		//sellerId = wholeMemberArr[wholeMemIndex]->getMemberId();
		wholeMemberArr[wholeMemIndex]->registerProductInfo(wholeProductArr, sellerId, pName, cName, money, num);
		
		cout << "3.1. �Ǹ� �Ƿ� ���" << endl;
		cout << "> " << wholeProductArr[wholeProductNum]->getProductName() << " " << wholeProductArr[wholeProductNum]->getCompanyName()
			<< " " << wholeProductArr[wholeProductNum]->getPrice() << " " << wholeProductArr[wholeProductNum]->getSalesNum() << endl;
	}
	void startInterface(Product** wholeProductArr) {
		ofstream fout("C:\\Users\\rtrt0\\OneDrive\\���� ȭ��\\textfile\\output.txt", ios::app);
		fout << "3.1 �Ǹ� �Ƿ� ���\n";
		fout << "> " << wholeProductArr[wholeProductNum]->getProductName() << " " << wholeProductArr[wholeProductNum]->getCompanyName()
			<< " " << wholeProductArr[wholeProductNum]->getPrice() << " " << wholeProductArr[wholeProductNum]->getSalesNum() << endl;
		fout.close();
	}
};