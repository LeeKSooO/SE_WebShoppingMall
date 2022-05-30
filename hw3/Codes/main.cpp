#include <iostream>
#include <fstream>
#include <cstdio>
#include "comm.h"
#include "entities/Member.h"
#include "entities/Product.h"
using namespace std;

void doTask();
void program_exit();

int wholeMemberNum = 0;
Member *wholeMemberArr[WHOLE_MEM_NUM];
int wholeProductNum = 0;
Product *wholeProductArr[WHOLE_PRODUCT_NUM];

int main()
{

  doTask();

  return 0;
}

void doTask()
{
  int menuLevel1, menuLevel2;
  int isProgramExit = 0;
  string str;

  ifstream fin("input.txt");
  ofstream fout("output.txt");

  while (!isProgramExit)
  {
    fin >> menuLevel1 >> menuLevel2;
    cout << menuLevel1 << " " << menuLevel1 << endl;

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
        cout << "회원가입";
        fout << "회원가입";
      }
      // 1.2. 회원탈퇴
      case 2:
      {
      }
      }
    }
    // 2. 회원 관리 - 로그인, 로그아웃
    case 2:
    {
      switch (menuLevel2)
      {
      // 2.1. 로그인
      case 1:
      {
      }
      // 2.2. 로그아웃
      case 2:
      {
      }
      }
    }
    // 3. 상품 판매 관리
    case 3:
    {
      switch (menuLevel2)
      {
      // 3.1. 판매 의류 등록
      case 1:
      {
        //판매의류등록테스트코드
      }
      // 3.2. 등록 상품 조회
      case 2:
      {
      }
      // 3.3. 판매 완료 상품 조회
      case 3:
      {
      };
      }
    }
    // 4. 상품 구매 관리
    case 4:
    {
      switch (menuLevel2)
      {
      // 4.1. 상품 정보 검색
      case 1:
      {
      }
      // 4.2. 상품 구매
      case 2:
      {
      }
      // 4.3. 상품 구매 내역 조회
      case 3:
      {
      }
      // 4.4. 상품 구매만족도 평가
      case 4:
      {
      }
      }
    }
    // 5. 통계 내역
    case 5:
    {
      switch (menuLevel2)
      {
      // 5.1. 판매 상품 통계
      case 1:
      {
      }
      }
    }
    // 6. 종료
    case 6:
    {
      switch (menuLevel2)
      {
      // 6.1. 종료
      case 1:
      {
        // program_exit();
        isProgramExit = 1;
        break;
      }
      }
    }
    }
  }

  return;
}

// void program_exit()
// {
//   // 뭐넣어야되지..?

//   return;
// }