#include <iostream>
#include <fstream>
#include "comm.h"
#include "Member.h"
#include "SignUpUI.h"
#pragma once

using namespace std;

class SignUp
{
private:
    string name;
    string rRN;
    string Id;
    string Pw;
    Member** wholeMemberArr;

public:
    SignUp(Member** wholeMemberArr, string name, string rRN, string Id, string Pw)
    {
        this->wholeMemberArr = wholeMemberArr;
        SignUpUI* ui = new SignUpUI();
        Member* newMem = new Member(name, rRN, Id, Pw);

        wholeMemberArr[wholeMemberNum] = newMem;
        wholeMemberNum++;

        // createNewMember(newMem);

        ui->printMemberInfo(newMem);
    }
    // void createNewMember(Member *);
    // void createNewMember(Member *member)
    // {
    //     cout << "createNewMember: " << wholeMemberNum << endl;
    //     (this->wholeMemberArr)[wholeMemberNum] = member;
    //     wholeMemberNum++;
    // }
};

// void SignUp::createNewMember(Member *member)
// {
//     wholeMemberArr[wholeMemberNum++] = member;
// }