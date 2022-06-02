#include <iostream>
#include <string>
#include "../entities/Product.h"

using namespace std;

#ifndef ProductCollection_H
#define ProductCollection_H

class ProductCollection
{
private:
  int numSoldProducts;
  Product *soldProducts[100];
  Product *head;
  Product *cur;

public:
  ProductCollection();
  Product **getSoldProducts()
  {
    return soldProducts;
  }
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
