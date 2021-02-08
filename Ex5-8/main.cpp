//
//  main.cpp
//  Ex5-8
//
//  Created by kimyewon on 2020/10/20.
//

#include <iostream>
#include "MyIntStack.hpp"
using namespace std;

int main() {
    MyIntStack a;
    for (int i = 0 ; i < 11 ; i++){ //11개를 푸시
        if (a.push(i)) cout << i << ' '; // 푸시된 값 에코
        else cout <<endl << i+1<< "번째 stack full" <<endl;
    }
    int n;
    for (int i = 0; i< 11 ; i++) { //11개 팝
        if (a.pop(n)) cout << n << ' ' ; // 팝 한 값 출력
        else cout << endl << i+1 << " 번째 stack empty";
    }
    cout << endl;
}
