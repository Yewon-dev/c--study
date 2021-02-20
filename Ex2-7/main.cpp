//
//  main.cpp
//  Ex2-7
//
//  Created by kimyewon on 2020/10/19.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string song("Falling in love with you");
    string elvis("Elvis Presley");
    string singer;

    cout << song + "를 부른 가수는 ";
    cout << "힌트 : 첫글자는 " << elvis[0] <<"\n";

    getline(cin, singer); // 엔터가 들어올때까지 cin의 문자를 받음
    if (singer == elvis) {
        cout << "맞습니다.";
    }
    else {
        cout << "틀렸습니다.";
    }

    return 0;
}
