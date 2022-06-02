#include <fstream>
#include <iostream>
#include "Member.h"
using namespace std;
#pragma once

class LogOutUI
{
private:
public:
    void printMemberId(Member *member)
    {
        ofstream fout("output.txt", ios::app);
        string Id = member->getMemberId();

        fout << "2.2 �α׾ƿ�"
             << "\n";
        fout << "> " << Id << "\n";
        fout.close();
    }
};