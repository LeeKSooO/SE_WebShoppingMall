#pragma once
#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Member;


#define WHOLE_MEM_NUM 100
int wholeMemberNum = 0;
Member* wholeMemberArr[WHOLE_MEM_NUM];
int wholeProductNum;
Member* nowLogIn;


// 멤버 엔티티 클래스
class Member
{
private:
	string memberId; // 멤버 이름
	string memberPw; // 멤버 비밀번호
	string memberName;
	string residentRegistrationNum;

public:
	Member(string name, string rRN, string Id, string Pw);
	bool checkIdPw(string Id, string Pw);
	string deleteMember();
	void createNewMember(Member* member);
	string getMemberName();
	string getMemberRrn();
	string getMemberId();
	string getMemberPw();
};