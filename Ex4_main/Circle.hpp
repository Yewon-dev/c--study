//
//  Circle.hpp
//  Ex4_main
//
//  Created by kimyewon on 2020/10/20.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <iostream>
using namespace std;

class Circle;

class CircleManager {
    int radius;
public:

}

class Circle {
    int radius;
public:
    Circle(int radius=0) {this->radius = radius;}
    void show() {cout << "radius = " << radius << " 인 원" <<endl;}
    friend CircleManager;
}

#endif /* Circle_hpp */
