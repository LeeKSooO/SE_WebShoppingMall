#include <iostream>
#include "../entities/Product.h"
#include "../entities/Member.h"
#include "ViewSoldHistoryUI.h"

using namespace std;

#ifndef ViewSoldHistory_H
#define ViewSoldHistory_H

// 판매 완료 상품 조회 컨트롤 클래스
class ViewSoldHistory
{
private:
	Member *member;

public:
	ViewSoldHistory(Member *member);
};

#endif