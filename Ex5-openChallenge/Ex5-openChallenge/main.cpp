//
//  main.cpp
//  Ex5-openChallenge
//
//  Created by kimyewon on 2020/10/20.
//

#include <iostream>
#include <string>
#include "Morse.hpp"
using namespace std;

int main() {
    Morse m;
    string text, morse;
    cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다. " <<endl;
    getline(cin, text, '\n'); //문장 입력받기
    m.text2Morse(text, morse); //입력받은 영문 텍스트를 모스 부호로 바꾸는 함수 호출
    cout << morse << endl; //모스 부호 출력
    
    text = ""; //영문 텍스트 지우기
    cout << endl << "모스 부호를 다시 영문 텍스트로 바꿉니다." <<endl;
    if(!m.morse2Text(morse,text))
        cout << "틀린 모스 부호입니다" <<endl;
    else
        cout << txt << endl;
    
}
