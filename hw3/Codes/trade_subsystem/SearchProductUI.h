#include <iostream>
#include <string>
#include "../entities/Member.h"
#include "../entities/Product.h"
#include "../comm.h"
using namespace std;

class SearchProductUI
{
private:
	string pName;

public:
	SearchProductUI(){};
	void choiceProductName();
	void startInterface(Product *product);
};

void SearchProductUI::choiceProductName()
{
}

void SearchProductUI::startInterface(Product *product)
{
	ofstream fout("output.txt", ios::app);

	fout << "4.1. 상품 정보 검색\n";
	fout << "> " << product->getSellerId() << " " << product->getProductName() << " " << product->getCompanyName() << " " << product->getPrice()
		 << " " << product->getSalesNum() << endl;
}