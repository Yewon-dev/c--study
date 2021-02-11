//
//  CircleManager.hpp
//  Ex4-12
//
//  Created by kimyewon on 2020/10/19.
//

#ifndef CircleManager_hpp
#define CircleManager_hpp
#include <iostream>
#include <string>
#include "Circle.hpp"
using namespace std;

class CircleManager {
    Circle *p; //Circle 배열의 포인터
    int size; //사용자로부터 받을 Circle의 갯수

public:
    CircleManager(int size);
    ~CircleManager();

    void searchByName();
    void searchByArea();
};
#endif /* CircleManager_hpp */
