//
//  main.cpp
//  Ex3-6
//
//  Created by kimyewon on 2020/10/19.
//

#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

class EvenRandom {
public:
    EvenRandom();
    int next();
    int nextInRange(int row, int high);
};

EvenRandom::EvenRandom() {
    srand((unsigned)time(0)); //초기화
}

int EvenRandom::next() {
    int erand = rand();
    if (erand % 2 == 0) return erand; // 짝수일때
    else return erand - 1; // 홀수일때 -1을 해서 리턴
}
int EvenRandom::nextInRange(int row, int high) {
    int range = high - row + 1; // 랜덤 값 범위
    int n = row + rand() % range; // 최소값에서 (랜덤숫자를 범위만큼 나눈 값의) 나머지를 더함
    if (n % 2 == 0) return n;
    else return n - 1;
}

int main() {
    EvenRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 10); // 2에서 10 사이의 랜덤한 짝수 정수
        cout << n << ' ';
    }
    cout << endl;

}
