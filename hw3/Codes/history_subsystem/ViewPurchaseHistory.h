#include <iostream>
#include "../entities/Product.h"
#include "../entities/Member.h"

using namespace std;

#ifndef ViewPurchaseHistory_H
#define ViewPurchaseHistory_H

// 구매 내역 조회 컨트롤 클래스
class ViewPurchaseHistory
{
private:
	Member *member;

public:
	Product *viewPurchaseHistory();
	ViewPurchaseHistory(Member *);
};

#endif