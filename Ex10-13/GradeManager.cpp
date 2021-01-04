//
//  GradeManager.cpp
//  Ex10-13
//
//  Created by kimyewon on 2020/12/07.
//

#include "GradeManager.hpp"
#include <iostream>
#include <string>
using namespace std;

GradeManager::GradeManager(string program){
    this->program = program;
}

void GradeManager::insert() {
    string name;
    int score;
    do {
        cout << "이름과 점수>> ";
        cin >> name >> score;
        
        if (scoreMap.find(name) != scoreMap.end()){ //name이 있는 경우 삽입 불가능
            cout << name << "의 점수를 수정할 수 없음" << endl;
            break;
        }
        // 맵에 없는 사람이 입력된 경우, 맵에 저장
        scoreMap.insert(make_pair(name, score));
        break;
    } while(true);
}

void GradeManager::search() {
    string name;
    
    cout << "이름>> ";
    cin >> name;
    
    if (scoreMap.find(name) == scoreMap.end()){
        cout << name <<"은 없는 사람입니다."<< endl;
    }else{
        int score = scoreMap[name];
        cout << name<< "의 점수는 "<< score << endl;
    }
    
    
}
