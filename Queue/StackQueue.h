//
// Created by Fernando Bermudez on 1/8/21.
//

#ifndef CPP_DATA_STACKQUEUE_H
#define CPP_DATA_STACKQUEUE_H

#include "../Stack/SinglyLinkedStack.h"

template<class E>
class StackQueue {

    private:
        SinglyLinkedStack<E> * mainStack;
        SinglyLinkedStack<E> * helperStack;

    public:
        StackQueue(){
            mainStack = new SinglyLinkedStack<E>;
            helperStack = new SinglyLinkedStack<E>;
        }

        void enqueue(E obj);
        E dequeue();
        E front();
        int size();
        bool isEmpty();
        void clear();

};


#endif //CPP_DATA_STACKQUEUE_H
