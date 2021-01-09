//
// Created by Fernando Bermudez on 1/8/21.
//

#include "StackQueue.h"

/*
 * Implementation of a Singly Linked Queue using 2 Singly Linked Stacks
 */
template<class E>
void StackQueue<E>::enqueue(E obj){

    while(!mainStack->isEmpty()) helperStack->push(mainStack->pop());

    mainStack->push(obj);

    while(!helperStack->isEmpty()) mainStack->push(helperStack->pop());

}

template<class E>
E StackQueue<E>::dequeue(){
    return mainStack->pop();
}

template<class E>
E StackQueue<E>::front(){
    return mainStack->top();
}

template<class E>
int StackQueue<E>::size(){
    return mainStack->size();
}

template<class E>
bool StackQueue<E>::isEmpty(){
    return size() == 0;
}

template<class E>
void StackQueue<E>::clear(){
    while(size() > 0)
        dequeue();
}

template class StackQueue<int>;