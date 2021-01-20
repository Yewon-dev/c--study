//
//  main.cpp
//  Ex13-openChallenge
//
//  Created by kimyewon on 2020/10/20.
//

#include <iostream>
#include "CPU.hpp"
#include "HardwareException.h"
using namespace std;

int main() {
    CPU kitelCPU;
    try {
        kitelCPU.run();
    } catch (HardwareException &e) {
        e.what();
    }
}
