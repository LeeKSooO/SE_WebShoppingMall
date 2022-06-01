#pragma once
#include"LogInUI.h"

class LogIn {
private:
public:
    LogIn(string memberId, string memberPw) {
        LogInUI* ui = new LogInUI();
        //Member* loginMem = new Member("","","memberId", "memberPw");
        Member* mb = new Member("", "", memberId, memberPw);
        bool logInYes = false;
        logInYes = mb->checkIdPw(memberId, memberPw);
        nowLogIn = mb;

        if (logInYes) {
            ui->printMemberIdPw(nowLogIn);
        }
        else {
            ui->printLogInFail();
        }

    }

};
