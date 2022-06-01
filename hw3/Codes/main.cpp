#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include "comm.h"
#include "entities/Member.h"
#include "entities/Product.h"
#include "entities/Order.h"
#include "history_subsystem/ViewSoldHistory.h"
#include "history_subsystem/ViewPurchaseHistory.h"
#include "history_subsystem/EvaluatePurchase.h"
#include "history_subsystem/PrintSalesStatics.h"
using namespace std;

void doTask();
void program_exit();

// int wholeMemberNum = 0;
Member *wholeMemberArr[WHOLE_MEM_NUM];
// int wholeProductNum = 0;
Product *wholeProductArr[WHOLE_PRODUCT_NUM];
// int wholeOrderNum = 0;
Order *wholeOrderArr[WHOLE_ORDER_NUM];

int main()
{

  doTask();

  return 0;
}

void doTask()
{
  char charMenuLevel1, blank, charMenuLevel2;
  int menuLevel1, menuLevel2;
  int isProgramExit = 0;
  string str;

  ifstream fin("input.txt");
  ofstream fout("output.txt");

  while (!isProgramExit)
  {
    fin >> menuLevel1 >> menuLevel2;
    switch (menuLevel1)
    {
    // 1. 회원 관리 - 가입, 탈퇴
    case 1:
    {
      switch (menuLevel2)
      {
      // 1.1. 회원가입
      case 1:
      {
        cout << "1.1. 회원가입\n";
        // wholeMemberArr[wholeMemberNum++] = new Member("hs", "1234", "이한슬", "2202-1111");
        // wholeMemberArr[wholeMemberNum++] = new Member("kc", "5678", "칸초", "3030-1111");

            // wholeProductArr[wholeProductNum++] = new Product("hs", "새우깡", "농심", 1000, 1);
        // wholeProductArr[wholeProductNum++] = new Product("hs", "감자깡", "농담", 1500, 1);
        // wholeProductArr[wholeProductNum++] = new Product("hs", "오징어집", "빙그레", 2000, 1);
        // wholeMemberArr[0]->getProductCollection()->addSoldProduct(wholeProductArr[0]);
        // wholeMemberArr[0]->getProductCollection()->addSoldProduct(wholeProductArr[1]);
        // wholeMemberArr[0]->getProductCollection()->addSoldProduct(wholeProductArr[2]);

        // // 하나 구매했다 가정
        // wholeOrderArr[wholeOrderNum++] = new Order("hs", "감자깡", wholeProductArr[1]);
        // wholeOrderArr[wholeOrderNum++] = new Order("hs", "오징어집", wholeProductArr[2]);
        // wholeOrderArr[wholeOrderNum++] = new Order("hs", "새우깡", wholeProductArr[0]);
        // wholeProductArr[1]->increaseSalesNumAndDecreaseLeftNum();
        // wholeProductArr[2]->increaseSalesNumAndDecreaseLeftNum();
        // wholeProductArr[0]->increaseSalesNumAndDecreaseLeftNum();
        // wholeMemberArr[0]->getOrderCollection()->addOrder(wholeOrderArr[0]);
        // wholeMemberArr[0]->getOrderCollection()->addOrder(wholeOrderArr[1]);
        // wholeMemberArr[0]->getOrderCollection()->addOrder(wholeOrderArr[2]);

        // wholeMemberArr[0]->getProductCollection()->addSoldProduct(*(wholeProductArr[1]));
        break;

        // wholeMemberNum++;
      }
      // 1.2. 회원탈퇴
      case 2:
      {
        break;
      }
      }
      break;
    }
    // 2. 회원 관리 - 로그인, 로그아웃
    case 2:
    {
      switch (menuLevel2)
      {
      // 2.1. 로그인
      case 1:
      {
        break;
      }
      // 2.2. 로그아웃
      case 2:
      {
        break;
      }
      }
      break;
    }
    // 3. 상품 판매 관리
    case 3:
    {
      switch (menuLevel2)
      {
      // 3.1. 판매 의류 등록
      case 1:
      {
        break;
      }
      // 3.2. 등록 상품 조회
      case 2:
      {
        break;
      }
      // 3.3. 판매 완료 상품 조회
      case 3:
      {
        cout << "3.3. 판매 완료 상품 조회\n";
        ViewSoldHistory *viewSoldHistory = new ViewSoldHistory(wholeMemberArr[0]);
        break;
      }
      }
      break;
    }
    // 4. 상품 구매 관리
    case 4:
    {
      switch (menuLevel2)
      {
      // 4.1. 상품 정보 검색
      case 1:
      {
        break;
      }
      // 4.2. 상품 구매
      case 2:
      {
        break;
      }
      // 4.3. 상품 구매 내역 조회
      case 3:
      {
        cout << "4.3. 상품 구매 내역 조회\n";
        ViewPurchaseHistory *viewPurchaseHistory = new ViewPurchaseHistory(wholeMemberArr[0]);
        break;
      }
      // 4.4. 상품 구매만족도 평가
      case 4:
      {
        cout << "4.4. 상품 구매만족도 평가\n";
        string productName;
        int purchaseEvaluation;
        fin >> productName >> purchaseEvaluation;
        EvaluatePurchase *evaluatePurchase = new EvaluatePurchase(wholeMemberArr[0], productName, purchaseEvaluation);
        break;
      }
      }
      break;
    }
    // 5. 통계 내역
    case 5:
    {
      switch (menuLevel2)
      {
      // 5.1. 판매 상품 통계
      case 1:
      {
        cout << "5.1. 판매 상품 통계\n";
        PrintSalesStatics *printSalesStatics = new PrintSalesStatics(wholeMemberArr[0]);
        break;
      }
      }
      break;
    }
    // 6. 종료
    case 6:
    {
      switch (menuLevel2)
      {
      // 6.1. 종료
      case 1:
      {
        cout << "6.1. 종료\n";
        program_exit();
        isProgramExit = 1;
        break;
      }
      }
      break;
    }
    }
  }

  return;
}

void program_exit()
{
  ofstream fout("output.txt", ios::app);
  fout << "6.1. 종료\n";
  fout.close();

  return;
}

float calAvgPurchaseEvaluation(string sellerId, string productName)
{
  int sum = 0;
  int numPurchaseEvaluation = 0;
  for (int i = 0; i < wholeOrderNum; i++)
  {
    int purchaseEvaluation = (*wholeOrderArr[i]).getPurchaseEvaluation();
    if (((*wholeOrderArr[i]).getSellerId() == sellerId) && ((*wholeOrderArr[i]).getProductName() == productName))
    {
      sum += purchaseEvaluation;
      numPurchaseEvaluation++;
    }
  }

  float result = (float)sum / numPurchaseEvaluation;
  return round(result);
}