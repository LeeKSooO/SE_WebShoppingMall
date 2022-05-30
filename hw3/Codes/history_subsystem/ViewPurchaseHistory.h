#include <iostream>
#include "../entities/Product.h"
#include "../entities/Order.h"
#include "../collections/OrderCollection.h"
#include "ViewPurchaseHistoryUI.h"

using namespace std;

#ifndef ViewPurchaseHistory_H
#define ViewPurchaseHistory_H

// 판매 완료 상품 조회 컨트롤 클래스
class ViewPurchaseHistory
{
    // private:
public:
    ViewPurchaseHistory(Member *member)
    {
        // order collection에 호출
        OrderCollection *o = member->getOrderCollection();
        Order **ordrers = o->getOrders();
        int orderNum = o->getNumOrders();

        ViewPurchaseHistoryUI *ui = new ViewPurchaseHistoryUI();

        for (int i = 0; i < orderNum; i++)
        {
            string sellerId = ordrers[i]->getProductDetails()->getSellerId();
            string pname = ordrers[i]->getProductDetails()->getProductName();
            string cname = ordrers[i]->getProductDetails()->getCompanyName();
            int price = ordrers[i]->getProductDetails()->getPrice();
            int salesNum = ordrers[i]->getProductDetails()->getSalesNum();
            // float avgPurchaseEvaluation = o->calAvgPurchaseEvaluation(pname, wholeOrderArr);

            ui->printLine(sellerId, pname, cname, price, salesNum);
        }
    }
};

#endif