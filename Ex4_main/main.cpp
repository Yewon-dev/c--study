//
//  main.cpp
//  Ex4_main
//
//  Created by kimyewon on 2020/10/20.
//

#include <iostream>
#include "Circle.hpp"
using namespace std;

int main() {
    Circle a(5), b(4);
    ++a;
    b = a++;
    a.show();
    b.show();
    b = 1+ a;
    a.show();
    b.show();
    
}
