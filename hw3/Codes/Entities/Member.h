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


// ��� ��ƼƼ Ŭ����
class Member
{
private:
	string memberId; // ��� �̸�
	string memberPw; // ��� ��й�ȣ
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