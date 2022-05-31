#include <iostream>
#include "../Entities/Member.h"
#include "LogOutUI.h"

using namespace std;

#ifndef LogOut_H
#define LogOut_H


class LogOut{

    private:
        Member *member;
    public:
        
        LogOut(Member *member){
            LogOutUI *ui = new LogOutUI();
            
            ui->printMemberId(member);
        }

};

#endif