
#include <iostream>
#include <fstream>
#include "../entities/Member.h"
#include "LogInUI.h"
#pragma once

class LogIn
{
private:
    Member *nowLogIn;
    Member **wholeMemberArr;

public:
    LogIn(Member **wholeMemberArr, Member *nowLogIn, string memberId, string memberPw)
    {
        this->wholeMemberArr = wholeMemberArr;
        LogInUI *ui = new LogInUI();
        // Member* loginMem = new Member("","","memberId", "memberPw");
        Member *mb = new Member("", "", memberId, memberPw);
        bool logInYes = false;
        logInYes = checkIdPw(memberId, memberPw);
        nowLogIn = mb;

        if (logInYes)
        {
            ui->printMemberIdPw(nowLogIn);
        }
        else
        {
            ui->printLogInFail();
        }
    }
    bool checkIdPw(string Id, string Pw);
};

bool LogIn::checkIdPw(string Id, string Pw)
{
    for (int i = 0; i < wholeMemberNum; i++)
    {
        if (wholeMemberArr[i] == NULL)
            continue;
        else
        {
            if ((wholeMemberArr[i]->getMemberId() == Id) && (wholeMemberArr[i]->getMemberPw() == Pw))
            {
                nowLogIn = wholeMemberArr[i];
                return true;
            }
            else
                continue;
        }
    }
    return false;
}
