#include <iostream>
#include <fstream>
#include "../comm.h"
#include "../entities/Product.h"
#include "../entities/Member.h"
#include "../collections/ProductCollection.h"
#include "PrintSalesStatics.h"
#include "PrintSalesStaticsUI.h"
using namespace std;

PrintSalesStatics::PrintSalesStatics(Member *member)
{
    ProductCollection *p = member->getProductCollection();
    Product **soldProductList = p->getSoldProducts();
    int num = p->getNumSoldProducts();

    PrintSalesStaticsUI *ui = new PrintSalesStaticsUI();

    ui->printPrintSalesStaticsTitle();

    if (num > 0)
        for (int i = 0; i < num; i++)
        {
            int totalPrice = calTotalPrice(soldProductList[i]->getPrice(), soldProductList[i]->getSalesNum());
            float avgPurchaseEvaluation = calAvgPurchaseEvaluation(member->getMemberId(), soldProductList[i]->getProductName());
            ui->printSalesStatics(soldProductList[i]->getProductName(), totalPrice, avgPurchaseEvaluation);
        }

    ui->printPrintSalesStaticsEndl();
}

int PrintSalesStatics::calTotalPrice(int price, int salesNum)
{
    return price * salesNum;
}

void PrintSalesStaticsUI::printPrintSalesStaticsTitle()
{
    ofstream fout("output.txt", ios::app);
    fout << "5.1. 판매 상품 통계\n";
    fout.close();
}

void PrintSalesStaticsUI::printSalesStatics(string productName, int totalPrice, float avgPurchaseEvaluation)
{
    ofstream fout("output.txt", ios::app);
    fout << "> " << productName << " " << totalPrice << " " << avgPurchaseEvaluation << "\n";
    fout.close();
}

void PrintSalesStaticsUI::printPrintSalesStaticsEndl()
{
    ofstream fout("output.txt", ios::app);
    fout << "\n";
    fout.close();
}