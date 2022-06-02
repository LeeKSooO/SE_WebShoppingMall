#include <iostream>
#include "../entities/Order.h"

using namespace std;

#ifndef EvaluatePurchaseUI_H
#define EvaluatePurchaseUI_H

class EvaluatePurchaseUI
{
private:
public:
    void inputEvalutePurchase(string productName, int purchaseEvaluation);
    void printEvaluatePurchaseTitle();
    void printPurchaseEvaluation(string sellerId, string productName, int purchaseEvaluation);
    void printEvaluatePurchaseEndl();
};

#endif