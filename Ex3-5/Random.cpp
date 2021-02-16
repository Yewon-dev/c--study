//
//  Random.cpp
//  Ex3-5
//
//  Created by kimyewon on 2020/10/19.
//

#include "Random.h"
#include <stdlib.h>
#include <ctime>

Random::Random() {
    srand((unsigned)time(0)); //√ ±‚»≠
}

int Random::next() {
    return rand();
}

int Random::nextInRange(int low, int high) { // øπ 2-5
    int range = high - low + 1; // 4
    return low + rand()%range; // 0~3 + (+2) => 2~5
}
