#pragma once
#include <iostream>
#include <fstream>

using namespace std;

//ȸ������ �ٿ���� Ŭ����
class SignUpUI {
private:
public:
    void printMemberInfo(Member* member) {
        ofstream fout("output.txt", ios::app);
        string name = member->getMemberName();
        string rRN = member->getMemberRrn();
        string Id = member->getMemberId();
        string Pw = member->getMemberPw();

        fout << "1.1 ȸ������" << "\n";
        fout << "> " << name << " " << rRN << " " << Id << " " << Pw << "\n";
        fout.close();
    }


};

//�α��� �ٿ���� Ŭ����
class LogInUI {
private:
public:
    void printMemberIdPw(Member* member) {
        ofstream fout("output.txt", ios::app);
        string Id = member->getMemberId();
        string Pw = member->getMemberPw();
        fout << "2.1 �α���" << "\n";
        fout << "> " << Id << " " << Pw << "\n";
        fout.close();
    }

    void printLogInFail() {
        ofstream fout("output.txt", ios::app);
        fout << "2.1 �α���\n";
        fout << "> ��ġ�ϴ� ���̵�� �н����尡 �����ϴ�.\n";
        fout.close();
    }

};

//�α׾ƿ� �ٿ���� Ŭ����
class LogOutUI {
private:
public:
    void printMemberId(Member* member) {
        ofstream fout("output.txt", ios::app);
        string Id = member->getMemberId();

        fout << "2.2 �α׾ƿ�" << "\n";
        fout << "> " << Id << "\n";
        fout.close();
    }

};

class WithdrawUI {
private:
public:

    void printMemberId(string withdrawedId) {
        ofstream fout("output.txt", ios::app);

        fout << "1.2 ȸ��Ż��" << "\n";
        fout << "> " << withdrawedId << "\n";
        fout.close();
    }

    void printWithdrawFail() {
        ofstream fout("output.txt", ios::app);

        fout << "1.2 ȸ��Ż��" << "\n";
        fout << "> ���� �α��� ���°� �ƴմϴ�.\n";
        fout.close();
    }

};