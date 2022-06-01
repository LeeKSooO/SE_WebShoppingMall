#pragma once
#include <iostream>
#include "basic.h"

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
	Member(string name, string rRN, string Id, string Pw) {
		memberName = name;
		residentRegistrationNum = rRN;
		memberId = Id;
		memberPw = Pw;
	}
	bool checkIdPw(string Id, string Pw) {
		
		for (int i = 0; i < wholeMemberNum; i++) {

			if (wholeMemberArr[i] == NULL) continue;
			else {
				if ((wholeMemberArr[i]->memberId == Id) & (wholeMemberArr[i]->memberPw == Pw)) {
					nowLogIn = wholeMemberArr[i];
					return true;
				}
				else continue;
			}
		}
		return false;
	}
	string deleteMember() {
		for (int i = 0; i < wholeMemberNum; i++) {

			if (wholeMemberArr[i] = this) {
				string Id = wholeMemberArr[i]->memberId;
				wholeMemberArr[i] = NULL;
				nowLogIn = NULL;
				return Id;
			}

		}
	}
	void createNewMember(Member* member) {
		wholeMemberArr[wholeMemberNum++] = member;
	}
	string getMemberName() { return memberName; }
	string getMemberRrn() { return residentRegistrationNum; }
	string getMemberId() { return memberId; }
	string getMemberPw() { return memberPw; }
};