#include "Member.h"
using namespace std;

void Member::registerProductInfo(string productName, string companyName, int price, int salesNum) {
	productCollection.addProduct(productName, companyName, price, salesNum);
}

void Member::listProductsOnSale() {
	productCollection.listProducts();
	cout << endl;
}
