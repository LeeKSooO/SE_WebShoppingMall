#pragma once
#include "Member.h"

class SearchProductUI {
	string productName;
public:
	SearchProductUI(Product* productArr, string productName);
	void startInterface();
	void inputProductName(string productName);
};