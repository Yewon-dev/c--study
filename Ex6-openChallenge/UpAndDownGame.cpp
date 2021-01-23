//
//  UpAndDownGame.cpp
//  Ex6-openChallenge
//
//  Created by kimyewon on 2020/10/20.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "UpAndDownGame.hpp"
#include "Person.hpp"

int UpAndDownGame::answer = 9;
int UpAndDownGame::top = 99;
int UpAndDownGame::bottom = 0;

void UpAndDownGame::msg() {
    cout <<"답은 " <<bottom<< "과"<<top<<"사이에 있습니다." <<endl;
}

void UpAndDownGame::init() {
    srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤수를 발생시키기 위해
    int n = rand(); // 0에서 RAND_MAX(23767) 사이의 랜덤한 정수가 n에 발생
    answer = n%100;
}

void UpAndDownGame::run() { //루프 돌면서 게임 진행 함수
    Person players[2] = {Person("김인수"), Person("오은경")};
    
    cout << "Up & Down 게임을 시작합니다." << endl;
    init(); // 랜덤시드 정함
    
    int i = 0;
    while (true){
        msg(); //답의 범위 안내 문구 출력
        if(players[i].go()){
            cout <<players[i].getName() <<"이 이겼습니다!" <<endl;
            break;
        }
        i++;
        i = i%2;
    }
}

bool UpAndDownGame::check(int a) { //top, bottom을 조절하고, 정답을 맞추었으면 true
    if (a <bottom || a> top) return false; //범위를 벗어난 잘못된 경우
    if (answer == a) return true;
    
    if (a> answer)
        top = a;
    else bottom = a;
    return false;
}
