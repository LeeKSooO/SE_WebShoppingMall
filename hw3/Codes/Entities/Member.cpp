#include "Member.h"
using namespace std;

#define WHOLE_MEM_NUM 100
extern int wholeMemberNum = 0;
extern Member *wholeMemberArr[WHOLE_MEM_NUM];
extern int wholeProductNum = 0;
extern Member nowLogIn;

Member::Member(string name, string rRN, string Id, string Pw){
    memberName = name;
    residentRegistrationNum = rRN;
    memberId = Id;
    memberPw = Pw;
}


void Member::createNewMember(Member *member){
    wholeMemberArr[wholeMemberNum++] = member;
}


Member Member::checkIdPw(string Id, string Pw){

    for(int i=0; i<wholeMemberNum; i++){

        if((wholeMemberArr[i]->memberId==Id)&(wholeMemberArr[i]->memberPw==Pw)){
            nowLogIn = *this;
            return *this;
            break;
        }
            
        else
            return;
    }

}

string Member::getMemberId(){

    return this->memberId;
}

string Member::getMemberPw(){

    return this->memberPw;
}

string Member::getMemberName(){

    return this->memberName;
}

string Member::getMemberRrn(){
    return this->residentRegistrationNum;
}

string Member::deleteMember(Member *mem){

    for(int i=0; i<wholeMemberNum; i++){

        if(wholeMemberArr[i] = mem){
            string Id = wholeMemberArr[i]->memberId;
            wholeMemberArr[i] = NULL;
            return Id;
        }

        else
            return;

    }
}

