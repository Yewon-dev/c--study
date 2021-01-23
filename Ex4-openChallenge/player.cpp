//
//  player.cpp
//  Ex4-openChallenge
//
//  Created by kimyewon on 2020/10/19.
//
#include <iostream>
#include <string>
#include "player.hpp"
#include "WorldGame.hpp"
using namespace std;

string Player::sayWord(){
    cout << name + ">>";
    cin >> word;
    return word;
}

//lastWord와 참가자가 말한 word를 비교하여 끝말잇기가 잘되었는지 판단.
//성공했으면 true 리턴
bool Player::succeed(string lastWord){
    int lastIndex = lastWord.length() - 2.0; //최종 단어의 맨 마지막 문자의 인덱스
    
    //한글은 2바이트 코드로 저장되므로 끝글자 비교시 두 바이트를 함께 비교

    //최종 단어의 맨 마지막 문자와 참가자가 말한 단어의 첫 문자가 같은지 비교
    if (lastWord.at(lastIndex) == word.at(0)
        && lastWord.at(lastIndex+1) == word.at(1))
        return true;
    else return false;
}
