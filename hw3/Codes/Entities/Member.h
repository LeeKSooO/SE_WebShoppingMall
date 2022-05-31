#include <iostream>

using namespace std;

// 멤버 엔티티 클래스
class Member
{
private:
	string memberId; // 멤버 이름
	string memberPw; // 멤버 비밀번호
	string memberName;
	string residentRegistrationNum;

public:
	Member(string, string, string, string);
	void listProductsOnSale(); // 판매중인 상품 리스트 가져오기
	void listSoldProducts();   // 판매한 상품들 리스트 가져오기
	void listOrders();
	string deleteMember(Member*);
	Member checkIdPw(string, string);
	void createNewMember(Member*);
	void registerProduct();
	string getMemberName();
	string getMemberRrn();
	string getMemberId();
	string getMemberPw();
};