//
//  CPU.cpp
//  Ex13-openChallenge
//
//  Created by kimyewon on 2020/10/20.
//

#include "CPU.hpp"
#include "HardwareException.h"

#include <string>
#include <iostream>
using namespace std;

void CPU::run() { //CPU의 행동 시뮬레이션
    while(true){ // 무한 루프
        fetch();
        decode();
        execute();
    }
}

//키보드로부터 하나의 명령을 읽어 instruction 멤버 변수에 저장
void CPU::fetch() {
    string line;
    getline(cin,line);
    if (line==""){
        throw HardwareException("fetch", "명령 라인 없음");
    }
    instruction = line;
}

// instruction 멤버 변수에 저장된 명령어를 파싱하여 명령 코드와 피연산자를 분리한다
// 명령코드는 cmd 멤버 변수에, 2개의 피연산자는 op1, op2 멤버 변수에 저장한다
void CPU::decode(){
    //cmd 찾고 끊어내기
    int Index = instruction.find(' '); // 공백문자 앞의 문자열의 가장 처음 인덱스
    if (Index == -1) // 패턴이 찾아지지 않는 경우
        throw HardwareException("decode", "명령어 코드 예외");//예외발생
    
    cmd = instruction.substr(0, Index); // 명령어 코드만 cmd에 따로 저장
    if (cmd != "AND" && cmd!="SUB" && cmd!= "MUL" && cmd!="DIV")
        throw HardwareException("decode","invaild 명령어 예외");
    
    //첫번째 피연산자 끊기
    Index++; //아까 이미 찾은 cmd는 찾지 않기 위해 인덱스 1 추가하여 찾기
    int Index2 = instruction.find(' ', Index);
    if (Index2 == -1) // 패턴이 찾아지지 않는 경우
        throw HardwareException("decode", "피연산 예외");//예외발생
   
    string op1str = instruction.substr(Index, Index2-Index);
    
    // 두번째 피연산자 끊기
    Index = Index2; //아까 이미 찾은 cmd는 찾지 않기 위해 인덱스 1 추가하여 찾기
    Index++;
    Index2 = instruction.find(' ', Index);
    if (Index2 == -1)
        throw HardwareException("decode", "피연산 예외");//예외발생
   
    string op2str = instruction.substr(Index, Index2-Index);
    
    try {
        // 문자열 형식의 피연산자를 정수로 변환
        op1 = stringToInt(op1str);
        op2 = stringToInt(op2str);
    } catch (string es) {
        throw HardwareException("decode", "피연산자 타입 예외"); // 정수 변환이 실패하여 예외 발생
    }
}

//문자열을 정수로 변환하여 리턴
// 정수로 변환하기 어려운 문자열의 경우, char* 타입 예외 발생
int CPU::stringToInt(string x) {
    int sum = 0;
    int len = x.length();
    
    for (int i =0; i<len; i++){
        if(x[i] >= '0' && x[i] <= '9')
            sum = sum*10 + x[i]-'0';
        else
            throw x;
    }
    return sum;
}

void CPU::execute(){
    cout << '\t' << instruction << ": ";
    
    
    if (cmd == "AND"){
        cout << '\t' <<op1+op2 << endl;
    }else if (cmd == "SUB"){
        cout << '\t' <<op1-op2 << endl;
    }else if (cmd == "MUL"){
        cout << '\t' <<op1*op2 << endl;
    }else if (cmd == "DIV"){
        if (op2 ==0)
            throw HardwareException("execute", "0으로 나누는 예외");
        cout << '\t' <<op1/op2 << endl;
    }else
        throw HardwareException("execute", "CPU failure 예외");
    
}
