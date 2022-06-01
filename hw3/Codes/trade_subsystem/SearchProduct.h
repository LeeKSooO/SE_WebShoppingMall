#pragma once
#include "Product.h"
#include "SearchProductUI.h"

class SearchProduct
{
private:
	Product *product;
	string pName;

public:
	SearchProduct(Product **wholeProductArr)
	{

		// control class���� ��ǰ�� fin
		string pName = "hat";
		SearchProductUI *ui = new SearchProductUI(wholeProductArr, pName);

		/*
		for (int i = 0; i < (sizeof(wholeProductArr) / sizeof(Product*)); i++) {
			if ((wholeProductArr[i]->getProductName()) == pName) {
				product = wholeProductArr[i];
				cout << "goodgdgdggogodgodgodogdo" << endl;
			}
		}
		*/
		// ui->search();
		// ui->startInterface();
	}

	// Product* searchProductName(Product** wholeProductArr, string productName);
	void get();
};