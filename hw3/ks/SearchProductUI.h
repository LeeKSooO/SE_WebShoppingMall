#include "../entities/Product.h"

class SearchProductUI {
private:
	string pName;
public:
	SearchProductUI() { };
	void choiceProductName();
	void startInterface(Product* product);
};

//함수 호출 고려
void SearchProductUI::choiceProductName() {
}

// 상품 상세 정보 : 판매자id, 상품명, 제작회사명, 가격, 남은수량, 평균구매만족도
void SearchProductUI::startInterface(Product *product) {
	ofstream fout("C:\\Users\\rtrt0\\OneDrive\\바탕 화면\\textfile\\output.txt", ios::app);

	cout << "4.1. 상품 정보 검색\n";
	cout << "> " << product->getSellerId() << " " << product->getProductName() << " " << product->getCompanyName() << " " << product->getPrice()
		<< " " << product->getSalesNum() << endl; //한슬님꺼랑 합칠 때 평균 구매만족도 업데이트하기

}