//
// Created by Andrew on 4/1/2020.
//

#ifndef PROJECT5_LINKEDLIST_H
#define PROJECT5_LINKEDLIST_H

#include "NodeIterator.h"
#include "NodeIterator.cpp"
#include <type_traits>
#include <utility>

//  Key should be string
// <"Key", Data ("String", 10, 'c')>
template <class T>
class LinkedList {
private:
    Node<T>* head = nullptr;
    Node<T>* tail = nullptr;
public:
    typedef NodeIterator<T> iterator;
    void insertBefore(T valueToBeInserted,  T valueToBeFound);
    void insertAfter(T valueToBeInserted,  T valueToBeFound);
    int getSize();
    Node<T>* getHead();
    Node<T>* getTail();
    int findAll(T value);
    void empty();
    void insertHead(T value);
    void push(T value);
    void insertTail(T value);
    void remove(T value);
    Node<T>* search(T value);
    void print();
    NodeIterator<T> begin();
    NodeIterator<T> end();
};


#endif //PROJECT5_LINKEDLIST_H
