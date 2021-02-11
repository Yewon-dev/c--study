//
//  Circle.cpp
//  Ex4-12
//
//  Created by kimyewon on 2020/10/19.
//
#include <iostream>
#include <string>
#include "Circle.hpp"
#include "CircleManager.hpp"
using namespace std;

void Circle::setCircle(string name, int radius) {
    // 입력받은 값으로 Circle 생성
    this->name = name;
    this->radius = radius;

}

double Circle::getArea() { // Circle의 Area
    return radius * radius * 3.14; // 면적 넓이 구하기
}

string Circle::getName() { // Circle의 Name
    return name;
}
