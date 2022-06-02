#pragma once
#include <iostream>
#include <string>
#include "../entities/Member.h"
#include "../entities/Product.h"
#include "../comm.h"
#include "SalesProductInquiryUI.h"
using namespace std;
class SalesProductInquiry {
public:
	SalesProductInquiry(Member* member) {
		SalesProductInquiryUI* ui = new SalesProductInquiryUI();
		ui->startInterface(member);
	}
};
