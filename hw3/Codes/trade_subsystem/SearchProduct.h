#include "SearchProductUI.h"
#include "../entities/Product.h"
#include "../comm.h"

// 상품 정보 검색 : 판매자id, 상품명, 제작회사명, 가격, 남은수량, 평균구매만족도
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
	for (int i = 0; i <30; i++) {	// 이 부분 나중에 static in wholeProductNum 으로 수정.(지금 수 업데이트 안됨)
		if ((wholeProductArr[i]->getProductName()) == productName) {
			return i;
		}
	}
	return -1;
}
