//
//  CPU.hpp
//  Ex13-openChallenge
//
//  Created by kimyewon on 2020/10/20.
//

#ifndef CPU_hpp
#define CPU_hpp

#include <string>
using namespace std;

class HardwareException;

class CPU { // CPU의 행동을 시뮬레이션하는 클래스
    string instruction; // 명령어
    int op1, op2; // 두 개의 피연산자
    string cmd; // 명령어 코드 ("ADD", "SUB", "MUL", "DIV")
    void fetch() throw(HardwareException()); // 명령어를 키보드로부터 읽어 온다.
    void decode() throw(HardwareException()); // 명령어 코드가 무엇인지 판별
    void execute() throw(HardwareException()); // 명령어 코드에 따라 명령 실행
public:
    void run(); // CPU의 행동 시뮬레이션, 루프를 돌면서 명령어 실행
    static int stringToInt(string x) throw(string); // 문자열을 정수로 바꾸어 리턴
};

#endif /* CPU_hpp */
