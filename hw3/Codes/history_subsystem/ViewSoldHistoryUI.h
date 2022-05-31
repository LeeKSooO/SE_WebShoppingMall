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

        //테스트용
        int leftNum = product->getLeftNum();

        ofstream fout("output.txt", ios::app);
        fout << "> " << pname << " " << cname << " " << price << " " << salesNum << " " << leftNum << "\n";
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