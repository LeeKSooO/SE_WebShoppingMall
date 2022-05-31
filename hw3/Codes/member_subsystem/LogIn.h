#include <iostream>
#include "../Entities/Member.h"
#include "LogInUI.h"

using namespace std;

#ifndef LogIn_H
#define LogIn_H

class LogIn{

    private:
        Member *member;
    public:
        
        LogIn(string memberId, string memberPw){
            LogInUI *ui = new LogInUI();
            Member* checkIdPw(memberId, memberPw); // 인수 수정

            ui->printMemberIdPw(login);

        }

};

#endif