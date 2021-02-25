//
//  GamblingGame.cpp
//  Ex2_main
//
//  Created by kimyewon on 2020/10/20.
//
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Player.h"
#include "GamblingGame.hpp"
using namespace std;

//생성자
GamblingGame::GamblingGame() {
    srand((unsigned)time(0));
    createPlayers();
}

//소멸자
GamblingGame::~GamblingGame() {
    if (this->players != NULL)
        delete[] this->players;
}

void GamblingGame::createPlayers(){
    players = new Player[2];
    cout << "***** 겜블링 게임을 시작합니다. *****"<<endl;
    
    try {//문제 5번
        // 각 참여자의 이름을 입력받아 Player 객체 생성
        string playerName;
        cout << "첫번째 선수 이름 >>";
        cin >> playerName;
        if(playerName =="") {
            throw 1;
        }
        else players[0].setName(playerName);
        
        cout << "두번째 선수 이름 >>";
        cin >> playerName;
        if(playerName =="") {
            throw 1;
        }
        else players[1].setName(playerName);
        
    } catch (int a) {
        cout << " 선수 이름 입력하시오>>";
    }
    
    return;
}

bool GamblingGame::randNum(){
    int array[3]; // 랜덤 3개의 숫자를 저장할 배열
    cout << "\t\t";
    for (int i=0; i<3; i++){
        array[i] = rand() % 3;
        cout << array[i] <<"\t";
    }
    
    if (array[0]== array[1] && array[0]== array[2]){
        return true;
    }else return false;
}


void GamblingGame::run(){
    int next =0;
    string enter;
    cin.get();
    // 게임이 끝날 때까지 루프
    while (true) {
        cout << players[next].getName()<< ": <Enter>"; //플레이어 차례
        getline(cin, enter, '\n');
        
        if (randNum()){ //이겼을 경우
            cout << players[next].getName() +" 승리!";
            break;
        }
        cout << "아쉽군요!" <<endl;
        
        next++;
        next %= 2;
    }
}

