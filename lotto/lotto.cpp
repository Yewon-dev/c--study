#include <algorithm>
#include <time.h>
#include <iostream>
using namespace std;
#include "lotto.h"

void PrintElement(int n)
{
	cout << n << "\t";
}

LottoGenerator::LottoGenerator(int count) {
	makeRandom(count);
}
LottoGenerator::LottoGenerator() {
	makeRandom(6);
}

set<int> LottoGenerator::RangedRandDemo(int range_min, int range_max, int n)
{
	set <int> s;
	while (true) {
		int u = (double)rand() / (RAND_MAX + 1) * (range_max - range_min) + range_min;
		s.insert(u);
		if (s.size() >= n)	break;
	}
	return s;
}

void LottoGenerator::makeRandom(int count) {
	set<int> s;
	s = RangedRandDemo(1, 46, count);

	// set에 정렬된 로또 번호를 ball(vector)에 저장
    set<int>::iterator iter;
    for(iter = s.begin(); iter != s.end(); iter++)
        this->ball.push_back(*iter);
}

void LottoGenerator::lottprn() {
	// ball의 번호를 함수 PrintElement를 이용하여 출력
    for_each(this->ball.begin(), this->ball.end(), PrintElement);
	cout << endl;
}
