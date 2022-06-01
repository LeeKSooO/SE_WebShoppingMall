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
            ui->printLine(soldProductList[i]);
        }

    ui->printEndl();
}

void ViewSoldHistoryUI::printTitle()
{
    ofstream fout("output.txt", ios::app);
    fout << "3.3. 판매 완료 상품 조회\n";
    fout.close();
}

void ViewSoldHistoryUI::printLine(Product *product)
{
    string pname = product->getProductName();
    string cname = product->getCompanyName();
    int price = product->getPrice();
    int salesNum = product->getSalesNum();
    float avgPurchaseEvaluation = calAvgPurchaseEvaluation(product->getSellerId(), product->getProductName());

    ofstream fout("output.txt", ios::app);
    fout << "> " << pname << " " << cname << " " << price << " " << salesNum << " " << round(avgPurchaseEvaluation) << "\n";
    fout.close();
}

void ViewSoldHistoryUI::printEndl()
{
    ofstream fout("output.txt", ios::app);
    fout << "\n";
    fout.close();
}