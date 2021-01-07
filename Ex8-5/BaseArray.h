//
//  BaseArray.h
//  Ex8-5
//
//  Created by kimyewon on 2020/11/09.
//

#ifndef BaseArray_h
#define BaseArray_h

class BaseArray {
private: // capacity에 접근하지 못하므로 간접적으로 접근할 수 있는 getCapacity 함수 생성
    int capacity; // 동적 할당된 메모리 용량
    int* mem;
protected:
    BaseArray ( int capacity = 100) {
        this->capacity = capacity;
        mem = new int[capacity];
    }
    ~BaseArray() { delete[] mem;}
    void put(int index, int val) { mem[index] = val;}
    int get(int index) { return mem[index];}
    int getCapacity() { return capacity;}
};

#endif /* BaseArray_h */
