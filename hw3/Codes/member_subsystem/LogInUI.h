#include <iostream>
#include <fstream>

#include "../Entities/Member.h"

using namespace std;

#ifndef LogInUI_H
#define LogInUI_H

//로그인 바운더리 클래스
class LogInUI{
    private:
    public:

        void printMemberIdPw(Member *member){
            ofstream fout("output.txt", ios::app);
            string Id = member->getMemberId();
            string Pw = member->getMemberPw();
            fout << "2.1 로그인" << "\n";
            fout << "> " << Id << " " << Pw <<"\n";
            fout.close();
        }

};

#endif