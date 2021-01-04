//
//  main.cpp
//  Ex10-9
//
//  Created by kimyewon on 2020/12/07.
//

#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& v) {
    int n = v.size();
    
    for (int i = 0; i<n ; i++)
        cout << v[i] << ' '; // v.at(i)도 가능
    cout << endl;
}

double getAverage(const vector<int>& v) {
    int sum = 0;
    int n = v.size();
    
    for (int i = 0; i < n; i++)
        sum+=v[i];
    return (double)sum/n;
}

int main() {
    vector<int> v;
    
    while(true) {
        cout << "정수를 입력하세요(0을 입력하면 종료)>> ";
        
        int num;
        cin >> num;
        if (num ==0)
            return 0;
        
        v.push_back(num); // 입력받은 수를 벡터에 저장
        printVector(v); // 벡터의 모든 수 출력
        cout << "평균 = " << getAverage(v) << endl; // 평균 계산 후 출력
    }
}
