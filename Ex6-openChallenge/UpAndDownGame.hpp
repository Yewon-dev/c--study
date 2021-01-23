//
//  UpAndDownGame.hpp
//  Ex6-openChallenge
//
//  Created by kimyewon on 2020/10/20.
//

#ifndef UpAndDownGame_hpp
#define UpAndDownGame_hpp

class UpAndDownGame {
    static int answer;
    static int top;
    static int bottom;
private:
    static void init();
    static void msg();
public:
    static void run();
    static bool check(int answer);
};

#endif /* UpAndDownGame_hpp */
