//
//  Person.hpp
//  Ex6-openChallenge
//
//  Created by kimyewon on 2020/10/20.
//

#ifndef Person_hpp
#define Person_hpp

#include <string>
using namespace std;

class Person{
    string name; //플레이어의 이름을 저장
public:
    Person(string name) {this->name = name;}//생성자
    string getName(){return name;} //플레이어 이름 반환 함수
    bool go(); // 정수를 입력받고 정답이면 true
};

#endif /* Person_hpp */
