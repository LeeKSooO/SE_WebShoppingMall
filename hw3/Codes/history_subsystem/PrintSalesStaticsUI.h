#include <iostream>
#include <fstream>

#include "../entities/Product.h"

using namespace std;

#ifndef PrintSalesStaticsUI_H
#define PrintSalesStaticsUI_H

class PrintSalesStaticsUI
{
private:
public:
    void printPrintSalesStaticsTitle();
    void printSalesStatics(string productName, int totalPrice, float avgPurchaseEvaluation);
    void printPrintSalesStaticsEndl();
};

#endif