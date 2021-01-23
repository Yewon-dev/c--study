//
//  player.hpp
//  Ex4-openChallenge
//
//  Created by kimyewon on 2020/10/19.
//

#ifndef player_hpp
#define player_hpp

#include <string>
using namespace std;

class Player {
    string name; // 게임 참가자의 이름
    string word; // 참가자가 말한 단어
    
public:
    void setName(string name){
        this->name=name;
    }
    string getName() {return name;}
    string sayWord();
    bool succeed(string lastWord); // 끝말잇기 성공했는지 확인
};

#endif /* player_hpp */
