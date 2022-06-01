#include <iostream>
#include <fstream>
#include "../comm.h"
#include "../entities/Product.h"
#include "../entities/Member.h"
#include "EvaluatePurchase.h"
#include "EvaluatePurchaseUI.h"
using namespace std;

EvaluatePurchase::EvaluatePurchase(Member *member, string productName, int purchaseEvaluation)
{
    EvaluatePurchaseUI *ui = new EvaluatePurchaseUI();

    // order collection에 호출
    OrderCollection *o = member->getOrderCollection();
    Order **orderList = o->getOrders();
    int num = o->getNumOrders();

    ui->printTitle();

    // 반복문 돌면서 상품명 일치하는 오더에 구매만족도 평가
    for (int i = 0; i < num; i++)
    {
        if (orderList[i]->getProductName() == productName)
        {
            savePurchaseEvaluation(orderList[i], purchaseEvaluation);
            ui->outputInterface(orderList[i]);
        }
    }

    ui->printEndl();
}

void EvaluatePurchase::savePurchaseEvaluation(Order *order, int purchaseEvaluation)
{
    order->setPurchaseEvaluation(purchaseEvaluation);
}

void EvaluatePurchaseUI::printTitle()
{
    ofstream fout("output.txt", ios::app);
    fout << "4.4. 상품 구매만족도 평가\n";
    fout.close();
}

void EvaluatePurchaseUI::outputInterface(Order *order)
{
    string sellerId = order->getSellerId();
    string productName = order->getProductName();
    int purchaseEvaluation = order->getPurchaseEvaluation();

    ofstream fout("output.txt", ios::app);
    fout << "> " << sellerId << " " << productName << " " << purchaseEvaluation << "\n";
    fout.close();
}

void EvaluatePurchaseUI::printEndl()
{
    ofstream fout("output.txt", ios::app);
    fout << "\n";
    fout.close();
}