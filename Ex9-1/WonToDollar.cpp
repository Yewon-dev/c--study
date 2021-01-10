//
//  WonToDollar.cpp
//  Ex9-1
//
//  Created by kimyewon on 2020/12/06.
//

#include "WonToDollar.hpp"

double WonToDollar:: converter(double src){
    return src/ratio;
}
string WonToDollar:: getSourceString(){
    return "원";
}
string WonToDollar:: getDestString(){
    return "달러";
}
