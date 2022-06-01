#include <iostream>
#include <fstream>
#include <string>
#include "Member.h"
#include "Product.h"
#include "AddProductUI.h"
#include "AddProduct.h"
#include "SalesProductInquiryUI.h"
#include "SalesProductInquiry.h"
#include "SearchProductUI.h"
#include "PurchaseProductUI.h"
#include "PurchaseProduct.h"

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

    //test member
    //Member ks;
    //Member sk;

    ifstream fin("C:\\Users\\rtrt0\\OneDrive\\바탕 화면\\Codes\\input.txt");
    ofstream fout("C:\\Users\\rtrt0\\OneDrive\\바탕 화면\\Codes\\output.txt");

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
                cout << "회원가입" << endl;
                wholeMemberArr[wholeMemberNum++] = new Member("wefw", "ffff", "222-345", "1334567");

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
                //input lines
                string productName, companyName;
                int price, salesNum;
                fin >> productName >> companyName >> price >> salesNum;
                //check inputs
                cout << "inputs : " << productName << " " << companyName << " " << price << " " << salesNum << endl << endl;


               //------test----- 주석처리하기
               wholeMemberArr[0]->registerProductInfo(wholeProductArr, productName, companyName, price, salesNum);
               //wholeMemberArr[0]->registerProductInfo(wholeProductArr, productName, companyName, price, salesNum);
               // sk.registerProductInfo(wholeProductArr, productName, companyName, price, salesNum);

               // cout << "Product name check : " << wholeProductArr[0]->getProductName() << endl << endl;
               // cout << "Product name check : " << wholeProductArr[1]->getProductName() << endl << endl;
               // cout << "Product name check : " << wholeProductArr[2]->getProductName() << endl << endl;
               // cout << "----------------------------------------------" << endl << endl;



                AddProduct* addProduct = new AddProduct(wholeProductArr, productName, companyName, price, salesNum);

            }
            // 3.2. 등록 상품 조회
            case 2:
            {
                  wholeMemberArr[0]->listProductsOnSale();
                // sk.listProductsOnSale();

                Member* newMem = new Member("sdf", "DSfsdf", "123", "!234");
                SalesProductInquiry* salesProductInquiry = new SalesProductInquiry(newMem);

                //salesProductInquiry->init();
            }
            // 3.3. 판매 완료 상품 조회
            case 3:
            {
            }

            // 4. 상품 구매 관리
            case 4:
            {
                switch (menuLevel2)
                {
                    // 4.1. 상품 정보 검색
                case 1:
                {
                    //SearchProduct* searchProduct = new SearchProduct(wholeProductArr);
                }

                // 4.2. 상품 구매
                case 2:
                {
                    //AddProduct* addProduct = new AddProduct(wholeProductArr, productName, companyName, price, salesNum);
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
    }
}
// void program_exit()
// {
//   // 뭐넣어야되지..?

//   return;
// }