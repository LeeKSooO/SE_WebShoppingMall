
#include <iostream>
#include <fstream>
#include "comm.h"
#include "Member.h"
#include "LogInUI.h"
#pragma once

class LogIn
{
private:
    Member** wholeMemberArr;

public:
    LogIn(Member** newWholeMemberArr, string memberId, string memberPw)
    {

        this->wholeMemberArr = newWholeMemberArr;
        LogInUI* ui = new LogInUI();

        wholeMemIndex = checkIdPw(memberId, memberPw);

        // if (*nowLogIn != nullptr)
        // {
        //     ui->printMemberIdPw(*nowLogIn);
        // }
        // else
        // {
        //     ui->printLogInFail();
        // }
    }
    int checkIdPw(string Id, string Pw);
};

int LogIn::checkIdPw(string Id, string Pw)
{

    for (int i = 0; i < wholeMemberNum; i++)
    {

        if ((wholeMemberArr[i]->getMemberId() == Id) && (wholeMemberArr[i]->getMemberPw() == Pw))
        {
            return i;
        }
        else
        {
            cout << "checkIdPw: " << Id << " " << Pw << endl;
            continue;
        }
    }
    return -1;
}
