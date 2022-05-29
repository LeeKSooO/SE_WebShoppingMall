#include <iostream>

using namespace std;

class Member
{
private:
    String memberId;
    String memberPw;
	String memberName;
    String residentRegistrationNum;

public:
	void listProductsOnSale(); 
	void listSoldProducts(); 
	void listOrders(); 
	void deleteMember(); 
	void checkidpw();
    void createNewMember();
    void registerProduct();
};