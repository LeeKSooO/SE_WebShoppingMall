﻿#include <iostream>
#include <fstream>
#include "Member.h"
#include "basic.h"
#include "BoundaryClasses.h"
#include "ControlClasses.h"



using namespace std;

void doTask();
void program_exit();



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
                string name;
                string rRN;
                string Id;
                string Pw;
                fin >> name >> rRN >> Id >> Pw;
                SignUp* si = new SignUp(name, rRN, Id, Pw);
                break;
            }
            // 1.2. 회원탈퇴
            case 2:
            {
                Withdraw* wd = new Withdraw();
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
                LogIn* li = new LogIn(memberId, memberPw);
                break;
            }
            // 2.2. 로그아웃
            case 2:
            {
                LogOut* lo = new LogOut();
                break;
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
                break;//판매의류등록테스트코드
            }
            // 3.2. 등록 상품 조회
            case 2:
            {
                break;
            }
            // 3.3. 판매 완료 상품 조회
            case 3:
            {
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
                break;
            }
            // 4.4. 상품 구매만족도 평가
            case 4:
            {
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