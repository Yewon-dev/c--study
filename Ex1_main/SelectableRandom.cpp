//
//  SelectableRandom.cpp
//  Ex1_main
//
//  Created by kimyewon on 2020/10/20.
//

#include "SelectableRandom.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

void SelectableRandom::evenRandom(){
    srand((unsigned)time(0)); //초기화
}

void SelectableRandom::oddRandom(bool b){
    if (b==false)
        srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤수를 발생시키기 위해
}

int SelectableRandom::next(){
    int n = rand(); // 0에서 RAND_MAX(23767) 사이의 랜덤한 정수가 n에 발생
    if (n%2 == 0)// 짝수일때 (0도 짝수로 생각)
        return n;
    else
        return n-1;
}

int SelectableRandom::nextInRange(int low, int high){ //2~9
    int range = high - low +1; // 크기
    int even = low + rand()%range; // 2 + (0~7) = > 2~9
    if (even%2==1)
        return even;
    else return even + 1;
}
