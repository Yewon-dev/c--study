//
//  main.cpp
//  Ex4-11
//
//  Created by kimyewon on 2020/10/19.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[5];
    for (int i=0; i<5; i++){
        cout << "이름 : ";
        getline(cin, name[i], '\n'); // 공백을 포함해서 입력 받을 수 있음
    }
    
    string latter = name[0];
    for (int i=1; i<5; i++){
        if (latter < name[i])
            latter = name[i];
    }
    cout << "사전에서 가장 뒤에 나오는 이름은" << latter <<endl;
}
