//
//  main.cpp
//  Ex3_main
//
//  Created by kimyewon on 2020/10/20.
//

#include <iostream>
#include "ArrayUtility.hpp"
using namespace std;

int main() {
    int x[5], y[5];
    cout << "정수를 5개 입력하라. 배열 x에 삽입한다>>";
    for (int i=0;i<5;i++) cin >> x[i];
    
    cout << "정수를 5개 입력하라. 배열 y에 삽입한다>>";
    for (int i=0;i<5;i++) cin >> y[i];
    
    int* p =ArrayUtility::concat(x, y, 5);
    cout << "합친 정수 배열을 출력한다. " << endl;
    for (int i = 0; i <10 ; i++)
        cout << p[i] <<' ';
    cout << endl;
    
    int retSize;
    int* q = ArrayUtility::remove(x, y, 5, retSize);
    cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 "<< retSize << endl;
    for (int i = 0; i <retSize ; i++)
        cout << q[i] <<' ';
    cout << endl;
    
    delete [] p;
    delete [] q;
}
