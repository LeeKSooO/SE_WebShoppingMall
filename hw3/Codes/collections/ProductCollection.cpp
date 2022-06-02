#include <iostream>
#include "../comm.h"
#include "../entities/Product.h"
#include "ProductCollection.h"
using namespace std;

ProductCollection::ProductCollection()
{ // ��� �ʱ�ȭ
    head = NULL;
    cur = NULL;
}

void ProductCollection::addProduct(Product **wholeProductArr, string sellerId, string pName, string cName, int money, int num)
{
    Product *newProduct = new Product(sellerId, pName, cName, money, num);
    wholeProductArr[wholeProductNum++] = newProduct;
    if (head == NULL)
    {
        head = newProduct;
        return;
    }
    Product *cur = head;
    while (cur->getNext() != NULL)
    {
        cur = cur->getNext();
    }
    cur->SetpNext(newProduct);
}

Product *ProductCollection::findFirst()
{
    return this->head;
}

Product *ProductCollection::getCur()
{
    return this->cur;
}
