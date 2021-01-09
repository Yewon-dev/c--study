//
//  Book.hpp
//  Ex8-OpenChallenge
//
//  Created by kimyewon on 2020/11/09.
//

#ifndef Book_hpp
#define Book_hpp

#include <string>
using namespace std;

class Book : public Product {
    int ISBN;
    string title;
    string author;
public:
    Book(int type, int productID, string description, string maker, int price, int ISBN, string title, string author)
    void showBook();
    
    void setTitle(string title) {this-> title = title;}
    string getAuthor() { return author;}
    int getISBN() { return ISBN;}
};

#endif /* Book_hpp */
