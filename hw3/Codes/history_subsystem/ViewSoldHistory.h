#include <iostream>
#include "../entities/Product.h"

using namespace std;

// 판매 완료 상품 조회 컨트롤 클래스
class ViewSoldHistory
{
private:
	Member *member;

public:
	ViewSoldHistory(Member *);
	Product *viewSoldHistory();
};

// // 판매 완료 상품 조회 바운더리 클래스
// class ViewSoldHistoryUI
// {
// private:
// public:
// 	ViewSoldHistoryUI(ViewSoldHistory* cc);
// 	void startInterface(Product soldProudcts[]);
// };
