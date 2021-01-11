//
//  main.cpp
//  lotto
//
//  Created by kimyewon on 2020/12/07.
//
#include <iostream>
using namespace std;
#include "lotto.h"

void line() {
    cout << "************************************************************************\n";
}

void title() {
    cout << "로또 복권 모의실험 프로그램\n";
    line();
    cout << "1등 6개 숫자 일치 (보너스숫자 제외): 총 상금은 1,800,000,000원\n";
    cout << "2등 6개 숫자 중 5개 일치 + 1개 보너스 숫자 일치:";
    cout << "총 상금은 100,000,000원\n";
    cout << "3등 5개 숫자 일치 (보너스 숫자 제외): 총 상금은 30,000,000원\n";
    cout << "4등 4개 숫자 일치 (보너스 숫자 제외): 총 상금은 12,000,000원\n";
    cout << "5든 3개 숫자 일치 (보너스 숫자 제외):10,000원\n";
    line();
}

void Lotto(UserLotto user) {
    switch (user.grade) {
    case 1:
        cout << "1등(총상금 1,800,000,000원):";
        break;
    case 2:
        cout << "2등(총상금 100,000,000원):";
        break;
    case 3:
        cout << "3등(총상금 30,000,000원):";
        break;
    case 4:
        cout << "4등(총상금 12,000,000원):";
        break;
    case 5:
        cout << "5등(총상금 10,000원):";
        break;
    }
    if (user.grade >= 1 && user.grade <= 5) {
        cout << "\n NO " << user.pos << " : ";
        user.lotto.lottprn();
    }
}

void counts(vector<UserLotto> user, LottoGenerator lotto) { // 비교
    int matchingcount;
    vector<int>::iterator num1, num2;
    for (int i = 0; i < user.size(); i++) {
        matchingcount = 0;
        
        for (num1 = lotto.ball.begin(); num1< lotto.ball.end() - 1; num1++ ){
            for (num2=user[i].lotto.ball.begin(); num2<user[i].lotto.ball.end(); num2++){
                if (*num1 < *num2){
                    break;
                }
                if (*num1 == *num2){
                    matchingcount ++;
                }
            }
        }
        // ¥Á√∑ ∑Œ∂«(lotto)øÕ ∞¢ ªÁøÎ¿⁄¿« ∑Œ∂«(user[i])¿« π¯»£∏¶ ∫Ò±≥«œø© ¿œƒ°«œ¥¬ π¯»£¿« ∞≥ºˆ √£±‚

        switch (matchingcount) {
        case 3:
            user[i].grade = 5;
            break;
        case 4:
            user[i].grade = 4;
            break;
        case 5: {
            user[i].grade = 3;
            int bonus = *(lotto.ball.end() - 1);
            vector<int>::iterator iter;
            iter = find(user[i].lotto.ball.begin(), user[i].lotto.ball.end(), bonus);
            if (iter != user[i].lotto.ball.end())
                user[i].grade = 2;
        }
              break;
        case 6:
            user[i].grade = 1;
            break;
        default:
            user[i].grade = 0;
        }
        Lotto(user[i]);
    }
}

int main() {
    vector<UserLotto> user;
    int userCount;
    int pos = 1;
    int i;

    title();
    cout << "로또 개수 입력하세요. : ";
    cin >> userCount;

    cout << "응모한 번호 \n";
    line();
    for (i = 0; i < userCount; i++) {
        UserLotto userlotto;
        userlotto.pos = i+1;
        cout << " NO " << userlotto.pos << " : ";
        userlotto.lotto.lottprn();
        user.push_back(userlotto);
        // UserLotto∑Œ ∑Œ∂«∏¶ ª˝º∫«œø© ∫§≈Õ userø° ¿˙¿Â
    }

    LottoGenerator lotto(7);
    line();
    cout << "당첨 번호 : ";
    lotto.lottprn();
    cout << "보 너 스 : " << lotto.ball[6] << endl;
    line();

    counts(user, lotto);
}
