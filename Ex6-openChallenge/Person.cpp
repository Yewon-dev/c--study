//
//  Person.cpp
//  Ex6-openChallenge
//
//  Created by kimyewon on 2020/10/20.
//

#include <iostream>
using namespace std;

#include "Person.hpp"
#include "UpAndDownGame.hpp"

bool Person::go(){
    int number;
    cout << name+">>";
    cin >>number;
    return UpAndDownGame::check(number);
}
