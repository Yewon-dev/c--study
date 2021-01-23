//
//  WorldGame.hpp
//  Ex4-openChallenge
//
//  Created by kimyewon on 2020/10/19.
//

#ifndef WorldGame_hpp
#define WorldGame_hpp

#include <string>
using namespace std;

class Player;

class WordGame {
private:
    string startWord; //게임 시작할 단어
    int nPlayers; //플레이어 수
    Player* players; //플레이어의 객체 포인터
    bool createPlayers(); //플레이어 생성 함수
    
public:
    WordGame(string startWord); //생성자
    void run(); //게임 시작 함수
    ~WordGame(); // 소멸자
};

#endif /* WorldGame_hpp */
