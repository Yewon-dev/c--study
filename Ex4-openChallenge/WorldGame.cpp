//
//  WorldGame.cpp
//  Ex4-openChallenge
//
//  Created by kimyewon on 2020/10/19.
//

#include "WorldGame.hpp"
#include "player.hpp"
#include <string>
#include <iostream>
using namespace std;

//생성자
WordGame::WordGame(string startWord) {
    this->startWord = startWord;
    this->players = NULL; //플레이어 수를 정하기 전이므로 NULL
}

//소멸자
WordGame::~WordGame(){
    if (this->players != NULL)
        delete [] this->players;
}


void WordGame::run() {  //게임을 시작하는 함수
    
    if (!createPlayers()) // 참가자 수가 2보다 작거나 문제가 생긴 경우
        return;
    
    string lastWord = startWord; //시작 단어 저장
    
    cout << "시작하는 단어는 " + lastWord + "입니다." << endl;
    int next = 0; // 참가자들 순서대로 증가
    
    //게임이 끝날 때까지 루프
    while (true) {
        string newWord = players[next].sayWord();
        // next 참가자가 단어를 말하도록 한다.
        // 말한 단어를 newWord에 저장
        
        if (!players[next].succeed(lastWord)) { // next 참가자가 실패했을 때
            cout << players[next].getName() + "님이 졌습니다.";
            break; //게임 종료
        }
        
        next++; // 다음 참가자
        next %= nPlayers; // next가 참가자 수보다 커지는 것을 방지
        lastWord = newWord; // 방금 말한 단어를 lastWord로 바꿔 끝말잇기 진행
        
    }
}

bool WordGame::createPlayers() {
    int n;
    cout << "끝말잇기 게임을 시작합니다." << endl;
    cout << "게임에 참가하는 인원은 몇명입니까?";
    cin >> n;
    
    if (n<2) {
        cout << "인원 수는 2 이상입니다." << endl;
        return false;
    }
    nPlayers = n; // 플레이어 수 지정
    players = new Player[n]; // 플레이어 수만큼 동적 객체 배열 할당
    
    if (!players)
        return false;
    
    // 각 참여자의 이름을 입력받아 Player 객체 생성
    string playerName;
    for (int i =0; i< nPlayers; i++){
        cout << "참가자의 이름을 입력하세요 >>";
        cin >> playerName;
        players[i].setName(playerName);
    }
    
    return true;
}
