#include <iostream>
#include <string>

using namespace std;

#ifndef Product_H
#define Product_H

// 상품 엔티티 클래스
class Product
{
private:
  string sellerId;
  string productId;
  string productName;
  string companyName;
  int price;
  float avgPurchaseEvaluation;
  int salesNum;
  int leftNum;

public:
  Product(string sellerId, string productName, string companyName, int price, int leftNum);
  string getSellerId();
  Product getProductDetails();
  string getProductName();
  string getCompanyName();
  int getPrice();
  int getSalesNum();
  int getLeftNum();
  void increaseSalesNumAndDecreaseLeftNum();
  float getAvgPurchaseEvaluation();
  // float calAvgPurchaseEvaluation(string productName, int purchaseEvaluation); // 판매한 상품들 리스트 가져오기
};

#endif