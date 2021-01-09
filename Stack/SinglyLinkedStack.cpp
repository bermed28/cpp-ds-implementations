//
// Created by Fernando Bermudez on 1/8/21.
//

#include "SinglyLinkedStack.h"
using namespace std;

template<class E>
void SinglyLinkedStack<E>::push(E obj){
    Node * newNode = new Node(obj, header->getNext());
    header->setNext(newNode);
    currentSize++;
}

template<class E>
E SinglyLinkedStack<E>:: pop(){

    Node * rmNode = header->getNext();
    E poppedValue = rmNode->getValue();

    header->setNext(rmNode->getNext());
    delete rmNode;
    currentSize--;

    return poppedValue;
}

template<class E>
E SinglyLinkedStack<E>::top(){
    Node * top = header->getNext();
    return top->getValue();
}

template<class E>
void SinglyLinkedStack<E>::clear(){
    while(size() > 0)
        pop();
}

template<class E>
bool SinglyLinkedStack<E>::isEmpty(){
    return size() == 0;
}

template<class E>
int SinglyLinkedStack<E>::size(){
    return currentSize;
}

template class SinglyLinkedStack<int>;