#include <iostream>
#include "Product.h"

using namespace std;

// 판매 완료 상품 조회 바운더리 클래스
class EvaluatePurchaseUI
{
private:

public:
	void startInterface();
  void inputEvaluatePurchase(string productName, int purchaseEvaluation);
};

// 판매 완료 상품 조회 컨트롤 클래스
class EvaluatePurchase
{
private:

public:
	void savePurchaseEvaluation(string productName, int purchaseEvaluation);
};
