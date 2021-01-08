//
//  MyStack.cpp
//  Ex8-6
//
//  Created by kimyewon on 2020/11/07.
//

#include "MyStack.hpp"
#include "BaseArray.hpp"

void MyStack :: push(int val){
    put(top, val); //top에 val 삽입
    top ++; //top을 한칸 올림
}

int MyStack :: pop() {
    top --; // top을 한칸 내림
    return get(top); // top에 있는 값 return
}
