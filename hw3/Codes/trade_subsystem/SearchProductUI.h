#include <iostream>
#include <string>
#include "../entities/Member.h"
#include "../entities/Product.h"
#include "../comm.h"
using namespace std;

class SearchProductUI {
private:
	string pName;
public:
	SearchProductUI() { };
	void choiceProductName();
	void startInterface(Product* product);
};

//�Լ� ȣ�� ����
void SearchProductUI::choiceProductName() {
}

// ��ǰ �� ���� : �Ǹ���id, ��ǰ��, ����ȸ���, ����, ��������, ��ձ��Ÿ�����
void SearchProductUI::startInterface(Product *product) {
	ofstream fout("C:\\Users\\rtrt0\\OneDrive\\���� ȭ��\\textfile\\output.txt", ios::app);

	cout << "4.1. ��ǰ ���� �˻�\n";
	cout << "> " << product->getSellerId() << " " << product->getProductName() << " " << product->getCompanyName() << " " << product->getPrice()
		<< " " << product->getSalesNum() << endl; //�ѽ��Բ��� ��ĥ �� ��� ���Ÿ����� ������Ʈ�ϱ�

}