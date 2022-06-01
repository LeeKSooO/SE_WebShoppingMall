#include <iostream>
#include <fstream>
#include <tuple>
#include "../entities/Order.h"

using namespace std;

#ifndef EvaluatePurchaseUI_H
#define EvaluatePurchaseUI_H

// 구매 만족도 평가 바운더리 클래스
class EvaluatePurchaseUI
{
private:
public:
    tuple<string, int> inputPurchaseEvaluation()
    {
        string productName;
        int purchaseEvaluation;
        ifstream fin("input.txt", ios::app);
        fin >> productName >> purchaseEvaluation;
        return make_tuple(productName, purchaseEvaluation);
    }

    void printTitle()
    {
        ofstream fout("output.txt", ios::app);
        fout << "4.4. 상품 구매만족도 평가\n";
        fout.close();
    }

    void outputInterface(Order *order)
    {
        string sellerId = order->getSellerId();
        string productName = order->getProductName();
        int purchaseEvaluation = order->getPurchaseEvaluation();

        ofstream fout("output.txt", ios::app);
        fout << "> " << sellerId << " " << productName << " " << purchaseEvaluation << "\n";
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