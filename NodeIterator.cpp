//
// Created by Andrew on 4/1/2020.
//

#include "NodeIterator.h"
template<class T>
const T& NodeIterator<T>::operator*() {
    return current->value;
}

template<class T>
NodeIterator<T> NodeIterator<T>::operator++(int) {
    Node<T>* temp = current;
    current = current->next;
    return *this;
}

template<class T>
bool NodeIterator<T>::operator==(const NodeIterator& other) {
    return current == other.current;
}

template<class T>
bool NodeIterator<T>::operator!=(const NodeIterator& other) {
    return current != other.current;
}

template<class T>
NodeIterator<T> NodeIterator<T>::operator++() {
    return current;
}

template<class T>
NodeIterator<T> NodeIterator<T>::operator--(int) {
    Node<T>* temp = current;
    current = current->getPrev();
    return *this;
}

template<class T>
NodeIterator<T> NodeIterator<T>::operator--() {
    return current;
}

template<class T>
NodeIterator<T>::NodeIterator() {
    current = nullptr;
}

template<class T>
NodeIterator<T>::NodeIterator(Node<T> *inital) {
    current = inital;
}