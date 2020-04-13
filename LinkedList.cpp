//
// Created by Andrew on 4/1/2020.
//
#include <iostream>
#include "LinkedList.h"
template<class T>

NodeIterator<T> LinkedList<T>::end() {
    NodeIterator<T> temp;
    return temp;
}

template<class T>
NodeIterator<T> LinkedList<T>::begin() {
    NodeIterator<T> temp(head);
    return temp;
}


template <class T>
Node<T>* LinkedList<T>::search(T value) {
    Node<T> *temp;
    temp = head;

    if (std::is_same<T, std::pair<std::string, int>>::value) {
        //We are using keyed map
        std::string key = value.first();
        int val = value.second();

        while (temp->next != nullptr) {
            if (val == temp->value.second() && key == temp->value.first()) {
                return temp;
            } else {
                temp = temp->next;
            }
        }
        return nullptr;

    } else {
        //normal linkedlist

        while (temp->next != nullptr) {
            if (value == temp->value) {
                return temp;
            } else {
                temp = temp->next;
            }
        }
        return nullptr;

    }


}

template<class T>
void LinkedList<T>::remove(T value) {
    Node<T> *findNode;
    findNode = search(value);
    if (findNode != nullptr) {
        Node<T> *temp;

        temp = head;
        while (temp->next != findNode) {
            temp = temp->next;
        }
        temp->next = findNode->next;
        temp->prev = findNode->prev;
        delete findNode;
    }

}

template<class T>
void LinkedList<T>::insertTail(T value) {
    Node<T> *temp = new Node<T>;
    temp->value = value;
    temp->next = nullptr;
    temp->prev = tail->prev;
    tail->next = temp;
    tail = temp;

}

template<class T>
void LinkedList<T>::insertHead(T value) {


    Node<T> *temp = new Node<T>;
    temp->value = value;
    temp->prev = nullptr;
    temp->next = head;
    head->prev = temp;
    head = temp;


}
template <class T>
void LinkedList<T>::print() {
    Node<T> *temp;

    temp = head;
//    if (std::is_same<T, std::pair<std::string, int>>::value) {
//        while (temp != nullptr) {
//            std::cout << "| Previous: " << temp->prev << " Value (pair): <'" << temp->value.first << "': "
//                      << temp->value.second << " >" << " Current: " << temp << " Next: " << temp->next << "| "
//                      << std::endl;
//
//            temp = temp->next;
//        }
//    }
////    } else {
//        while (temp != nullptr) {
//            std::cout << "| Previous: " << temp->prev << " Value: " << temp->value << " Current: " << temp << " Next: "
//                      << temp->next << "| " << std::endl;
//
//            temp = temp->next;
//        }
//    }
}


template<class T>
void LinkedList<T>::push(T value) {
    Node<T>* temp = new Node<T>;
    temp->value = value;

    if (head == nullptr) {
        head = temp;
        head->prev = nullptr;
        tail = temp;
    } else {
        temp->prev = tail;
        tail->next = temp;
        tail = tail->next;
        tail->next = nullptr;
    }

}

template<class T>
void LinkedList<T>::insertBefore(T valueToBeInserted, T valueToBeFound) {
    Node<T> *temp;
    temp = search(valueToBeFound);

    if (temp != nullptr) {
        Node<T> *newTemp = new Node<T>;
        newTemp->value = valueToBeInserted;
        newTemp->next = temp;
        newTemp->prev = temp->prev;

        temp->prev = newTemp;
    }


}

template<class T>
Node<T> *LinkedList<T>::getHead() {
    return head;
}

template<class T>
Node<T> *LinkedList<T>::getTail() {
    return tail;
};