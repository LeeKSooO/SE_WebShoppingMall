#include <fstream>
#include <iostream>
#include"Member.h"
using namespace std;
#pragma once

class LogOutUI
{
private:
public:
    void printMemberId(Member* member)
    {
        ofstream fout("C:\\Users\\rtrt0\\OneDrive\\���� ȭ��\\textfile\\output.txt", ios::app);
        string Id = member->getMemberId();

        fout << "2.2 �α׾ƿ�"
            << "\n";
        fout << "> " << Id << "\n";
        fout.close();
    }
};