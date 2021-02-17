//
//  Circle_main.hpp
//  Ex3-1
//
//  Created by kimyewon on 2020/10/19.
//

#ifndef circle_h
#define circle_h

class Circle {
public:
    int radius;
    double getArea();
    void setRadius(int r) { radius = r; }
    Circle();
    Circle(int r);

    ~Circle(); // 소멸자
};

#endif /* circle_h */
