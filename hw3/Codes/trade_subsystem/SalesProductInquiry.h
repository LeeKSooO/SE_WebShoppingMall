#pragma once
#include "../entities/Member.h"
#include "SalesProductInquiryUI.h"

class SalesProductInquiry {
public:
	SalesProductInquiry(Member* member) {
		SalesProductInquiryUI* ui = new SalesProductInquiryUI();
		ui->startInterface(member);
	}
};
