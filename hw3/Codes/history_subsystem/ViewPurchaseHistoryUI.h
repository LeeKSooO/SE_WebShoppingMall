#include <iostream>
#include <fstream>
#include "../entities/Product.h"
#include "../collections/OrderCollection.h"

using namespace std;

#ifndef ViewPurchaseHistoryUI_H
#define ViewPurchaseHistoryUI_H

// 판매 완료 상품 조회 바운더리 클래스
class ViewPurchaseHistoryUI
{
private:
public:
	// void startInterface(Product purchasedProducts[]);
	void printLine(string sellerId, string pname, string cname, int price, int salesNum)
	{
		ofstream fout("output.txt");
		fout << sellerId << " " << pname << " " << cname << " " << price << " " << salesNum << " "
			 << "\n";
		fout.close();
	}
};

#endif