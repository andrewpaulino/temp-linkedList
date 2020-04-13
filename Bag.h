//
// Created by Andrew on 4/1/2020.
//

#ifndef PROJECT5_BAG_H
#define PROJECT5_BAG_H

#include "LinkedList.h"
#include "LinkedList.cpp"
template <class T>
class Bag {

public:
    Bag();
    LinkedList<T> bag;
    bool isEmpty();
    void push(T newValue);
    void remove(T valueToBeRemoved);
    bool find (T valueToBeFound);
    T begin();
    T end();
    int findAmountOf(T valueToBeFound);
    void display();
    int size();
    void removeAll();
private:
    int count;
};



#endif //PROJECT5_BAG_H
