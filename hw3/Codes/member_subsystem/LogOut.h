
#include <iostream>
#include <fstream>
#include "../entities/Member.h"
#include "LogOutUI.h"
#pragma once
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
