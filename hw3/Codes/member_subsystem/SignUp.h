#include <iostream>
#include"../Entities/Member.h"
#include"SignUpUI.h"

using namespace std;

#ifndef SignUp_H
#define SignUp_H

class SignUp{

    private:
        string name;
        string rRN;
        string Id;
        string Pw;
        Member *member;
    public:

        SignUp(string name, string rRN, string Id, string Pw){

            SignUpUI *ui = new SignUpUI();
            Member *newMem = new Member(name, rRN, Id, Pw);
            Member *createNewMember(newMem);

            ui->printMemberInfo(newMem);

        }
        

};

#endif