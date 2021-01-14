//
//  main.cpp
//  Ex13-1
//
//  Created by kimyewon on 2020/10/19.
//

//20160785 수학과 김예원
#include <iostream>
using namespace std;

int sum(int a, int b) throw(const char *) { // 두 개의 양의 정수, a에서 b까지의 합

    // 예외 처리
    if (a > b) throw "잘못된 입력"; //a가 b보다 크면, "잘못된 입력" 출력
    if (a < 0 || b < 0) throw "음수처리 안됨"; //두 수 중 하나라도 음수이면, "음수처리 안됨" 출력
    
    int sum = 0;
    for (int i = a; i <= b; i++)
        sum += i;
    return sum;

}

int main() {
    try {
        cout << sum(2, 5) << endl;
        cout << sum(-1, 5) << endl;
    }
    catch (const char* s) {
        cout << s << endl;
    }
}
