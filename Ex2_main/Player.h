//
//  Player.h
//  Ex2_main
//
//  Created by kimyewon on 2020/10/20.
//

#ifndef Player_h
#define Player_h

#include <string>
using namespace std;

class Player {
    string name;
public:
    Player(string name=""){
        this->name = name;
    }
    void setName(string name) {this->name = name;}
    string getName() {return name;}
    void getEnterKey() {
        char buf[100];
        cin.getline(buf, 99);
    }
};

#endif /* Player_h */
