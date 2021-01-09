//
//  ConversationBook.hpp
//  Ex8-OpenChallenge
//
//  Created by kimyewon on 2020/11/09.
//

#ifndef ConversationBook_hpp
#define ConversationBook_hpp

#include <string>
using namespace std;

#include "Book.hpp"

class ConversationBook : public Book {
    string language; //언어명
public:
    ConversationBook(int type, int productID, string description, string maker, int price, int ISBN, string title, string author, string language);
    void showConversationBook();
    
    string getLanguage() { return language;}
};

#endif /* ConversationBook_hpp */
