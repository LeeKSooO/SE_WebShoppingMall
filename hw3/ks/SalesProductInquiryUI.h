#pragma once
#include "../entities/Member.h"

class SalesProductInquiryUI {
private:
public:
	void startInterface(Member* member) {
		member->listProductsOnSale();
	}
};
