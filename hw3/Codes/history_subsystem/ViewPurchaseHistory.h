#include <iostream>
#include "../entities/Product.h"
#include "../entities/Member.h"
#include "../entities/Order.h"
#include "ViewPurchaseHistoryUI.h"

using namespace std;

#ifndef ViewPurchaseHistory_H
#define ViewPurchaseHistory_H

// 구매 내역 조회 컨트롤 클래스
class ViewPurchaseHistory
{
private:
	Member *member;

public:
	Product *viewPurchaseHistory();
	ViewPurchaseHistory(Member *member)
	{
		// order collection에 호출
		OrderCollection *o = member->getOrderCollection();
		Order **orderList = o->getOrders();
		int num = o->getNumOrders();

		ViewPurchaseHistoryUI *ui = new ViewPurchaseHistoryUI();

		for (int i = 0; i < num; i++)
		{
			ui->printLine(orderList[i]->getProduct());
		}
	}
};

#endif