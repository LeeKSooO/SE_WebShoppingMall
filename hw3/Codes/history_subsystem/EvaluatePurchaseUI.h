#include <iostream>
#include "../entities/Order.h"

using namespace std;

#ifndef EvaluatePurchaseUI_H
#define EvaluatePurchaseUI_H

// 구매 만족도 평가 바운더리 클래스
class EvaluatePurchaseUI
{
private:
public:
    void printTitle();
    void outputInterface(Order *order);
    void printEndl();
};

#endif