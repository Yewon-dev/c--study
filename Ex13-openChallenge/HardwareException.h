//
//  HardwareException.h
//  Ex13-openChallenge
//
//  Created by kimyewon on 2020/10/20.
//

#ifndef HardwareException_h
#define HardwareException_h
#include <iostream>
#include <string>
using namespace std;

class HardwareException {
    string step;
    string msg;
public:
    HardwareException(string step="", string msg=""){
        this->step = step;
        this->msg = msg;
    }
    string getStep() { return step;}
    string getMsg() { return msg;}
    void setMsg(string msg) {this->msg = msg;}
    void what() {
        cout << step << " 스텝" << ", " <<msg << endl;
    }
};

#endif /* HardwareException_h */
