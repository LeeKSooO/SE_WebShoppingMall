#include <iostream>
#include "../entities/Product.h"
#include "../entities/Member.h"

using namespace std;

#ifndef ViewPurchaseHistory_H
#define ViewPurchaseHistory_H

class ViewPurchaseHistory
{
private:
	Member *member;

public:
	ViewPurchaseHistory(Member *);
};

#endif