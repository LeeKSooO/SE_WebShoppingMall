#include <iostream>
#include <fstream>

#include "../entities/Product.h"

using namespace std;

#ifndef PrintSalesStaticsUI_H
#define PrintSalesStaticsUI_H
// 판매 상품 통계 바운더리 클래스
class PrintSalesStaticsUI
{
private:
public:
    void startInterface(Product soldProudcts[]);
    void printTitle()
    {
        ofstream fout("output.txt", ios::app);
        fout << "5.1. 판매 상품 통계\n";
        fout.close();
    }
    void printLine(string productName, int totalPrice, float avgPurchaseEvaluation)
    {
        ofstream fout("output.txt", ios::app);
        fout << "> " << productName << " " << totalPrice << " " << avgPurchaseEvaluation << "\n";
        fout.close();
    }
    void printEndl()
    {
        ofstream fout("output.txt", ios::app);
        fout << "\n";
        fout.close();
    }
};

#endif