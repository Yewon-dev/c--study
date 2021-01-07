//
//  MyQueue.hpp
//  Ex8-5
//
//  Created by kimyewon on 2020/11/09.
//

#ifndef MyQueue_hpp
#define MyQueue_hpp

#include <iostream>
#include "BaseArray.h"
using namespace std;

class MyQueue : public BaseArray {
    int head, tail;
    int size;
public:
    MyQueue(int capacity);
    void enqueue(int n);
    int dequeue(); // queue에서 제거된 값
    int capacity(); //array용량
    int length(); // array안에 있는 데이터의 길이
};

#endif /* MyQueue_hpp */
