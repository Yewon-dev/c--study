//
//  main.cpp
//  Ex4-12
//
//  Created by kimyewon on 2020/10/19.
//

#include <iostream>
#include "Circle.hpp"
#include "CircleManager.hpp"
using namespace std;

int main() {
    int size;
    cout << "원의 개수를 입력하시오. " << endl;
    cin >> size;
    CircleManager c(size);
    c.searchByArea();
    c.searchByName();
}
