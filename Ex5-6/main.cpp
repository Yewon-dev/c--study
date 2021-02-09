//
//  main.cpp
//  Ex5-6
//
//  Created by kimyewon on 2020/10/20.
//

#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
    int len = sizeof(a); //입력받은 배열의 길이
    for (int i=0; i< len; i++){ // 문자열 배열 길이만큼 for문 반복하기
        if (a[i] ==c) {// 찾으려는 문자 c와 동일할 경우
            success = true; // 참조 매개 변수에 true 저장
            return a[i]; //해당 문자가 있는 공간에 대한 참조 변환
        }
    }
}

int main() {
    char s[] = "Mike";
    bool b =false;
    char& loc = find(s, 'M', b);
    if(b==false){
        cout << "M을 발견할 수 없다" <<endl;
        return 0;
    }
    loc ='m'; // 'M'위치에 'm'기록
    cout << s << endl; // 'mike'가 출력됨
}
