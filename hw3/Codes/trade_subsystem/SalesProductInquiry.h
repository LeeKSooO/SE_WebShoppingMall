#pragma once
#include "Member.h"
#include "SalesProductInquiryUI.h"

class SalesProductInquiry {

public:
	SalesProductInquiry(Member *member) {
		SalesProductInquiryUI* ui = new SalesProductInquiryUI();
		Member* newMember = new Member("ks", "970301", "156-34", "9745");
		ui->startInterface(member);
	}
};
