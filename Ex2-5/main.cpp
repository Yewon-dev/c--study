//
//  main.cpp
//  Ex2-5
//
//  Created by kimyewon on 2020/10/19.
//

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char password[11];

    while (true) {
        cout << "암호는 >>";
        cin >> password;

        if (strcmp(password, "C++") == 0) {
            cout << "프로그램을 정상 종료합니다." << endl;
            break;
         }
        else {
            cout << "암호가 일치하지 않습니다." << endl;
        }
    }

    return 0;
}
