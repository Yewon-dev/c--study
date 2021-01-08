//
//  MyStack.hpp
//  Ex8-6
//
//  Created by kimyewon on 2020/11/07.
//

#ifndef MyStack_hpp
#define MyStack_hpp

#include "BaseArray.hpp"
#include <iostream>
using namespace std;

class MyStack : public BaseArray { // BaseArray 상속
    int top = 0; // 초기화
public:
    MyStack(int capacity) : BaseArray(capacity) {} // BaseArray의 capacity 상속
    void push(int val);
    int pop();
    int capacity() {
        return getCapacity();
    }
    int length() {
        return top;
    }
};

#endif /* MyStack_hpp */
