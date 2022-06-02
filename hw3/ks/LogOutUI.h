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
        ofstream fout("C:\\Users\\rtrt0\\OneDrive\\¹ÙÅÁ È­¸é\\textfile\\output.txt", ios::app);
        string Id = member->getMemberId();

        fout << "2.2 ·Î±×¾Æ¿ô"
            << "\n";
        fout << "> " << Id << "\n";
        fout.close();
    }
};