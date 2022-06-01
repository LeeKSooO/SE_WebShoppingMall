#include <iostream>
#include <fstream>
#include <math.h>
#include "../comm.h"
#include "../entities/Product.h"

using namespace std;

#ifndef ViewSoldHistoryUI_H
#define ViewSoldHistoryUI_H
// 판매 완료 상품 조회 바운더리 클래스
class ViewSoldHistoryUI
{
private:
public:
    void startInterface(Product soldProudcts[]);
    void printTitle()
    {
        ofstream fout("output.txt", ios::app);
        fout << "3.3. 판매 완료 상품 조회\n";
        fout.close();
    }
    void printLine(Product *product)
    {
        string pname = product->getProductName();
        string cname = product->getCompanyName();
        int price = product->getPrice();
        int salesNum = product->getSalesNum();
        float avgPurchaseEvaluation = calAvgPurchaseEvaluation(product->getSellerId(), product->getProductName());

        ofstream fout("output.txt", ios::app);
        fout << "> " << pname << " " << cname << " " << price << " " << salesNum << " " << round(avgPurchaseEvaluation) << "\n";
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