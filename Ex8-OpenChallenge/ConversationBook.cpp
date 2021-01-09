//
//  ConversationBook.cpp
//  Ex8-OpenChallenge
//
//  Created by kimyewon on 2020/11/09.
//

#include "ConversationBook.hpp"
#include <iostream>
#include <string>
using namespace std;

ConversationBook :: ConversationBook(int type, int productID, string description, string maker, int price, int ISBN, string title, string author, string language)
    : Book(type, productID, description, maker, price, ISBN, title, author){
    this->language = language; // 파생클래스의 생성자가 명시적으로 기본클래스의 생성자 선택 호출
}

void ConversationBook:: showConversationBook() {
    showbook();
    cout << "언어: " << language << endl;
}

