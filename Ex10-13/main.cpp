//
//  main.cpp
//  Ex10-13
//
//  Created by kimyewon on 2020/12/07.
//

#include <iostream>
#include "GradeManager.hpp"
using namespace std;

int main() {
    string program = "HIGH SCORE";
    GradeManager gm(program);
    
    int menu;
    cout << "***점수 관리 프로그램 " << program << "을 시작합니다***"<<endl;
    
    while(true) {
        cout << "입력:1, 조회:2, 종료:3 >> ";
        cin >> menu;
        
        switch (menu) {
            case 1:
                gm.insert();
                break;
            case 2:
                gm.search();
                break;
            case 3:
                cout << "프로그램을 종료합니다...";
                return 0;
        }
    }
}
