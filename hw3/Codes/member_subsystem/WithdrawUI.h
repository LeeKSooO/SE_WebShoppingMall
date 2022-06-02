#include <iostream>
#include <string>
#include <fstream>
#include "../entities/Member.h"
#pragma once

class WithdrawUI
{
private:
public:
    void printMemberId(string withdrawedId)
    {
        ofstream fout("output.txt", ios::app);

        fout << "1.2 회원탈퇴"
             << endl;
        fout << "> " << withdrawedId << endl << endl;
        fout.close();
    }

    void printWithdrawFail()
    {
        ofstream fout("output.txt", ios::app);

        fout << "1.2 회원탈퇴"
             << endl;
        fout << "> 현재 로그인 상태가 아닙니다." << endl << endl;
        fout.close();
    }
};