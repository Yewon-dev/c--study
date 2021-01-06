//
//  Password.hpp
//  Ex10-14
//
//  Created by kimyewon on 2020/11/23.
//

#ifndef Password_hpp
#define Password_hpp

#include <string>
#include <map>
#include <iostream>
using namespace std;

class passwordManager {
    map<string, string> passM;
public:
    passwordManager();
    bool checkInputError();
    void insert();
    void search();


};

#endif /* Password_hpp */
