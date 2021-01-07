//
//  MyQueue.cpp
//  Ex8-5
//
//  Created by kimyewon on 2020/11/09.
//

#include "MyQueue.hpp"
#include "BaseArray.h"

MyQueue :: MyQueue(int capacity) : BaseArray(capacity){
    head = 0;   // 삽입할 위치 (비어있는 위치)
    tail = -1;  // tail + 1 삭제할 위치
    size = 0;   // 초기 데이터 없음
}
void MyQueue :: enqueue(int n){
    if (size == getCapacity()) // if Queue is full
        return;
    put(head, n); //head에 넣겠다
    head ++;
    head = head % getCapacity();
    size ++;
}
int MyQueue :: dequeue(){
    if (size == 0)  // if Queue is empty
        return -1;
    size --;
    tail ++;
    tail = tail % getCapacity();
    return get(tail);
}
int MyQueue :: capacity(){
    return getCapacity();
}
int MyQueue :: length(){
    return size;
}
