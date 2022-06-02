#include <iostream>
#include <fstream>
#include <math.h>
#include "../comm.h"
#include "../entities/Product.h"

using namespace std;

#ifndef ViewSoldHistoryUI_H
#define ViewSoldHistoryUI_H

class ViewSoldHistoryUI
{
private:
public:
    void printTitle();
    void printSoldProduct(string productName, string companyName, int price, int salesNum, float avgPurchaseEvaluation);
    void printEndl();
};

#endif