//
//  main.cpp
//  Ex2-13
//
//  Created by kimyewon on 2020/10/19.
//

#include <iostream>
#include <cstring>
using namespace std;

int main() {

    int menu;
    int num;

    cout << "덕성장에 오신 것을 환영합니다.❤";
    while (true) {
        cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4 >>   ";
        cin >> menu;
        if (menu < 1 || menu >4) {
            cout << "잘못된 입력입니다. " << endl;
            continue;
        }
        else if (menu == 4) {
            cout << "영업을 종료합니다." << endl;
            return 0;
        }
        // 1, 2, 3
        cout << "몇인분? ";
        cin >> num;

        if (num < 1) {
            cout << "다시 주문하세요" << endl;
            continue;
        }
        switch (menu) {
        case 1 : //짬뽕
            cout << "짬뽕" << num << "인분 주문했습니다. " << endl;
            break;
        case 2: //짜장
            cout << "짜장" << num << "인분 주문했습니다. " << endl;
            break;
        case 3: //군만두
            cout << "군만두" << num << "인분 주문했습니다. " << endl;
            break;

        }


    }
}
