#include <iostream>
#include "../entities/Product.h"
#include "../entities/Member.h"
#include "ViewSoldHistoryUI.h"

using namespace std;

#ifndef ViewSoldHistory_H
#define ViewSoldHistory_H

// 판매 완료 상품 조회 컨트롤 클래스
class ViewSoldHistory
{
private:
	Member *member;

public:
	Product *viewSoldHistory();
	ViewSoldHistory(Member *member)
	{
		// product collection에 호출
		ProductCollection *p = member->getProductCollection();
		Product **soldProductList = p->getSoldProducts();
		int num = p->getNumSoldProducts();

		ViewSoldHistoryUI *ui = new ViewSoldHistoryUI();

		ui->printTitle();

		for (int i = 0; i < num; i++)
		{
			ui->printLine(soldProductList[i]);
		}

		ui->printEndl();
	}
};

#endif