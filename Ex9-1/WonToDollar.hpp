//
//  WonToDollar.hpp
//  Ex9-1
//
//  Created by kimyewon on 2020/12/06.
//

#ifndef WonToDollar_hpp
#define WonToDollar_hpp

#include <stdio.h>
#include <iostream>
#include "Converter.h"
using namespace std;

class WonToDollar : public Converter {
protected:
    virtual double converter(double src);
    virtual string getSourceString();
    virtual string getDestString();
public:
    WonToDollar(double ratio) : Converter(ratio) {}
};

#endif /* WonToDollar_hpp */
