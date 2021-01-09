//
//  CompactDisc.hpp
//  Ex8-OpenChallenge
//
//  Created by kimyewon on 2020/11/09.
//

#ifndef CompactDisc_hpp
#define CompactDisc_hpp

#include <string>
using namespace std;

#include "Product.hpp"

class CompactDisc : Public Product {
    string albumTitle;
    string artist;
public:
    CompactDisc(int type, int productId, string description, string maker, int price, string albumTitle, string artist);
    void showCompactDisc();
    
    string getAlbumTitle() {return albumTitle;}
    string getArtist() { return artist;}
};

#endif /* CompactDisc_hpp */
