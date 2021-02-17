//
//  Circle_main.cpp
//  Ex3-1
//
//  Created by kimyewon on 2020/10/19.
//

#include <iostream>
#include "circle.h"
using namespace std;

// 예제 4-10
int main() {
    //Circle c[3];
    int n = 0;
    cin >> n;
    Circle* pArray = new Circle[n]; //힙에 Circle 객체를 동적으로 할당

    int r;
    Circle* p = pArray; //    pArray의 첫번째 객체(원소)를 가리키는 포인터
    for (int i = 0; i < n; i++) {
        cout << "원" << i + 1 << "의 반지름을 입력하시오.. ";
        cin >> r;
        //c[i].setRadius(r);
        p->setRadius(r);
        p++; //다음 포인터로 이동
    }
    
    int count100 = 0;
    p = pArray; // 다시 첫번째 위치를 가리키게 함
    for (int i = 0; i < n; i++) {
        //if (c[i].getArea() >= 100) count100++;
        if (p->getArea() > 100) count100++;
        p++;
    }

    cout << "면적이 100보다 큰 원의 갯수는 " << count100 << "개입니다." << endl;
    delete[] pArray; //new 했기 때문에 반드시 delete

    //Circle circleArray[3] = { Circle(10),Circle(20),Circle() };
    ////Circle* pArray = new Circle[3]; //동적으로 선언 //반지름 1인 원 생성
    ////pArray[0].setRadius(10);
    ////pArray[1].setRadius(20);
    ////pArray[2].setRadius(30);


    //circleArray[0].setRadius(10);
    //circleArray[1].setRadius(20);
    //circleArray[2].setRadius(30);

    ////for (int i = 0; i < 3; i++)
    ////    cout << pArray[i].getArea() << endl;

    ////Circle *p;
    ////p = pArray;
    //p = circleArray; //    circleArray 배열의 첫번째 주소를 가리킴
    ////for(int i = 0; i < 3; i++) {
    ////    cout << p->getArea() << endl;
    ////    p++;
    ////}
}
