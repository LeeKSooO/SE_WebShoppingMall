#pragma once
#pragma once
#include <iostream>
#include "Member.h"

using namespace std;
class Member;


// ��� ��ƼƼ Ŭ����


Member::Member(string name, string rRN, string Id, string Pw) {
	memberName = name;
	residentRegistrationNum = rRN;
	memberId = Id;
	memberPw = Pw;
}



bool Member::checkIdPw(string Id, string Pw) {

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


string Member::deleteMember() {
	for (int i = 0; i < wholeMemberNum; i++) {

		if (wholeMemberArr[i] = this) {
			string Id = wholeMemberArr[i]->memberId;
			wholeMemberArr[i] = NULL;
			nowLogIn = NULL;
			return Id;
		}

	}
}

void Member::createNewMember(Member* member) {
	wholeMemberArr[wholeMemberNum++] = member;
}


string Member::getMemberName() { return memberName; }
string Member::getMemberRrn() { return residentRegistrationNum; }
string Member::getMemberId() { return memberId; }
string Member::getMemberPw() { return memberPw; }