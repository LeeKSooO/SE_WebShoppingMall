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

    ifstream fin("C:\\Users\\rtrt0\\OneDrive\\���� ȭ��\\textfile\\input.txt");
    ofstream fout("C:\\Users\\rtrt0\\OneDrive\\���� ȭ��\\textfile\\output.txt");

    while (!isProgramExit)
    {
        fin >> menuLevel1 >> menuLevel2;
        switch (menuLevel1)
        {
            // 1. ȸ�� ���� - ����, Ż��
        case 1:
        {
            switch (menuLevel2)
            {
                // 1.1. ȸ������
            case 1:
            {
                cout << "1.1. ȸ������\n";
                string name;
                string rRN;
                string Id;
                string Pw;
                fin >> name >> rRN >> Id >> Pw;
                // fout << name << rRN << Id << Pw << endl;
                SignUp* si = new SignUp(wholeMemberArr, name, rRN, Id, Pw);
                break;
            }
            // 1.2. ȸ��Ż��
            case 2:
            {
                Withdraw* wd = new Withdraw(wholeMemberArr, wholeMemberArr[wholeMemIndex]);
                break;
            }
            }
            break;
        }
        // 2. ȸ�� ���� - �α���, �α׾ƿ�
        case 2:
        {
            switch (menuLevel2)
            {
                // 2.1. �α���
            case 1:
            {
                string memberId;
                string memberPw;
                fin >> memberId >> memberPw;
                cout << "2.1. �α��� " << memberId << " " << memberPw << endl;
                LogIn* li = new LogIn(wholeMemberArr, memberId, memberPw);
                break;
            }
            // 2.2. �α׾ƿ�
            case 2:
            {
                LogOut* lo = new LogOut(wholeMemberArr[wholeMemIndex]);
                break;
            }
            }
            break;
        }
        // 3. ��ǰ �Ǹ� ����
        case 3:
        {
            switch (menuLevel2)
            {
                // 3.1. �Ǹ� �Ƿ� ���
            case 1:
            {	
                string productName, companyName;
                int price, salesNum;
                fin >> productName >> companyName >> price >> salesNum;

                AddProduct* addProduct = new AddProduct(wholeMemberArr, wholeProductArr, productName, companyName, price, salesNum);
                break;
            }
            // 3.2. ��� ��ǰ ��ȸ
            case 2:
            {
                SalesProductInquiry* salesProductInquiry = new SalesProductInquiry(wholeMemberArr[wholeMemIndex]);
                break;
            }
            // 3.3. �Ǹ� �Ϸ� ��ǰ ��ȸ
            case 3:
            {
                break;
            }
            }
            break;
        }
            // 4. ��ǰ ���� ����
        case 4:
        {
            switch (menuLevel2)
            {
                // 4.1. ��ǰ ���� �˻�
            case 1:
            {
                string productName;
                fin >> productName;

                SearchProduct* searchProduct = new SearchProduct(wholeProductArr,productName);
                break;
            }

            // 4.2. ��ǰ ����
            case 2:
            {
                PurchaseProduct *purchaseProduct = new PurchaseProduct(wholeMemberArr, wholeProductArr, wholeOrderArr);
                break;
            }
            // 4.3. ��ǰ ���� ���� ��ȸ
            case 3:
            {
                break;
            }
            // 4.4. ��ǰ ���Ÿ����� ��
            case 4:
            {
                break;
            }
            }
            break;
        }
            // 5. ��� ����
            case 5:
            {
                switch (menuLevel2)
                {
                    // 5.1. �Ǹ� ��ǰ ���
                case 1:
                {
                    break;
                }
                }
                break;
            }
            // 6. ����
            case 6:
            {
                switch (menuLevel2)
                {
                    // 6.1. ����
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
//   // ���־�ߵ���..?

//   return;
// }