#include <iostream>
#include <fstream>

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
    void printLine(Product *product)
    {
        string sellerId = product->getSellerId();
        string pname = product->getProductName();
        string cname = product->getCompanyName();
        int price = product->getPrice();
        int salesNum = product->getSalesNum();
        // TODO: 평균 구매만족도

        ofstream fout("output.txt", ios::app);
        fout << "4.3. 상품 구매 내역 조회\n> " << sellerId << " " << pname << " " << cname << " " << price << " " << salesNum << "\n\n";
        fout.close();
    }
};

#endif