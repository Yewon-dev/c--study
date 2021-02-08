//
//  MyIntStack.cpp
//  Ex5-8
//
//  Created by kimyewon on 2020/10/20.
//

#include "MyIntStack.hpp"

MyIntStack::MyIntStack() {
    tos =0; //tos 값이 넣어질 위치
}

bool MyIntStack::push (int n) {
    if(tos == 10) return false; //stack-full 예외
    p[tos] = n;
    tos ++;
    return true;
}

bool MyIntStack::pop(int& n){ //pop 성공 여부는 return으로, pop값은 참조변수
    if (tos == 0) return false; // stack-empty 예외
    tos --;
    n=p[tos];
    return true;
}
