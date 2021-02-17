//
//  main.cpp
//  Ex2-14
//
//  Created by kimyewon on 2020/10/19.
//
#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char coffee[100];
    int num;
    int total = 0;

    cout << "예원카페에 오신 것을 환영합니다 :) \n";

    while (true) {
        //메뉴 입력
        cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다. \n 주문>> ";
        cin >> coffee >> num;

        if (strcmp(coffee, "에스프레소") == 0) { //에스프레소
            total += num * 2000;
            cout << num * 2000 << "원 입니다. 맛있게 드세요 \n";
        }
        else if (strcmp(coffee, "아메리카노") == 0) { //아메리카노
            total += num * 2300;
            cout << num * 2300 << "원 입니다. 맛있게 드세요 \n";
        }
        else if (strcmp(coffee, "카푸치노") == 0) { //카푸치노
            total += num * 2500;
            cout << num * 2500 << "원 입니다. 맛있게 드세요 ";
        }

        // 영업 종료
        if (total >= 20000) {
            cout << "오늘은 " << total << "원을 판매하여 영업을 종료합니다. 내일 또 오세요~" << endl;
            return 0;
        }


    }
}
