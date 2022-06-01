#include "Entities/Member.h"
#include "member_subsystem/LogIn.h"
#include "member_subsystem/LogInUI.h"
#include "member_subsystem/LogOut.h"
#include "member_subsystem/LogOutUI.h"
#include "member_subsystem/SignUp.h"
#include "member_subsystem/SignUpUI.h"
#include "member_subsystem/WIthdraw.h"
#include "member_subsystem/WithdrawUI.h"


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
            // 1. ȸ�� ���� - ����, Ż��
        case 1:
        {
            switch (menuLevel2)
            {
                // 1.1. ȸ������
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
            // 1.2. ȸ��Ż��
            case 2:
            {
                Withdraw* wd = new Withdraw();
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
                LogIn* li = new LogIn(memberId, memberPw);
                break;
            }
            // 2.2. �α׾ƿ�
            case 2:
            {
                LogOut* lo = new LogOut();
                break;
            }
            }
        }
        // 3. ��ǰ �Ǹ� ����
        case 3:
        {
            switch (menuLevel2)
            {
                // 3.1. �Ǹ� �Ƿ� ���
            case 1:
            {
                break;//�Ǹ��Ƿ�����׽�Ʈ�ڵ�
            }
            // 3.2. ��� ��ǰ ��ȸ
            case 2:
            {
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
                break;
            }
            // 4.2. ��ǰ ����
            case 2:
            {
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