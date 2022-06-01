#include <iostream>
#include "../entities/Product.h"

using namespace std;

#ifndef PrintSalesStatics_H
#define PrintSalesStatics_H

// 판매 통계 출력 컨트롤 클래스
class PrintSalesStatics
{
private:
	Member *member;

public:
	PrintSalesStatics(Member *member);
	int calTotalPrice(int price, int salesNum);
};

#endif