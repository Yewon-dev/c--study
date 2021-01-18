//
//  Header.h
//  Ex4-Gambling
//
//  Created by kimyewon on 2020/10/19.
//

#ifndef Player_h
#define Player_h
#include <string>
using namespace std;

class Player {
    string name;
public:
    void setName(string name){
        this->name = name;
    }
    string getName() {return name;}
};

#endif /* Player_h */
