//
// Created by Fernando Bermudez on 1/8/21.
//

#include "SinglyLinkedList.hpp"

template<class E>
void SinglyLinkedList<E>::add(E obj) {
    Node * curNode = header;
    while(curNode->getNext() != nullptr) curNode = curNode->getNext();

    Node * newNode = new Node(obj);
    curNode->setNext(newNode);
    currentSize++;

}

template<class E>
void SinglyLinkedList<E>::add(int index, E obj) {

    if(index < 0 || index >= size())
        throw std::out_of_range("Index out of bounds");

    if(index == size()) add(obj);
    else {
        Node *prevNode = getNode(index - 1);
        Node *newNode = new Node(obj, prevNode->getNext());
        prevNode->setNext(newNode);
        currentSize++;
    }
}

template<class E>
bool SinglyLinkedList<E>::remove(E obj) {

    Node * curNode = header;
    Node * nextNode = curNode->getNext();

    // Traverse the list until we find the element or we reach the end
    while (nextNode != nullptr && nextNode->getValue() != obj) {
        curNode = nextNode;
        nextNode = nextNode->getNext();
    }

    // Need to check if we found it
    if (nextNode != nullptr) { // Found it!
        // If we have A -> B -> C and want to remove B, make A point to C
        curNode->setNext(nextNode->getNext());
        delete nextNode; // free up resources
        currentSize--;
        return true;
    }
    else
        return false;
}

template<class E>
bool SinglyLinkedList<E>::removeAtIndex(int index) {
    if(index < 0 || index >= size())
        throw std::out_of_range("Index out of bounds");

    Node * predecessorNode = getNode(index - 1);
    Node * nodeToRemove = predecessorNode->getNext();

    predecessorNode->setNext(nodeToRemove->getNext());

    delete nodeToRemove;
    currentSize--;
    return true;
}

template<class E>
int SinglyLinkedList<E>::removeAll(E obj) {
    int copiesRemoved = 0;
    Node * predecessorNode = header;
    Node * curNode = predecessorNode->getNext();

    while(curNode != nullptr){

        if(curNode->getValue() == obj){
            predecessorNode->setNext(curNode->getNext());
            currentSize--;
            copiesRemoved++;

            curNode = curNode->getNext();
        } else {
            predecessorNode = curNode;
            curNode = curNode->getNext();

        }
    }

    return copiesRemoved;
}

template<class E>
E SinglyLinkedList<E>::get(int index) {
    return getNode(index)->getValue();
}

template<class E>
E SinglyLinkedList<E>::set(int index, E obj) {
    if(index < 0 || index >= size())
        throw std::out_of_range("Index out of bounds");

    Node * curNode = getNode(index);

    E oldValue = curNode->getValue();
    curNode->setValue(obj);
    return oldValue;
}

template<class E>
E SinglyLinkedList<E>::first() {
    return get(0);
}

template<class E>
E SinglyLinkedList<E>::last() {
    return get(size() - 1);
}

template<class E>
int SinglyLinkedList<E>::firstIndex(E obj) {

    int i = 0;
    for(Node * curNode = header->getNext(); curNode != nullptr; curNode = curNode->getNext(), i++){
        if(curNode->getValue() == obj) {
            return i;
        }
    }

    return -1;
}

template<class E>
int SinglyLinkedList<E>::lastIndex(E obj) {
    int curPos = -1;
    int i = 0;
    for(Node * curNode = header->getNext(); curNode != nullptr; curNode = curNode->getNext(), i++){
        if(curNode->getValue() == obj) {
            curPos = i;
        }
    }

    return curPos;
}

template<class E>
int SinglyLinkedList<E>::size() {
    return currentSize;
}

template<class E>
bool SinglyLinkedList<E>::isEmpty() {
    return size() == 0;
}

template<class E>
bool SinglyLinkedList<E>::contains(E obj) {

    for(Node * curNode = header->getNext(); curNode != nullptr; curNode = curNode->getNext()){
        if(curNode->getValue() == obj) return true;
    }

    return false;
}

template<class E>
void SinglyLinkedList<E>::clear() {
    while(size() > 0)
        removeAtIndex(0);
}

template<class E>
int SinglyLinkedList<E>::replaceAll(E e, E f) {
    int copiesReplaced = 0;
    for(Node * curNode = header->getNext(); curNode != nullptr; curNode = curNode->getNext()){

        if(curNode->getValue() == e){
            curNode->setValue(f);
            copiesReplaced++;
        }

    }
    return copiesReplaced;
}

template<class E>
SinglyLinkedList<E> SinglyLinkedList<E>::reverse() {
    SinglyLinkedList<E> result;

    for (Node * curNode = header->getNext(); curNode != nullptr; curNode = curNode->getNext()) {
        result.add(0, curNode->getValue());
    }

    return result;
}

template<class E>
bool SinglyLinkedList<E>::equals(SinglyLinkedList<E> l) {

    int i = 0;
    int j = 0;

    Node * curNode = header->getNext();

    while(i < size() && j < l.size()){
        E lValue = l.get(i);
        if(curNode->getValue() != lValue)
            return false;

        i++;
        j++;
        curNode = curNode->getNext();
    }
    return true;
}

template class SinglyLinkedList<int>;
