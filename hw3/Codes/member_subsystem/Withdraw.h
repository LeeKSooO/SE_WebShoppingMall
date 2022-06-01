
#include <iostream>
#include "WithdrawUI.h"
#include "../entities/Member.h"
#pragma once

class Withdraw
{
private:
    Member *nowLogIn;
    Member **wholeMemberArr;

public:
    Withdraw(Member **wholeMemberArr, Member *nowLogIn)
    {
        this->wholeMemberArr = wholeMemberArr;
        WithdrawUI *ui = new WithdrawUI();
        if (nowLogIn == NULL)
        {
            ui->printWithdrawFail();
            return;
        }
        else
        {
            string memberId = deleteMember(nowLogIn);
            ui->printMemberId(memberId);
            return;
        }
    }
    string deleteMember(Member *nowLogIn);
};

string Withdraw::deleteMember(Member *nowLogIn)
{
    for (int i = 0; i < wholeMemberNum; i++)
    {

        if (wholeMemberArr[i] == nowLogIn)
        {
            string Id = wholeMemberArr[i]->getMemberId();
            wholeMemberArr[i] = NULL;
            nowLogIn = NULL;
            return Id;
        }
    }
    return "-1";
}