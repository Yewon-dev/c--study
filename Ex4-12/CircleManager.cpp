//
//  CircleManager.cpp
//  Ex4-12
//
//  Created by kimyewon on 2020/10/19.
//
#include <iostream>
#include <string>
#include "CircleManager.hpp"
#include "Circle.hpp"
using namespace std;

CircleManager::CircleManager(int size) {
    // size = 사용자로부터 입력받은 원의 개수

    this->size = size; // 입력받은 size 대입
    p = new Circle[size]; // 사용자의 입력에 따라 배열의 크기가 달라지므로 동적으로 할당

    int radius;
    string name;

    for (int i = 0; i < size; i++) {
        cout << i + 1 << "번째 원의 이름과 반지름을 입력하시오. ";
        cin >> name >> radius;
        p[i].setCircle(name, radius);
    }

}

void CircleManager::searchByArea() {
    int s;
    cout << "최소 면적을 정수로 입력하시오 >> ";
    cin >> s;
    cout << s << "보다 큰 원을 검색합니다." << endl;

    for (int i = 0; i < size; i++) { //검색
        if (p[i].getArea() > s) {
            cout << p[i].getName() << "의 면적은 " << p[i].getArea() << "\n";
        }
    }
}

void CircleManager::searchByName() {
    string cname;
    cout << "검색하고자 하는 원의 이름을 입력하시오 >> ";
    cin >> cname;

    for (int i = 0; i < size; i++) {
        if (p[i].getName() == cname) {
            cout << "면적은 " << p[i].getArea() << endl;
        }
    }

}

CircleManager::~CircleManager() {
    delete[] p; //삭제
}
