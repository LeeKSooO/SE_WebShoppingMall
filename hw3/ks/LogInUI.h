#include <iostream>
#include <fstream>
#include "Member.h"
#pragma once

class LogInUI {
private:
public:
    void printMemberIdPw(Member* member) {
        ofstream fout("C:\\Users\\rtrt0\\OneDrive\\���� ȭ��\\textfile\\output.txt", ios::app);
        string Id = member->getMemberId();
        string Pw = member->getMemberPw();
        fout << "2.1 �α���" << "\n";
        fout << "> " << Id << " " << Pw << "\n";
        fout.close();
    }

    void printLogInFail() {
        ofstream fout("C:\\Users\\rtrt0\\OneDrive\\���� ȭ��\\textfile\\output.txt", ios::app);
        fout << "2.1 �α���\n";
        fout << "> ��ġ�ϴ� ���̵�� �н����尡 �����ϴ�.\n";
        fout.close();
    }

};
