#ifndef __LOTTO_H__
#define  __LOTTO_H__

#include <vector>
#include <set>
using namespace std;

class LottoGenerator {
public:
	vector<int> ball;
	LottoGenerator(int count);
	LottoGenerator(); //로또번호 만듦

	set<int> RangedRandDemo(int range_min, int range_max, int n);
	void makeRandom(int count); //
	void lottprn(); //출력
};

class UserLotto { //한장의 로또
public:
	int pos;
	LottoGenerator lotto; //로또 생성
	int grade;

	UserLotto() {
		grade = 0;
	}
};

#endif
