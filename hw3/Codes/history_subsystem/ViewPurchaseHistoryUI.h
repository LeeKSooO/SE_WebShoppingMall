#include <iostream>
#include <fstream>
#include <math.h>
#include "../comm.h"
#include "../entities/Order.h"

using namespace std;

#ifndef ViewPurchaseHistoryUI_H
#define ViewPurchaseHistoryUI_H
// 구매 내역 조회 바운더리 클래스
class ViewPurchaseHistoryUI
{
private:
public:
    // void startInterface(Order orders[]);
    void printTitle();
    void printLine(Product *);
    void printEndl();
};

#endif