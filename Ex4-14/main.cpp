//
//  main.cpp
//  Ex4-14
//
//  Created by kimyewon on 2020/10/19.
//
#include <string>
#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "7+23+5+1+25와 같이 덧셈 문자열을 입력하세요." << endl;
    getline(cin, s, '\n');

    int sum = 0;
    int startIdx = 0;
    while (true) {
        int findIdx = s.find('+', startIdx); //'+'가 있는 위치
        if (findIdx == -1){ //'+' 마지막 숫자
            string part = s.substr(startIdx); //25
            cout << part << endl;
            sum += stoi(part); //stoi => str에서 int로 형변환
            break;

        }
        int count = findIdx - startIdx;

        string part = s.substr(startIdx, count);
        cout << part << endl;
        sum += stoi(part);
        startIdx = findIdx+1;
    }
    cout <<"숫자들의 합은 "<<sum<<endl;
}
