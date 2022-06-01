#include <iostream>
#include "../comm.h"
#include "../entities/Product.h"
#include "../entities/Member.h"
#include "../entities/Order.h"
#include "PrintSalesStaticsUI.h"

using namespace std;

#ifndef PrintSalesStatics_H
#define PrintSalesStatics_H

// 판매 통계 출력 컨트롤 클래스
class PrintSalesStatics
{
private:
	Member *member;

public:
	PrintSalesStatics(Member *member)
	{
		// product collection에 호출
		ProductCollection *p = member->getProductCollection();
		Product **soldProductList = p->getSoldProducts();
		int num = p->getNumSoldProducts();

		PrintSalesStaticsUI *ui = new PrintSalesStaticsUI();

		ui->printTitle();

		if (num > 0)
			for (int i = 0; i < num; i++)
			{
				int totalPrice = calTotalPrice(soldProductList[i]->getPrice(), soldProductList[i]->getSalesNum());
				float avgPurchaseEvaluation = calAvgPurchaseEvaluation(member->getMemberId(), soldProductList[i]->getProductName());
				ui->printLine(soldProductList[i]->getProductName(), totalPrice, avgPurchaseEvaluation);
			}

		ui->printEndl();
	}

	int calTotalPrice(int price, int salesNum)
	{
		return price * salesNum;
	}
};

#endif