#pragma once
#include <iostream>
#include"BoundaryClasses.h"

using namespace std;


class SignUp {

private:
    string name;
    string rRN;
    string Id;
    string Pw;
public:
    SignUp(string name, string rRN, string Id, string Pw) {

        SignUpUI* ui = new SignUpUI();
        Member* newMem = new Member(name, rRN, Id, Pw);
       
        newMem->createNewMember(newMem);

        ui->printMemberInfo(newMem);

    }

};

class LogIn {
    private:
    public:
        LogIn(string memberId, string memberPw) {
            LogInUI* ui = new LogInUI();
            //Member* loginMem = new Member("","","memberId", "memberPw");
            Member* mb = new Member("", "", memberId, memberPw);
            bool logInYes = false;
            logInYes= mb->checkIdPw(memberId, memberPw);
            nowLogIn = mb; // 인수 수정

            if (logInYes) {
                ui->printMemberIdPw(nowLogIn);
            }
            else {
                ui->printLogInFail();
            }
            
        }
    
};


class LogOut {
    private:
    public:
        LogOut() {
            LogOutUI* ui = new LogOutUI();
            ui->printMemberId(nowLogIn);
            nowLogIn = 0;
        }
    

};

class Withdraw {
    private:
    public:
        Withdraw() {
            WithdrawUI* ui = new WithdrawUI();
            if (nowLogIn == NULL) {
                ui->printWithdrawFail();
                return;
            }
            else {
                string memberId = nowLogIn->deleteMember();
                ui->printMemberId(memberId);
                return;
            }

    }

};