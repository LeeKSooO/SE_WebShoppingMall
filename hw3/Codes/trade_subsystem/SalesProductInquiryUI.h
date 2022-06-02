#pragma once
#include <iostream>
#include <string>
#include "../entities/Member.h"
#include "../entities/Product.h"
#include "../comm.h"
using namespace std;
class SalesProductInquiryUI
{
private:
public:
	void startInterface(Member *member)
	{
		member->listProductsOnSale();
	}
};
