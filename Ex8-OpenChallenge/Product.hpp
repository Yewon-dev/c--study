//
//  Product.hpp
//  Ex8-OpenChallenge
//
//  Created by kimyewon on 2020/11/09.
//

#ifndef Product_hpp
#define Product_hpp

#include <string>
using namespace std;

class Product {
    int type;
    int productID;
    string description;
    string maker;
    int price;
    
public:
    Product(int type, int productID, string description, string maker, inr price);
    void showProduct();
    
    int getProduct() {return productID;}
    string getDescription() {return description;}
    string getMaker() { return maker;}
    int getPrice() {return price;}
    int getType() {return type;}
};


#endif /* Product_hpp */
