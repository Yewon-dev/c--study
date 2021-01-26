//
//  exp.hpp
//  Ex3-openChallenge
//
//  Created by kimyewon on 2020/10/19.
//

#ifndef exp_h
#define exp_h

class Exp {
    int base;
    int jisu;
    
public:
    // 3개의 생성자
    Exp();
    Exp(int a);
    Exp(int a, int b);
    int getValue(); // 지수를 정수로 계산하여 리턴
    int getBase();// 베이스 값 리턴
    int getExp(); //지수 값 리턴
    bool equals(Exp b); //이 객체와 객체 b의 값이 같은지 판별하여 리턴
};

#endif /* exp_h */
