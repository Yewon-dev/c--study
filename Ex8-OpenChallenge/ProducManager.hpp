//
//  ProducManager.hpp
//  Ex8-OpenChallenge
//
//  Created by kimyewon on 2020/11/09.
//

#ifndef ProducManager_hpp
#define ProducManager_hpp

#include "Product.hpp"

class ProductManager {
    int nextId; // 상품을 배열에 순서대로 저장하기 위한 인덱스 아이디
    int numberOfProducts; // 상품 개수
    Product* p[100]; //100개 상품 관리를 위한 객체 배열
public:
    ProductManager(); //생성자
    ~ProductManager(); //소멸자
    void operate(); //전체 프로그램 실행을 위한 함수
    void addProduct(int type); //상품 추가 함수
};

#endif /* ProducManager_hpp */
