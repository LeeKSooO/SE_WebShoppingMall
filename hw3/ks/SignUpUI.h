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
        ofstream fout("C:\\Users\\rtrt0\\OneDrive\\���� ȭ��\\textfile\\output.txt", ios::app);
        string name = member->getMemberName();
        string rRN = member->getMemberRrn();
        string Id = member->getMemberId();
        string Pw = member->getMemberPw();

        fout << "1.1 ȸ������"
            << "\n";
        fout << "> " << name << " " << rRN << " " << Id << " " << Pw << "\n";
        fout.close();
    }
};