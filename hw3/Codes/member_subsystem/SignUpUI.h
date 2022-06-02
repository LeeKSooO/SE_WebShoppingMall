#include <iostream>
#include <string>
#include <fstream>
#include "../entities/Member.h"
#pragma once

class SignUpUI
{
private:
public:
    void printMemberInfo(Member *member)
    {
        ofstream fout("output.txt", ios::app);
        string name = member->getMemberName();
        string rRN = member->getMemberRrn();
        string Id = member->getMemberId();
        string Pw = member->getMemberPw();

        fout << "1.1 회원가입"
             << "\n";
        fout << "> " << name << " " << rRN << " " << Id << " " << Pw << endl << endl;
        fout.close();
    }
};