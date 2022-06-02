#include <iostream>
#include <string>

using namespace std;

#ifndef Product_H
#define Product_H

class Product
{
private:
  string sellerId;
  string productName;
  string companyName;
  int price;
  float avgPurchaseEvaluation;
  int salesNum;
  int leftNum;
  Product *next;

public:
  Product(string sellerId, string productName, string companyName, int price, int leftNum);
  Product(string sellerId, string productName, string companyName, int price, int leftNum, Product *pNext);
  string getSellerId();
  Product getProductDetails();
  string getProductName();
  string getCompanyName();
  int getPrice();
  int getSalesNum();
  int getLeftNum();
  void increaseSalesNumAndDecreaseLeftNum();
  float getAvgPurchaseEvaluation();
  Product *getNext();
  void SetpNext(Product *newProduct);
  void setLeftNumAndSalesNum();
  void getProductDetails(string sellerId, string productName, string companyName, int price, int leftNum, float avgNum);
};

#endif