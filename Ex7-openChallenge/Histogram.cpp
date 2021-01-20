//
//  Histogram.cpp
//  Ex7-openChallenge
//
//  Created by kimyewon on 2020/10/20.
//

#include <string>
#include <iostream>
#include "Histogram.hpp"

using namespace std;

Histogram::Histogram(string s){
    str = s;
    makeHisto();
}


Histogram& Histogram::operator<<(string s){
    str += s;
    makeHisto();
    return *this;
}

Histogram& Histogram::operator<<(char c){
    //입력받은 추가 문자를 기존의 문자열에 추가
    str+=c;
    makeHisto();
    //원본에 대한 참조 리턴
    return *this;
}

void Histogram::makeHisto(){
    for (int i =0; i<26;i++) count[i]=0;
    
    int len = str.size();
    for (int i=0; i<len; i++){
        if(isalpha(str[i])){
            char c= tolower(str[i]);
            count[c-'a']++; //해당 소문자값을 count배열의 인덱스로 사용하여 알파벳 몇 번 등장했는지 세기;
        }
    }
}


bool Histogram::operator!(){
    if(str.length() == 0)
        return false;
    
    cout << str << endl << endl;
    
    int n = 0;
    for (int i=0; i< 26 ; i++)
        n+=count[i]; //알파벳 카운팅이 된 count배열의 값을 모두 저장하기
    cout << "총 알파벳 수 " << n <<endl;
    
    for (int i=0; i<26 ;i++){//알파벳 갯수만큼
        char c= 'a'+i;
        cout << c <<':';
        
        for(int j=0;j<count[i];j++)
            cout << "*";
        cout << endl;
    }
    
    return true;
}
