#include <iostream>
#include <fstream>
#include "../comm.h"
#include "../entities/Product.h"
#include "../entities/Member.h"
#include "ViewSoldHistory.h"
#include "ViewSoldHistoryUI.h"
using namespace std;

ViewSoldHistory::ViewSoldHistory(Member *member)
{
    // product collection에 호출
    ProductCollection *p = member->getProductCollection();
    Product **soldProductList = p->getSoldProducts();
    int num = p->getNumSoldProducts();

    ViewSoldHistoryUI *ui = new ViewSoldHistoryUI();

    ui->printTitle();

    if (num > 0)
        for (int i = 0; i < num; i++)
        {
            string productName = soldProductList[i]->getProductName();
            string companyName = soldProductList[i]->getCompanyName();
            int price = soldProductList[i]->getPrice();
            int salesNum = soldProductList[i]->getSalesNum();
            float avgPurchaseEvaluation = calAvgPurchaseEvaluation(soldProductList[i]->getSellerId(), soldProductList[i]->getProductName());
            ui->printSoldProduct(productName, companyName, price, salesNum, avgPurchaseEvaluation);
        }

    ui->printEndl();
}

void ViewSoldHistoryUI::printTitle()
{
    ofstream fout("output.txt", ios::app);
    fout << "3.3. 판매 완료 상품 조회\n";
    fout.close();
}

void ViewSoldHistoryUI::printSoldProduct(string productName, string companyName, int price, int salesNum, float avgPurchaseEvaluation)
{
    ofstream fout("output.txt", ios::app);
    fout << "> " << productName << " " << companyName << " " << price << " " << salesNum << " " << round(avgPurchaseEvaluation) << "\n";
    fout.close();
}

void ViewSoldHistoryUI::printEndl()
{
    ofstream fout("output.txt", ios::app);
    fout << "\n";
    fout.close();
}