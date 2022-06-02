#include <iostream>
#include <string>
#include "../entities/Product.h"

using namespace std;

#ifndef ProductCollection_H
#define ProductCollection_H

// 프로덕트 컬렉션 클래스
class ProductCollection
{
private:
  int numSoldProducts;
  Product *soldProducts[100]; // 판매 완료 상품 포인터 배열
  Product *head;
  Product *cur;

public:
  ProductCollection();
  Product **getSoldProducts()
  {
    return soldProducts;
  } // 판매 완료 상품 포인터 배열 가져오기
  int getNumSoldProducts() { return this->numSoldProducts; }
  void addSoldProduct(Product *product)
  {
    this->soldProducts[(this->numSoldProducts)++] = product;
  }
  Product *findFirst();
  Product *getCur();
  void getProducts();
  void addProduct(Product **wholeProductArr, string sellerId, string pName, string cName, int money, int num);
};

#endif
