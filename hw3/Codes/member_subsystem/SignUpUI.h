#pragma once
#include <fstream>

class SignUpUI {
private:
public:
    void printMemberInfo(Member* member) {
        ofstream fout("output.txt", ios::app);
        string name = member->getMemberName();
        string rRN = member->getMemberRrn();
        string Id = member->getMemberId();
        string Pw = member->getMemberPw();

        fout << "1.1 회원가입" << "\n";
        fout << "> " << name << " " << rRN << " " << Id << " " << Pw << "\n";
        fout.close();
    }


};