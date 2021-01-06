//
//  Password.cpp
//  Ex10-14
//
//  Created by kimyewon on 2020/11/23.
//

#include "Password.hpp"
#include <iostream>
#include <string>
#include <map>
using namespace std;

passwordManager::passwordManager(){}

void passwordManager::insert() {
    string name;
    string password;
    
    cout << "이름 암호 >> ";
    cin >> name >> password;
    passM.insert(make_pair(name, password)); // 입력
    
}

void passwordManager::search() {
    string name;
    string password;
    
    cout << "이름? ";
    cin >> name;
    
    while(true){
        cout << "암호? ";
        cin >> password;
        
        if (passM[name] == password){
            cout << "통과! :) " << endl;
            break;
        }else
            cout << "실패! :( " << endl;
    }
}

bool passwordManager::checkInputError(){
    if (cin.fail()) { // 숫자가 입력되지 않았을 때
        cin.clear();
        cin.ignore(100, '\n');
        cout << "입력 오류" << endl;
        return true; // 오류 있음
    }
    else
        return false; // 오류 없음
}
