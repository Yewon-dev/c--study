//
//  Morse.cpp
//  Ex5-openChallenge
//
//  Created by kimyewon on 2020/10/20.
//

#include "Morse.hpp"
#include <string>
#include <iostream>
using namespace std;


Morse::Morse() {
    alphabet = new string[26] { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };

    digit = new string[10] { "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "----..", "----." };

    slash = "-..-.";
    question = "..--..";
    comma = "--..--";
    period = ".-.-.-";
    plus = ".-.-.";
    equal = "-...-";
}

void Morse::text2Morse(string text, string &morse){
    bool blankFound = false;

}

bool Morse::morse2Text(string morse, string &text)

bool Morse::morseWord2Text(string morse, string &text)
bool Morse::morse2Letter(string morseLetter, char &letter)
