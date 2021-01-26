//
//  main.cpp
//  Ex3-openChallenge
//
//  Created by kimyewon on 2020/10/19.
//

#include <iostream>
#include "exp.h"
using namespace std;

int main() {
    // 사용하는 3개의 생성자
    Exp a(3,2); //  3^2 = 9, 베이스 3, 지수 2
    Exp b(9); // 9^1 =9, 베이스 9, 지수 1
    Exp c; //1^1 =1 , 베이스 1, 지수 1

    cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
    cout << "a의 베이스 " << a.getBase() << ',' << "지수 " << a.getExp() << endl;

    if(a.equals(b))
        cout << "same" <<endl;
    else
        cout << "not same" <<endl;
    
}

