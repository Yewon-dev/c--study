//
//  circle.cpp
//  Ex5-7
//
//  Created by kimyewon on 2020/10/20.
//
#include <iostream>
#include <string>
#include "circle.hpp"
using namespace std;

Circle::Circle(){
    radius = 1;
}

Circle::Circle(int radius)  { this->radius = radius; }

void Circle::setRadius(int radius) {
    // 입력받은 값으로 Circle 생성
    this->radius = radius;
}

double Circle::getArea() { // Circle의 Area
    return radius * radius * 3.14; // 면적 넓이 구하기
}
