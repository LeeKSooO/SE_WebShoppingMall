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

    OrderCollection *o = member->getOrderCollection();
    Order **orderList = o->getOrders();
    int num = o->getNumOrders();

    ui->printEvaluatePurchaseTitle();

    for (int i = 0; i < num; i++)
    {
        if (orderList[i]->getProductName() == productName)
        {
            savePurchaseEvaluation(orderList[i], purchaseEvaluation);
            string sellerId = orderList[i]->getSellerId();
            string productName = orderList[i]->getProductName();
            int purchaseEvaluation = orderList[i]->getPurchaseEvaluation();
            ui->printPurchaseEvaluation(sellerId, productName, purchaseEvaluation);
        }
    }

    ui->printEvaluatePurchaseEndl();
}

void EvaluatePurchase::savePurchaseEvaluation(Order *order, int purchaseEvaluation)
{
    order->setPurchaseEvaluation(purchaseEvaluation);
}

void EvaluatePurchaseUI::printEvaluatePurchaseTitle()
{
    ofstream fout("output.txt", ios::app);
    fout << "4.4. 상품 구매만족도 평가\n";
    fout.close();
}

void EvaluatePurchaseUI::printPurchaseEvaluation(string sellerId, string productName, int purchaseEvaluation)
{

    ofstream fout("output.txt", ios::app);
    fout << "> " << sellerId << " " << productName << " " << purchaseEvaluation << "\n";
    fout.close();
}

void EvaluatePurchaseUI::printEvaluatePurchaseEndl()
{
    ofstream fout("output.txt", ios::app);
    fout << "\n";
    fout.close();
}