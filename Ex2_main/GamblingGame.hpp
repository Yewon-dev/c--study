//
//  GamblingGame.hpp
//  Ex2_main
//
//  Created by kimyewon on 2020/10/20.
//

#ifndef GamblingGame_hpp
#define GamblingGame_hpp
#include <string>
using namespace std;

class Player;
class GamblingGame{
private:
    Player* players; //플레이어의 객체 포인터
    void createPlayers(); //플레이어 생성 함수
public:
    GamblingGame(); // 생성자
    void run(); // 게임을 시작하는 함수
    bool randNum(); // 랜덤 숫자 생성 함수
    ~GamblingGame(); // 소멸자
};

#endif /* GamblingGame_hpp */
