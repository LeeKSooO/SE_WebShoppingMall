#include <iostream>
#include <fstream>
#include "WithdrawUI.h"

#include "../Entities/Member.h"

using namespace std;

#ifndef Withdraw_H
#define Withdraw_H

//회원탈퇴 바운더리 클래스
class Withdraw{
    private:
        Member *member;
    public:
        Withdraw(Member* member){
            
            WithdrawUI *ui = new WithdrawUI();

            memberId = Member *deleteMember(member);

            ui->printMemberId(memberId);

        }

};

#endif