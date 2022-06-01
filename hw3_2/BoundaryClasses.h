#pragma once
#include <iostream>
#include <fstream>

using namespace std;

//회원가입 바운더리 클래스
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

//로그인 바운더리 클래스
class LogInUI {
private:
public:
    void printMemberIdPw(Member* member) {
        ofstream fout("output.txt", ios::app);
        string Id = member->getMemberId();
        string Pw = member->getMemberPw();
        fout << "2.1 로그인" << "\n";
        fout << "> " << Id << " " << Pw << "\n";
        fout.close();
    }

    void printLogInFail() {
        ofstream fout("output.txt", ios::app);
        fout << "2.1 로그인\n";
        fout << "> 일치하는 아이디와 패스워드가 없습니다.\n";
        fout.close();
    }

};

//로그아웃 바운더리 클래스
class LogOutUI {
private:
public:
    void printMemberId(Member* member) {
        ofstream fout("output.txt", ios::app);
        string Id = member->getMemberId();

        fout << "2.2 로그아웃" << "\n";
        fout << "> " << Id << "\n";
        fout.close();
    }

};

class WithdrawUI {
private:
public:

    void printMemberId(string withdrawedId) {
        ofstream fout("output.txt", ios::app);

        fout << "1.2 회원탈퇴" << "\n";
        fout << "> " << withdrawedId << "\n";
        fout.close();
    }

    void printWithdrawFail() {
        ofstream fout("output.txt", ios::app);

        fout << "1.2 회원탈퇴" << "\n";
        fout << "> 현재 로그인 상태가 아닙니다.\n";
        fout.close();
    }

};