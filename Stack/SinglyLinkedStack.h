//
// Created by Fernando Bermudez on 1/8/21.
//

#ifndef CPP_DATA_SINGLYLINKEDSTACK_H
#define CPP_DATA_SINGLYLINKEDSTACK_H

#include <stdexcept>
using namespace std;




template <class E>
class SinglyLinkedStack {

    private:

        class Node{

        private:
            E value;
            Node * next;

        public:
            Node(E obj, Node * nextNode) : value{obj}, next{nextNode} {}

            Node(E obj) : Node{obj, nullptr} {/*Delegate to other constructor*/}

            Node() {
                value = NULL;
                next = nullptr;
            }

            ~Node(){
                value = NULL;
                next = nullptr;
            }

            E getValue(){
                return value;
            }

            Node* getNext(){
                return next;
            }

            void setValue(E obj){
                value = obj;
            }

            void setNext(Node * nextNode){
                next = nextNode;
            }
        };//End of Node class

        //Private Fields
        Node * header;
        int currentSize;


    public:

        SinglyLinkedStack(){
            header = new Node();
            currentSize = 0;
        }

        void push(E obj);
        E pop();
        E top();
        void clear();
        bool isEmpty();
        int size();

};

#endif //CPP_DATA_SINGLYLINKEDSTACK_H
