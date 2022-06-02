
#include <iostream>
#include <fstream>
#include "../comm.h"
#include "../entities/Member.h"
#include "SignUpUI.h"
#pragma once

using namespace std;

class SignUp
{
private:
    string name;
    string rRN;
    string Id;
    string Pw;
    Member **wholeMemberArr;

public:
    SignUp(Member **wholeMemberArr, string name, string rRN, string Id, string Pw)
    {
        this->wholeMemberArr = wholeMemberArr;
        SignUpUI *ui = new SignUpUI();
        Member *newMem = new Member(name, rRN, Id, Pw);

        wholeMemberArr[wholeMemberNum] = newMem;
        wholeMemberNum++;

        ui->printMemberInfo(newMem);
    }
};
