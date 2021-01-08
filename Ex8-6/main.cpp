//
//  main.cpp
//  Ex8-6
//
//  Created by kimyewon on 2020/11/07.
//

#include <iostream>
using namespace std;
#include "MyStack.hpp"
#include "BaseArray.hpp"

int main() {
    MyStack mStack(100);
    int n;
    cout << " 스택에 삽입할 5개의 정수를 입력하라>> ";
    for (int i = 0; i<5; i++){
        cin >> n;
        mStack.push(n);
    }
    cout << "스택 용량: "<< mStack.capacity() << ", 스택 크기: " << mStack.length() << endl;
    cout << "스택의 모든 원소를 팝하여 출력한다>> ";
    while(mStack.length() != 0){
        cout << mStack.pop() << ' ';
    }
    
    cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
    
    
}
