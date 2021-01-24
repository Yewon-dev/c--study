//
//  Morse.hpp
//  Ex5-openChallenge
//
//  Created by kimyewon on 2020/10/20.
//

#ifndef Morse_hpp
#define Morse_hpp

#include <iostream>
#include <string>
using namespace std;

class Morse {
    string alphabet[26]; //알파벳의 모스 부호 저장
    string digit[10]; //숫자의 모스 부호 저장
    string slash, question, comma, period, plus, equal; //특수 문자의 모스 부호 저장
    
public:
    Morse(); //alphabet[], digit[] 배열 및 특수 문자의 부호 초기화
    void text2Morse(string text, string& morse); //영문 텍스트를 모스 부호로 변환
    bool morse2Text(string morse, string& text); // 모스 부호를 영문 텍스트로 변환
    
    //1. 워드 단위로 끊긴 모스 부호를 영문 텍스트로 변환
    bool morseWord2Text(string morse, string& text);
    
    //2. 문자 단위로 끊긴 모스 부호를 영문 문자로 변환
    bool morse2Letter(string morseLetter, char& letter);
}

#endif /* Morse_hpp */
