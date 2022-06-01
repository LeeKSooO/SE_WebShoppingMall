#include <iostream>
#include <fstream>
#include "../comm.h"
#include "../entities/Product.h"
#include "../entities/Member.h"
#include "ViewPurchaseHistory.h"
#include "ViewPurchaseHistoryUI.h"
using namespace std;

ViewPurchaseHistory::ViewPurchaseHistory(Member *member)
{
    // order collection에 호출
    OrderCollection *o = member->getOrderCollection();
    Order **orderList = o->getOrders();
    int num = o->getNumOrders();

    ViewPurchaseHistoryUI *ui = new ViewPurchaseHistoryUI();

    ui->printTitle();

    if (num > 0)
        for (int i = 0; i < num; i++)
        {
            ui->printLine(orderList[i]->getProduct());
        }

    ui->printEndl();
}

void ViewPurchaseHistoryUI::printTitle()
{
    ofstream fout("output.txt", ios::app);
    fout << "4.3. 상품 구매 내역 조회\n";
    fout.close();
}

void ViewPurchaseHistoryUI::printLine(Product *product)
{
    string sellerId = product->getSellerId();
    string pname = product->getProductName();
    string cname = product->getCompanyName();
    int price = product->getPrice();
    int leftNum = product->getLeftNum();
    float avgPurchaseEvaluation = calAvgPurchaseEvaluation(product->getSellerId(), product->getProductName());

    ofstream fout("output.txt", ios::app);
    fout << "> " << sellerId << " " << pname << " " << cname << " " << price << " " << leftNum << " " << round(avgPurchaseEvaluation) << "\n";
    fout.close();
}

void ViewPurchaseHistoryUI::printEndl()
{
    ofstream fout("output.txt", ios::app);
    fout << "\n";
    fout.close();
}