//
//  BaseArray.hpp
//  Ex8-6
//
//  Created by kimyewon on 2020/11/07.
//

#ifndef BaseArray_hpp
#define BaseArray_hpp

#include <iostream>
using namespace std;

class BaseArray {
    int capacity;
    int *mem;
protected:
    BaseArray(int capacity = 100){
        this-> capacity = capacity;
        mem = new int [capacity]; //capacity 크기만큼 할당
    }
    ~BaseArray() { // 소멸자
        delete [] mem;
    }
    void put(int index, int val) { // index에 val을 넣음
        mem[index] = val;
    }
    int get(int index){
        return mem[index];
    }
    int getCapacity() { //크기
        return capacity;
    }
};

#endif /* BaseArray_hpp */
