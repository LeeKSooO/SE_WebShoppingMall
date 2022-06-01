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
    // void startInterface(Product soldProudcts[]);
    void printTitle();
    void printLine(string productName, int totalPrice, float avgPurchaseEvaluation);
    void printEndl();
};

#endif