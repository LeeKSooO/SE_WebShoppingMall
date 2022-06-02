#include <iostream>
#include "../entities/Product.h"
#include "../entities/Member.h"
#include "ViewSoldHistoryUI.h"

using namespace std;

#ifndef ViewSoldHistory_H
#define ViewSoldHistory_H

class ViewSoldHistory
{
private:
	Member *member;

public:
	ViewSoldHistory(Member *member);
};

#endif