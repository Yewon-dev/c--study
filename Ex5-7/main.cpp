//
//  main.cpp
//  Ex5-7
//
//  Created by kimyewon on 2020/10/20.
//
#include <iostream>
#include "circle.hpp"
using namespace std;

void readRadius(Circle& c) { //call by reference
    int r;
    cout << "정수값을 입력하세요 >> ";
    cin >> r;
    c.setRadius(r);
}

int main() {
    Circle donut;
    readRadius(donut);

    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;
}
