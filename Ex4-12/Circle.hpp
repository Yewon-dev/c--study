//
//  Circle.hpp
//  Ex4-12
//
//  Created by kimyewon on 2020/10/19.
//

#ifndef Circle_hpp
#define Circle_hpp
#include <iostream>
#include <string>
using namespace std;

class Circle {
    int radius;
    string name;

public:
    void setCircle(string name, int radius);
    double getArea();
    string getName();
};
#endif /* Circle_hpp */
