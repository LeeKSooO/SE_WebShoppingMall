#pragma once
#include"Member.h"
#include"SignUpUI.h"

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