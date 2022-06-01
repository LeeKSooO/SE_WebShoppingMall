#pragma once
#include"Member.h"
#include"LogOutUI.h"


class LogOut {
private:
public:
    LogOut() {
        LogOutUI* ui = new LogOutUI();
        ui->printMemberId(nowLogIn);
        nowLogIn = 0;
    }
};