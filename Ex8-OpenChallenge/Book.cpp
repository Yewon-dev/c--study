//
//  Book.cpp
//  Ex8-OpenChallenge
//
//  Created by kimyewon on 2020/11/09.
//

#include "Book.hpp"
#include <string>
#include <iostream>
using namespace std;

Book::Book (int type, int productId, string description, string maker, int price, int ISBN, string title, string author) : Product (type, product, description, maker, price) // 파생클래스의 생성자가 명시적으로 기본 클래스의 생성자
{
    this->ISBN = ISBN;
    this->title = title;
    this->author = author;
}

void Book::showBook() {
    showProduct();
    cout << "ISBN: " << ISBN << endl;
    cout << "책 제목: " << title << endl;
    cout << "저자: " << author << endl;
}

