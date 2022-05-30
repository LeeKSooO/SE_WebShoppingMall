#include <iostream>
#include <fstream>

#include "../entities/Product.h"

using namespace std;

#ifndef ViewSoldHistoryUI_H
#define ViewSoldHistoryUI_H
// 판매 완료 상품 조회 바운더리 클래스
class ViewSoldHistoryUI
{
private:
public:
    // void startInterface(Product soldProudcts);
    void printLine(Product *product)
    {
        string pname = product->getProductName();
        string cname = product->getCompanyName();
        int price = product->getPrice();
        int salesNum = product->getSalesNum();

        ofstream fout("./output.txt");
        fout << "3.3. 판매 완료 상품 조회\n> " << pname << " " << cname << " " << price << " " << salesNum << "\n\n";
        fout.close();
    }
};

#endif