//
//  SelectableRandom.hpp
//  Ex1_main
//
//  Created by kimyewon on 2020/10/20.
//

#ifndef SelectableRandom_hpp
#define SelectableRandom_hpp

#include <iostream>
using namespace std;

class SelectableRandom {
public:
    int next();
    void evenRandom();
    void oddRandom(bool);
    int nextInRange(int low, int high);
};

#endif /* SelectableRandom_hpp */
