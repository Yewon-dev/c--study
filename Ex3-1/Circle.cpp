//
//  main.cpp
//  Ex3-1
//
//  Created by kimyewon on 2020/10/19.
//

#include <iostream>
#include "circle.h"
using namespace std;

Circle::Circle() : Circle(1) {} // 위임 생성자
Circle :: Circle(int r) { // 타겟 생성자
    radius = r;
    cout << "반지름은 " << radius << endl;
}

Circle :: ~Circle() { // 소멸자
    cout << "반지름 " << radius << "인 원 소멸 " << endl;
}

double Circle :: getArea() {
    return 3.14 * radius * radius;
}

