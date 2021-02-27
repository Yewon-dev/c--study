//
//  ArrayUtility.cpp
//  Ex3_main
//
//  Created by kimyewon on 2020/10/20.
//

#include <iostream>
#include "ArrayUtility.hpp"
using namespace std;

int* ArrayUtility::concat(int *s1, int *s2, int size){
    int* tmp = new int[size];
    for (int i = 0 ; i< size ; i++){
        tmp[i]=s1[i];
    }
    for (int i =0; i< size ; i++){
        tmp[i+size]=s2[i];
    }
    
    return tmp;
}

int* ArrayUtility::remove(int *s1, int *s2, int size, int &retSize){
    int* temp = new int[retSize];

    for (int i=0; i <size; i++){ //같은 숫자 있는 공간 NULL 만들기
        for (int j = 0 ; j < size ; j ++){
            if (s1[i]==s2[j]){
                s1[i]=NULL;
            }
        }
    }
    for (int i = 0; i<size ;i++){
        if (s1[i] != NULL)
            retSize++;
    }
    
    for (int i = 0 ; i<retSize ; i++){ //대입
        temp[i] = s1[i];
    }
        
    if (retSize == 0)
        return NULL;
    else return temp;
}
