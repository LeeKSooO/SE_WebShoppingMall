#pragma once
#include "SearchProductUI.h"

class SearchProduct {
private:
public:
	SearchProduct();
	void searchProductName(string productName);
	void showProductDetails();
};


void SearchProduct::searchProductName(string productName)
{
	//(sizeof(wholeProductArr) / sizeof(Product*))
	
	/*
	for (int i = 0; i < 2 ; i++) {
		if ((wholeProductArr[i]->getProductName()) == productName) {
			cout << "goodgdgdggogodgodgodogdo" << endl;
		}
	}
	*/
}

void showProductDetails() {
	//productArr[0].getProductDetails()
}

