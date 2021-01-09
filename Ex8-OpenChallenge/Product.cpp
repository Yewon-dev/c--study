//
//  Product.cpp
//  Ex8-OpenChallenge
//
//  Created by kimyewon on 2020/11/09.
//

#include "Product.hpp"
#include <iostream>
#include <string>

using namespace std;

Product::Product(int type, int productID, string description, string maker, int price)
{
    this->type = type;
    this->productID = productID;
    this->description = description;
    this->maker = maker;
    this->price = price;
}

void Product::showProduct() {
    cout << "--- 상품 ID : " << productID << endl;
    cout << "상품설명 : " << description << endl;
    cout << "생산자 : " << maker << endl;
    cout << "가격 : " << price << endl;
}
