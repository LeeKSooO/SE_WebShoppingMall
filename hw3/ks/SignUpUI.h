#include <iostream>
#include <string>
#include <fstream>
#include "Member.h"
#pragma once

class SignUpUI
{
private:
public:
    void printMemberInfo(Member* member)
    {
        ofstream fout("C:\\Users\\rtrt0\\OneDrive\\바탕 화면\\textfile\\output.txt", ios::app);
        string name = member->getMemberName();
        string rRN = member->getMemberRrn();
        string Id = member->getMemberId();
        string Pw = member->getMemberPw();

        fout << "1.1 회원가입"
            << "\n";
        fout << "> " << name << " " << rRN << " " << Id << " " << Pw << "\n";
        fout.close();
    }
};