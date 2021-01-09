//
//  CompactDisc.cpp
//  Ex8-OpenChallenge
//
//  Created by kimyewon on 2020/11/09.
//

#include "CompactDisc.hpp"
#include <iostream>
#include <string>
using namespace std;

CompactDisc::CompactDisc(int type, int productID, string description, string maker, int price, string albumTitle, string artist)
: Product(type, productID, description, maker, price){
    // 파생클래스의 생성자가 명시적으로 기본클래스의 생성자 선택 호출
    this->albumTitle = albumTitle;
    this->artist = artist;
}

void CompactDisc::showCompactDisc() {
    showProduct();
    cout << "앨범제목: " << albumTitle << endl;
    cout << "가수: " <<artist << endl;
}
