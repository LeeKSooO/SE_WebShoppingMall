#include <iostream>
#include "Product.h"

using namespace std;

// 판매 통계 출력 바운더리 클래스
class PrintSalesStaticsUI
{
private:

public:
	void startInterface(long long totalPrice, int avgPurchaseEvaluation);
};

// 판매 통계 출력 컨트롤 클래스
class PrintSalesStatics
{
private:

public:
	long long calTotalPrice();
  int calTotalAvgPurchaseSatisfaction();
};
