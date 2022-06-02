#pragma once
#include <string>
#include "../entities/Member.h"
#include "../entities/Product.h"
#include "../comm.h"

class AddProductUI {
private:
	string sellerId;
public:
	void registerProduct(Member** wholeMemberArr, Product** wholeProductArr, string sellerId, string pName, string cName, int money, int num) {
		//cout << "index check : " << wholeMemIndex << endl;

		//로그인은 안 된 상태에서 상품등록 불가능 // 로그인 한 상태에서 상품 등록 여러번 가능(로그아웃시 초기화)
		//나중에 product에 member attribute 추가하고 싶으면 여기서 수정
		//sellerId = wholeMemberArr[wholeMemIndex]->getMemberId();
		wholeMemberArr[wholeMemIndex]->registerProductInfo(wholeProductArr, sellerId, pName, cName, money, num);
		
		cout << "3.1. 판매 의류 등록" << endl;
		cout << "> " << wholeProductArr[wholeProductNum]->getProductName() << " " << wholeProductArr[wholeProductNum]->getCompanyName()
			<< " " << wholeProductArr[wholeProductNum]->getPrice() << " " << wholeProductArr[wholeProductNum]->getSalesNum() << endl;
	}
	void startInterface(Product** wholeProductArr) {
		ofstream fout("C:\\Users\\rtrt0\\OneDrive\\바탕 화면\\textfile\\output.txt", ios::app);
		fout << "3.1 판매 의류 등록\n";
		fout << "> " << wholeProductArr[wholeProductNum]->getProductName() << " " << wholeProductArr[wholeProductNum]->getCompanyName()
			<< " " << wholeProductArr[wholeProductNum]->getPrice() << " " << wholeProductArr[wholeProductNum]->getSalesNum() << endl;
		fout.close();
	}
};