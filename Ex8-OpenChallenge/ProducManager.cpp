//
//  ProducManager.cpp
//  Ex8-OpenChallenge
//
//  Created by kimyewon on 2020/11/09.
//

#include "ProducManager.hpp"
#include "CompactDisc.hpp"
#include "Book.hpp"
#include "ConversationBook.hpp"
#include "Product.hpp"

#include <iostream>
#include <string>
using namespace std;

ProductManager::ProductManager() {
    nextId = 0;
    numberOfProducts = 0;
    for (int i = 0; i <100 ; i++)
        p[i] = NULL;
}

ProductManager::~ProductManager() {
    for (int i = 0; i<numberOfProducts; i++)
        delete p[i];
}

/* 코드 전체에서 cin >> 로 읽는 것과
   getline(cin, string);을 함께 사용하려면
   cin >> 후에 cin.ignore() 를 호풀하여 cin의 버퍼에서 '\n'을 제거해야 한다.
 */

void ProductManager::operate() {
    cout << "****** 상품 관리 프로그램을 작동합니다 ******";
    int choice = 0;
    while (choice != 3) {
        int type;
        cout << endl << "상품 추가(1), 모든 상품 조회(2), 끝내기(3)";
        cin >> choice ; cin.ignore(); //cin 의 버퍼에서 '\n' 제거
        
        switch (choice) {
            case 1: //상품 추가
                if (numberOfProducts >= 100){
                    cout << "더이상 추가할 수 없습니다." << endl;
                    break;
                }
                cout << "상품 종류 책(1), 음악(2), 회화책(3) ? ";
                cin >> type; cin.ignore();
                
                if (type <1 || type >3){
                    cout << "잘못된 상품 종류입니다." <<endl;
                    break;
                }
                addProduct(type);
                numberOfProducts ++;
                break;
                
            case 2: //모든 상품 조회
                for (int i= 0; i< numberOfProducts; i++){
                    switch (p[i]->getType()) {//객체 배열에서 하나의 해당 상품의 타입을 가져오기
                        case 1: // type이 1일 경우 -> 책
                            ((Book*)p[i])->showBook(); // down-casting
                            break;
                        case 2: // type이 2일 경우 -> 음악
                            ((CompactDisc*)p[i])->showCompactDisc(); // down-casting
                            break;
                        case 3: // type이 3일 경우 -> 회화책
                            ((ConversationBook*)p[i])->showConversationBook(); // down-casting
                            break;
                    }
                }
                break;
            case 3: //끝내기
                break;
            default:
                cout << "잘못 입력하셨습니다. " <<endl;
        }
    }
}

void ProductManager::addProduct(int type) {
    string desc, maker, title, author, artist, title2, author2, language;
    int price, ISBN;
    cout << "상품 설명 >> ";
    getline(cin, desc);
    cout << "생산자 >> ";
    getline(cin, maker);
    cout << "가격 >> ";
    cin >> price; cin.ignore();
    
    switch (type) {
        case 1: //책
            cout << "책제목 >> ";
            getline(cin, title);
            cout << "저자 >> ";
            getline(cin, author);
            cout << "ISBN >> ";
            cin >> ISBN; cin.ignore();
            p[nextId] = new Book(type, nextId, desc, maker, price, ISBN, title, author);
            break;
        case 2: //음악
            cout << "앨범제목 >> ";
            getline(cin, albumTitle);
            cout << "가수 >> ";
            getline(cin, artist);
            p[nextId] = new CompactDisc(type, nextId, desc, maker, price, albumTitle, artist);
            break;
        case 3: //회화책
            cout << "책제목 >> ";
            getline(cin, title2);
            cout << "저자 >> ";
            getline(cin, author2);
            cout << "언어 >> ";
            getline(cin, language);
            cout << "ISBN >> ";
            cin >> ISBN; cin.ignore();
            p[nextId] = new Book(type, nextId, desc, maker, price, ISBN, title2, author2, language);
            break;
    }
    nextId ++;
}
