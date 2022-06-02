#include <iostream>
#include <fstream>
#include <string>
#include "Member.h"
#include "Product.h"
#include "AddProduct.h"
#include "AddProduct.h"
#include "SalesProductInquiry.h"
#include "SearchProduct.h"
#include "PurchaseProduct.h"
#include "SignUp.h"
#include "withdraw.h"
#include "Login.h"
#include "LogOut.h"
#include "comm.h"

using namespace std;

#define WHOLE_MEM_NUM 100
#define WHOLE_PRODUCT_NUM 1000
#define WHOLE_ORDER_NUM 1000

#ifndef WHOLE_NUM
#define WHOLE_NUM
int wholeMemberNum = 0;
int wholeProductNum = 0;
int wholeOrderNum = 0;
#endif


void doTask();
void program_exit();

Member* wholeMemberArr[WHOLE_MEM_NUM];
Product* wholeProductArr[WHOLE_PRODUCT_NUM];
Order* wholeOrderArr[WHOLE_ORDER_NUM];

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

    ifstream fin("C:\\Users\\rtrt0\\OneDrive\\바탕 화면\\textfile\\input.txt");
    ofstream fout("C:\\Users\\rtrt0\\OneDrive\\바탕 화면\\textfile\\output.txt");

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
                string name;
                string rRN;
                string Id;
                string Pw;
                fin >> name >> rRN >> Id >> Pw;
                // fout << name << rRN << Id << Pw << endl;
                SignUp* si = new SignUp(wholeMemberArr, name, rRN, Id, Pw);
                break;
            }
            // 1.2. 회원탈퇴
            case 2:
            {
                Withdraw* wd = new Withdraw(wholeMemberArr, wholeMemberArr[wholeMemIndex]);
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
                cout << "2.1. 로그인 " << memberId << " " << memberPw << endl;
                LogIn* li = new LogIn(wholeMemberArr, memberId, memberPw);
                break;
            }
            // 2.2. 로그아웃
            case 2:
            {
                LogOut* lo = new LogOut(wholeMemberArr[wholeMemIndex]);
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

                AddProduct* addProduct = new AddProduct(wholeMemberArr, wholeProductArr, productName, companyName, price, salesNum);
                break;
            }
            // 3.2. 등록 상품 조회
            case 2:
            {
                SalesProductInquiry* salesProductInquiry = new SalesProductInquiry(wholeMemberArr[wholeMemIndex]);
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
                string productName;
                fin >> productName;

                SearchProduct* searchProduct = new SearchProduct(wholeProductArr,productName);
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
                break;
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