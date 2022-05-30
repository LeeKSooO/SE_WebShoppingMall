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
  int numSoldProducts = 0;
  Product *soldProducts[100] = {}; // 판매 완료 상품 포인터 배열

public:
  Product **getSoldProducts()
  {
    return this->soldProducts;
  } // 판매 완료 상품 포인터 배열 가져오기
  int getNumSoldProducts() { return this->numSoldProducts; }
  int setNumSoldProducts(int newNumSoldProducts) { return this->numSoldProducts = newNumSoldProducts; }
  void addSoldProduct(Product product)
  {
    this->soldProducts[(this->numSoldProducts)++] = &product;
  }
};

#endif
