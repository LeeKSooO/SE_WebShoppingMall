#include <iostream>
#include <string>
#include "../comm.h"
#include "../entities/Order.h"

using namespace std;

#ifndef OrderCollection_H
#define OrderCollection_H

// 프로덕트 컬렉션 클래스
class OrderCollection
{
private:
  int numOrders = 0;       // 구매 수
  Order *orders[100] = {}; // 판매 완료 상품 포인터 배열

public:
  Order **getOrders()
  {
    return this->orders;
  } // 구매 포인터 배열 가져오기
  int getNumOrders() { return this->numOrders; }
  void createOrder(Order *order)
  {
    this->orders[(this->numOrders)++] = order;
  }

  float calAvgPurchaseEvaluation(string productName, Order *wholeOrderArr)
  {
    float sum = 0;
    int numPurchaseEvals = 0;
    for (int i = 0; i < 1; i++)
    {
      if (wholeOrderArr[i].getProductName() == productName)
      {
        sum += wholeOrderArr[i].getPurchaseEvaluation();
        numPurchaseEvals++;
      }
    }
    return sum / numPurchaseEvals;
  }
};

#endif
