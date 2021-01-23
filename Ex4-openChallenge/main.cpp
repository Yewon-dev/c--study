//
//  main.cpp
//  Ex4-openChallenge
//
//  Created by kimyewon on 2020/10/19.
//
// 한글 끝말잇기 게임
#include <iostream>
#include <string>
#include "WorldGame.hpp"
#include "player.hpp"
using namespace std;

int main() {
    WordGame* game; //WordGame 의 객체 포인터 생성
    game = new WordGame("아버지"); //WordGame 클래스 타입의 객체 할당
    game->run(); //WordGame 객체 안의 run() 함수 실행
    delete game; // 할당받은 객체 공간 반환
}
