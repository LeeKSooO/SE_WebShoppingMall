#pragma once
#include "Member.h"

class SalesProductInquiryUI {
private:
public:
	void startInterface(Member* member) {
		member->listProductsOnSale();
	}
};
