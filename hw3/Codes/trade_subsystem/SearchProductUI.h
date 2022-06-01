#pragma once
#include "Member.h"
#include "Product.h"
using namespace std;

class SearchProductUI {
	string productName;
	Product** product;
public:
	SearchProductUI(Product** wholeProductArr, string productName) {
		product = wholeProductArr;

		for (int i = 0; i < (sizeof(wholeProductArr) / sizeof(Product*)); i++) {
			if ((wholeProductArr[i]->getProductName()) == productName) {
				product = wholeProductArr;
				//
			}

		}

		void search();
		void startInterface();
	}
};