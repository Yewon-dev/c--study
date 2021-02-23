//
//  main.cpp
//  Ex1_main
//
//  Created by kimyewon on 2020/10/20.
//

#include <iostream>
#include "SelectableRandom.hpp"
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    SelectableRandom evenRandom;
    cout << "--0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개--" << endl;
    for (int i = 0; i<10; i++){
        int n = evenRandom.next();
        cout << n << ' ';
    }
    SelectableRandom oddRandom(false);
    cout << endl << endl << "--2에서 " << "9까지의 랜덤 홀수 정수 10개--" <<endl;
    for (int i = 0 ; i<10 ; i++){
        int n = oddRandom.nextInRange(2,9);
        cout << n << ' ';
    }
    cout << endl;
}
