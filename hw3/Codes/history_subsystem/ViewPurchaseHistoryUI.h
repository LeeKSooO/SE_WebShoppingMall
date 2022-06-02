#include <iostream>
#include <fstream>
#include <math.h>
#include "../comm.h"
#include "../entities/Order.h"

using namespace std;

#ifndef ViewPurchaseHistoryUI_H
#define ViewPurchaseHistoryUI_H

class ViewPurchaseHistoryUI
{
private:
public:
    void printViewPurchaseHistoryTitle();
    void printPurchasedProduct(string sellerId, string productName, string companyName, int price, int leftNum, float avgPurchaseEvaluation);
    void printViewPurchaseHistoryEndl();
};

#endif