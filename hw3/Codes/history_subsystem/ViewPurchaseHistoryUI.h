#include <iostream>
#include <fstream>
#include <math.h>
#include "../comm.h"
#include "../entities/Order.h"

using namespace std;

#ifndef ViewPurchaseHistoryUI_H
#define ViewPurchaseHistoryUI_H
// 구매 내역 조회 바운더리 클래스
class ViewPurchaseHistoryUI
{
private:
public:
    void startInterface(Order orders[]);
    void printTitle()
    {
        ofstream fout("output.txt", ios::app);
        fout << "4.3. 상품 구매 내역 조회\n";
        fout.close();
    }
    void printLine(Product *product)
    {
        string sellerId = product->getSellerId();
        string pname = product->getProductName();
        string cname = product->getCompanyName();
        int price = product->getPrice();
        int leftNum = product->getLeftNum();
        float avgPurchaseEvaluation = calAvgPurchaseEvaluation(product->getSellerId(), product->getProductName());

        ofstream fout("output.txt", ios::app);
        fout << "> " << sellerId << " " << pname << " " << cname << " " << price << " " << leftNum << " " << round(avgPurchaseEvaluation) << "\n";
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