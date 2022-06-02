#include <iostream>
#include <string>
#include <tuple>
#include "../entities/Product.h"
#include "../entities/Member.h"
#include "../collections/OrderCollection.h"
#include "EvaluatePurchaseUI.h"

using namespace std;

#ifndef EvaluatePurchase_H
#define EvaluatePurchase_H

class EvaluatePurchase
{
private:
public:
	EvaluatePurchase(Member *member, string productName, int purchaseEvaluation);
	void savePurchaseEvaluation(Order *order, int purchaseEvaluation);
};

#endif