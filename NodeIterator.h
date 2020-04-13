//
// Created by Andrew on 4/1/2020.
//

#ifndef PROJECT5_NODEITERATOR_H
#define PROJECT5_NODEITERATOR_H
#include <iterator>

template <class T>
struct Node {
    T value;
    Node* next = nullptr;
    Node* prev = nullptr;

};


template<class T>
class NodeIterator : public std::iterator<std::forward_iterator_tag, T> {
private:
    Node<T>* current;
public:
    const T& operator*();
    NodeIterator();
    NodeIterator(Node<T>* initial);
    bool operator==(const NodeIterator& other);
    friend std::ostream& operator<<(std::ostream& os, const NodeIterator<T>& dt) {
        os << "{" << std::endl;
        os << "  " <<dt.current->value.first << ": " << dt.current->value.second << std::endl;
        os << "}" << std::endl;
        return os;
    }
    bool operator!=(const NodeIterator& other);
    NodeIterator<T> operator++(int);
    NodeIterator<T> operator++();
    NodeIterator<T> operator--(int);
    NodeIterator<T> operator--();
};



#endif //PROJECT5_NODEITERATOR_H
