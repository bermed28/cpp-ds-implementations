//
// Created by Fernando Bermudez on 1/8/21.
//


#pragma once
#include <stdexcept>

using namespace std;

template <class E>
class SinglyLinkedList {

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
        }; //End of Node class



        //Private Fields
        Node * header;
        int currentSize;

        Node * getNode(int index){
            if(index < -1 || index >= size())
                throw std::out_of_range("Index out of bounds");

            Node * curNode = header;

            for (int i = -1; i < index; i++)
                curNode = curNode->getNext();

            return curNode;
        }

    public:

        //Constructor
        SinglyLinkedList(){
            header = new Node();
            currentSize = 0;
        }

        //Public ADT Methods Signatures
        void add(E obj);
        void add(int index, E obj);
        bool remove(E obj);
        bool removeAtIndex(int index);
        int removeAll(E obj);
        E get(int index);
        E set(int index, E obj);
        E first();
        E last();
        int firstIndex(E obj);
        int lastIndex(E obj);
        int size();
        bool isEmpty();
        bool contains(E obj);
        void clear();
        int replaceAll(E e, E f);
        SinglyLinkedList<E> reverse();
        bool equals(SinglyLinkedList<E> l);


};





