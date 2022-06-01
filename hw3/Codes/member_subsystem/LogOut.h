#pragma once
#include "LogOutUI.h"

class LogOut
{
private:
    Member *nowLogIn;

public:
    LogOut(Member *nowLogIn)
    {
        LogOutUI *ui = new LogOutUI();
        ui->printMemberId(nowLogIn);
        nowLogIn = nullptr;
    }
};
