//
//  main.cpp
//  Ex10-5
//
//  Created by kimyewon on 2020/12/06.
//

#include <iostream>
using namespace std;

template <class T>
T* concat(T data1[], int n1, T data2[], int n2){
    T* p = new T[n1 + n2];
    for (int i = 0; i < n1; i++)
        p[i] = data1[i];
    for (int j = 0; j < n2; j++)
        p[j + n1] = data2[j];
    return p;
}

int main() {
    cout << "두 개의 정수 배열을 합칩니다" << endl;
    
    int x[] = { 1,2,3 };
    int y[] = { 6,7,8,9};
    int* p = concat(x,3,y,4);
    for (int i = 0; i<7; i++)
        cout << p[i] << ' ';
    
    cout << endl;
    delete[] p;
}
