//
//  Histogram.hpp
//  Ex7-openChallenge
//
//  Created by kimyewon on 2020/10/20.
//

#ifndef Histogram_hpp
#define Histogram_hpp

#include <string>
using namespace std;

class Histogram {
    int count[26]; // 알파벳 별 개수를 셀 배열
    string str; // 문자열 저장 변수
    void makeHisto(); //히스토그램 만드는 함수
public:
    Histogram(string s=""); /// 생성자, 입력들어노 값이 없을 경우 빈 문자열로 초기화
    bool operator !(); //연산자 함수
    // 참조를 리턴하는 연산자 함수 구현
    Histogram& operator << (string s);//연산자 함수
    Histogram& operator << (char s); //연산자 함수
};

#endif /* Histogram_hpp */
