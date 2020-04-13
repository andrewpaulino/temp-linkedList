//
// Created by Andrew on 4/1/2020.
//

#include "Bag.h"
template <class T>
Bag<T>::Bag() {
    count = 0;

}

template <class T>
void Bag<T>::push(T newValue) {
    bag.push(newValue);
    count += 1;
}

template <class T>
void Bag<T>::display() {
    bag.print();
}

template <class T>
bool Bag<T>::isEmpty() {
    return bag.isEmpty();
}

template <class T>
void Bag<T>::remove(T valueToBeRemoved) {
    bag.remove(valueToBeRemoved);
}

template <class T>
bool Bag<T>::find(T valueToBeFound) {
    bag.find(valueToBeFound);
}

template <class T>
int Bag<T>::findAmountOf(T valueToBeFound) {

    return bag.findAll(valueToBeFound);

}

template <class T>
int Bag<T>::size() {
    return count;
}

template <class T>
void Bag<T>::removeAll() {
    bag.empty();
}

template <class T>
T Bag<T>::end() {
    return bag.getTail()->second();
}

template <class T>
T Bag<T>::begin() {
    return bag.getHead()->second();
}