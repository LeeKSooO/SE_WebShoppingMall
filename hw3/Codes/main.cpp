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
#include "member_subsystem/SignUp.h"
#include "member_subsystem/LogIn.h"
#include "member_subsystem/LogOut.h"
#include "member_subsystem/Withdraw.h"
#include "trade_subsystem/AddProduct.h"
#include "trade_subsystem/PurchaseProduct.h"
#include "trade_subsystem/SalesProductInquiry.h"
#include "trade_subsystem/SearchProduct.h"

using namespace std;

void doTask();
void program_exit();

static Member *wholeMemberArr[WHOLE_MEM_NUM];
static Product *wholeProductArr[WHOLE_PRODUCT_NUM];
static Order *wholeOrderArr[WHOLE_ORDER_NUM];
int searchPoint = 0;
// login 한 멤버 저장
// Member nowLogIn;

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
        string name;
        string rRN;
        string Id;
        string Pw;
        fin >> name >> rRN >> Id >> Pw;
        // fout << name << rRN << Id << Pw << endl;
        SignUp *si = new SignUp(wholeMemberArr, name, rRN, Id, Pw);
        break;
      }
      // 1.2. 회원탈퇴
      case 2:
      {
        Withdraw *wd = new Withdraw(wholeMemberArr, wholeMemberArr[wholeMemIndex]);
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
        string memberId;
        string memberPw;
        fin >> memberId >> memberPw;
        LogIn *li = new LogIn(wholeMemberArr, memberId, memberPw);
        break;
      }
      // 2.2. 로그아웃
      case 2:
      {
        LogOut *lo = new LogOut(wholeMemberArr[wholeMemIndex]);
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
        string productName, companyName;
        int price, salesNum;
        fin >> productName >> companyName >> price >> salesNum;

        AddProduct *addProduct = new AddProduct(wholeMemberArr, wholeProductArr, productName, companyName, price, salesNum);
        break;
      }
      // 3.2. 등록 상품 조회
      case 2:
      {
        SalesProductInquiry *salesProductInquiry = new SalesProductInquiry(wholeMemberArr[wholeMemIndex]);
        break;
      }
      // 3.3. 판매 완료 상품 조회
      case 3:
      {
        ViewSoldHistory *viewSoldHistory = new ViewSoldHistory(wholeMemberArr[wholeMemIndex]);
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
        string productName;
        fin >> productName;

        SearchProduct *searchProduct = new SearchProduct(wholeProductArr, productName);
        break;
      }
      // 4.2. 상품 구매
      case 2:
      {
        PurchaseProduct *purchaseProduct = new PurchaseProduct(wholeMemberArr, wholeProductArr, wholeOrderArr);
        break;
      }
      // 4.3. 상품 구매 내역 조회
      case 3:
      {
        ViewPurchaseHistory *viewPurchaseHistory = new ViewPurchaseHistory(wholeMemberArr[wholeMemIndex]);
        break;
      }
      // 4.4. 상품 구매만족도 평가
      case 4:
      {
        string productName;
        int purchaseEvaluation;
        fin >> productName >> purchaseEvaluation;
        EvaluatePurchase *evaluatePurchase = new EvaluatePurchase(wholeMemberArr[wholeMemIndex], productName, purchaseEvaluation);
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
        PrintSalesStatics *printSalesStatics = new PrintSalesStatics(wholeMemberArr[wholeMemIndex]);
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

// cd hw3/Codes
// g++ main.cpp entities/Member.cpp entities/Order.cpp entities/Product.cpp history_subsystem/EvaluatePurchase.cpp history_subsystem/PrintSalesStatics.cpp history_subsystem/ViewPurchaseHistory.cpp history_subsystem/ViewSoldHistory.cpp collections/ProductCollection.cpp collections/OrderCollection.cpp -o main