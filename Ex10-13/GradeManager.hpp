//
//  GradeManager.hpp
//  Ex10-13
//
//  Created by kimyewon on 2020/12/07.
//

#ifndef GradeManager_hpp
#define GradeManager_hpp

#include <string>
#include <map>
using namespace std;

class GradeManager {
    string program;
    map<string, int> scoreMap;
public:
    GradeManager(string name);
    void insert();
    void search();
};

#endif /* GradeManager_hpp */
