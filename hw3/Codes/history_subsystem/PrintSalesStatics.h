#include <iostream>
#include "../entities/Product.h"

using namespace std;

#ifndef PrintSalesStatics_H
#define PrintSalesStatics_H

class PrintSalesStatics
{
private:
	Member *member;

public:
	PrintSalesStatics(Member *member);
	int calTotalPrice(int price, int salesNum);
};

#endif