//
//  circle.hpp
//  Ex5-7
//
//  Created by kimyewon on 2020/10/20.
//

#ifndef circle_hpp
#define circle_hpp

#include <iostream>
#include <string>
using namespace std;

class Circle {
    int radius;

public:
    Circle() ;
    Circle(int radius);
    void setRadius(int radius);
    double getArea() ;
};


#endif /* circle_hpp */
