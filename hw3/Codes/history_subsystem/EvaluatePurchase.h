#include <iostream>
#include <string>
#include <tuple>
#include "../entities/Product.h"
#include "../entities/Member.h"
#include "../collections/OrderCollection.h"
#include "EvaluatePurchaseUI.h"

using namespace std;

#ifndef EvaluatePurchase_H
#define EvaluatePurchase_H

// 판매 완료 상품 조회 컨트롤 클래스
class EvaluatePurchase
{
private:
public:
	EvaluatePurchase(Member *member, string productName, int purchaseEvaluation)
	{
		EvaluatePurchaseUI *ui = new EvaluatePurchaseUI();
		// 파일에서 인풋 받아오기
		// tuple<string, int> uiReturnVal = ui->inputPurchaseEvaluation();
		// string productName = get<0>(uiReturnVal);
		// int purchaseEvaluation = get<1>(uiReturnVal);
		// cout << productName << " " << purchaseEvaluation << endl;

		// order collection에 호출
		OrderCollection *o = member->getOrderCollection();
		Order **orderList = o->getOrders();
		int num = o->getNumOrders();

		// 반복문 돌면서 상품명 일치하는 오더에 구매만족도 평가
		for (int i = 0; i < num; i++)
		{
			if (orderList[i]->getProductName() == productName)
			{
				savePurchaseEvaluation(orderList[i], purchaseEvaluation);
				ui->outputInterface(orderList[i]);
			}
		}
	}
	void savePurchaseEvaluation(Order *order, int purchaseEvaluation)
	{
		order->setPurchaseEvaluation(purchaseEvaluation);
	}
};

#endif