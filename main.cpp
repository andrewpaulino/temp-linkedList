#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "NodeIterator.h"
//#include "Bag.h"
//#include "Bag.cpp"
#include "PokerCard.h"
#include "PokerCard.cpp"
int main() {
//    LinkedList<std::pair<std::string, int>> ligma;
//    std::pair <std::string, int> PAIR1 ;
//    std::pair <std::string, int> PAIR2 ;
//    PAIR1.first = "1";
//    PAIR1.second = 1 ;
//    PAIR2.first = "2";
//    PAIR2.second = 2 ;
//
//    ligma.push(PAIR1);
//    ligma.push(PAIR2);
//
//    LinkedList<std::pair<std::string, int>>::iterator iter;
//    for (iter = ligma.begin(); iter != ligma.end(); iter++) {
//        std::cout << iter << std::endl;
//    }
    int** arr = new int*[5];
    for (int i =0; i < 5; i ++) {
        *(arr + i) = new int[3];
    }
//    PokerCard card;
//    PokerCard* cardGridArr;
//
//    cardGridArr = new PokerCard[5];
//
//    for (...) {
//        *(cardGridArr + 1) = new PokerCard;
//    }
    [[PokerCard, PokerCard, PokerCard], [PokerCard, PokerCard, PokerCard], [PokerCard, PokerCard, PokerCard], [PokerCard, PokerCard, PokerCard]]
}

