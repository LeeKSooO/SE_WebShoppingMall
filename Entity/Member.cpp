#include "Member.h"
using namespace std;

void Member::registerProductInfo(Product** wholeProductArr, string productName, string companyName, int price, int salesNum) {
	productCollection.addProduct(wholeProductArr, productName, companyName, price, salesNum);
}

void Member::listProductsOnSale() {
	Product* head = productCollection.findFirst();
	Product* cur = productCollection.getCur();
	
	//파일 출력으로 변환하기
	//-----output check-----//
	if (head == NULL) { cout << "ProductCollection is empty." << endl; return; }

	cout << "----------등록 상품 list 조회----------" << endl;
	cur = head;

	cout << "상품명 : " << cur->getProductName() << endl;
	cout << "제작회사명 : " << cur->getCompanyName() << endl;
	cout << "가격 : " << cur->getPrice() << endl;
	cout << "판매 수량 : " << cur->getSalesNum() << endl;
	cout << "---------------------------------------" << endl;

	while (cur->getNext() != NULL) {
		cur = cur->getNext();

		cout << "상품명 : " << cur->getProductName() << endl;
		cout << "제작회사명 : " << cur->getCompanyName() << endl;
		cout << "가격 : " << cur->getPrice() << endl;
		cout << "판매 수량 : " << cur->getSalesNum() << endl;

		cout << "---------------------------------------" << endl;
	}
	cout << endl;
}