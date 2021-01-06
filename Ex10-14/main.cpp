//
//  main.cpp
//  Ex10-14
//
//  Created by kimyewon on 2020/11/23.
//  20160785 김예원

#include <iostream>
#include <map>
#include "Password.hpp"
using namespace std;

int main() {
    passwordManager pm;
    
    cout << "===== 암호 관리 프로그램 WHO를 시작합니다 =====" << endl;
    
    
    while(true) { // 메뉴 선택 반복문
        cout << "삽입:1, 검사:2, 종료:3 >> ";
        int menu;
        cin >> menu;
        
        if (pm.checkInputError()) // 정수형을 입력하지 않을 때
            continue;
        
        switch(menu){ // 번호 입력 시
            case 1:
                pm.insert();
                break;
            case 2:
                pm.search();
                break;
            case 3:
                cout << "===== 프로그램 종료 =====" << endl;
                return 0;
                
        }
    }
    
}
