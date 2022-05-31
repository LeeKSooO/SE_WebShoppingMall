#include <iostream>
#include <fstream>

#include "../Entities/Member.h"

using namespace std;

#ifndef WithdrawUI_H
#define WithdrawUI_H

//회원탈퇴 바운더리 클래스
class WithdrawUI{
    private:
    public:

        void printMemberId(string withdrawedId){
            ofstream fout("output.txt", ios::app);
    
            fout << "1.2 회원탈퇴" << "\n";
            fout << "> " << withdrawedId << "\n";
            fout.close();
        }

};

#endif