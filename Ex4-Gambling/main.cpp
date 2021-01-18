//
//  main.cpp
//  Ex4-Gambling
//
//  Created by kimyewon on 2020/10/19.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "GamblingGame.hpp"
using namespace std;

int main() {
    GamblingGame* game; // GamblingGame의 객체 포인터 생성
    game = new GamblingGame(); //GamblingGame 클래스 타입의 객체 할당
    game->run(); //GamblingGame 객체 안의 run() 함수 실행
    delete game; // 할당받은 객체 공간 반환
}
