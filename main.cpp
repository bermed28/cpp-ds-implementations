#include <iostream>
#include "List/SinglyLinkedList.hpp"
#include "Stack/SinglyLinkedStack.h"
#include "Queue/StackQueue.h"

void printQueue(StackQueue<int> queue);

using namespace std;

int main() {
    cout << "*****************************TESTING STARTED*****************************\n";
/////////////////////////*SINGLY LINKED LIST*////////////////////////////////////////////
/*
     SinglyLinkedList<int> list1;
     SinglyLinkedList<int> list2;


    cout << "\n";

    cout << "Adding to List 1....\n";
    list1.add(1);
    list1.add(2);
    list1.add(3);
    list1.add(4);
    list1.add(5);

    cout << "------------------------\n";
    cout << "Adding to List 2....\n";
    list2.add(1);
    list2.add(2);
    list2.add(4);
    list2.add(5);

    cout << "------------------------\n";
    cout << "List 1: ";
    printList(list1);

    cout << "List 2: ";
    printList(list2);

    cout << "------------------------\n";
    cout << "Are Lists Equal? " << boolalpha << list1.equals(list2) << endl;
    cout << "Adding 3 to List 2 at position 2....\n";
    list2.add(2, 3);
    cout << "List 2: ";
    printList(list2);
    cout << "Are Lists Equal? " << boolalpha <<  list1.equals(list2) << endl;

    cout << "------------------------\n";
    cout << "Removing 4 & 5 from List 1...";
    list1.remove(4);
    list1.remove(5);

    cout << "List 1: ";
    printList(list1);

    cout << "------------------------\n";
    cout << "Adding 6 & 7 to List 1 at positions 1 & 3....\n";
    list1.add(1, 6);
    list1.add(3,7);
    cout << "Adding 8, 1 & 3 to List 1...\n";
    list1.add(8);
    list1.add(1);
    list1.add(3);

    cout << "List 1: ";
    printList(list1);

    cout << "------------------------\n";
    cout << "Removing copies of 1 in List 1...\n";
    cout << "Copies removed: " << list1.removeAll(1) << endl;
    cout << "List 1: ";
    printList(list1);

    cout << "------------------------\n";
    cout << "Removing copies of 3 in List 1..." << endl;
    cout << "Copies removed: " <<  list1.removeAll(3) << endl;
    cout << "List 1: ";
    printList(list1);

    cout << "------------------------\n";
    cout << "Element at position 0 in List 1: " << list1.get(0) << endl;


    cout << "------------------------\n";
    cout << "Setting 9 at position 0 in List 1. Element that was replaced: " << list1.set(0,9) << endl;
    cout << "List 1: ";
    printList(list1);

    cout << "------------------------\n";
    cout << "First Element in List 1: " << list1.first() << endl;
    cout << "Last Element in List 1: " <<  list1.last() << endl;

    cout << "------------------------\n";

    list1.add(3,3);
    list1.add(0,3);
    cout << "First Index of Jim copy in List 1: " <<  list1.firstIndex(3) << endl;
    cout << "Last Index of Jim copy in List 1: " <<  list1.lastIndex(3) << endl;
    cout << "List 1: ";
    printList(list1);

    cout << "------------------------\n";

    list1.removeAtIndex(list1.firstIndex(3));
    cout << "Removing 3 at it's first index...\n";
    cout << "List 1: ";
    printList(list1);


    cout << "------------------------\n";
    cout << "Clearing List 2...\n";
    list2.clear();
    cout << "List 2: ";
    printList(list2);
    cout << "Is List 2 empty? " << boolalpha << list2.isEmpty() << endl;
    cout << "Is List 1 empty? " << boolalpha << list1.isEmpty() << endl;


    cout << "------------------------\n";
    cout << "List 1: ";
    printList(list1);
    cout << "Replacing all copies of 3 with 1...\n";
    list1.replaceAll(3, 1);
    cout << "List 1: ";
    printList(list1);

    cout << "" << endl;

*/
/////////////////////////*SINGLY LINKED STACK*////////////////////////////////////////////
/*
    SinglyLinkedStack<int> stack;

    cout << "Pushing 1, 2, 3 to stack...\n";

    stack.push(1);
    stack.push(2);
    stack.push(3);


    printStack(stack);


    cout << "Top of Stack: " << stack.top() << endl;

    cout << "-----------------------------\n";

    cout << "Size of stack: " << stack.size() << " elements\n";

    cout << "Pushing 5, 6, 7, 8 to stack...\n";

    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);

    printStack(stack);


    cout << "Top of Stack: " << stack.top() << endl;

    cout << "-----------------------------\n";

    cout << "Popping 3 elements from stack...\n";

    for (int i = 0; i < 3; i++) stack.pop();

    printStack(stack);

    cout << "-----------------------------\n";

    cout << "Pushing 2020, 2021, 2000, 2001 to stack...\n";

    stack.push(2020);
    stack.push(2021);
    stack.push(2000);
    stack.push(2001);

    printStack(stack);
    cout << "Top of Stack: " << stack.top() << endl;

    cout << "-----------------------------\n";

    cout << "Clearing Stack...\n";
    stack.clear();
    printStack(stack);

*/

/////////////////////////*STACKQUEUE (Queue Made with 2 Singly Linked Stacks)*////////////////////////////////////////////
/*
    StackQueue<int> queue;

    cout << "Enqueueing 1, 2, 3 to StackQueue...\n";

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);


    printQueue(queue);


    cout << "Front of Queue: " << queue.front() << endl;

    cout << "-----------------------------\n";

    cout << "Size of Queue: " << queue.size() << " elements\n";

    cout << "Enqueueing 5, 6, 7, 8 to queue...\n";

    queue.enqueue(5);
    queue.enqueue(6);
    queue.enqueue(7);
    queue.enqueue(8);

    printQueue(queue);


    cout << "Front of Queue: " << queue.front() << endl;

    cout << "-----------------------------\n";

    cout << "Deququeing 3 elements from queue...\n";

    for (int i = 0; i < 3; i++) queue.dequeue();

    printQueue(queue);

    cout << "-----------------------------\n";

    cout << "Enqueuing 2020, 2021, 2000, 2001 to Queue...\n";

    queue.enqueue(2020);
    queue.enqueue(2021);
    queue.enqueue(2000);
    queue.enqueue(2001);

    printQueue(queue);
    cout << "Front of Queue: " << queue.front() << endl;

    cout << "-----------------------------\n";

    cout << "Clearing Queue...\n";
    queue.clear();
    printQueue(queue);
*/
    cout << "*****************************TESTING COMPLETED*****************************\n";
    return 0;
}

void printQueue(StackQueue<int> queue) {
    int i = 0;
    cout << "[";
    while(i < queue.size()){
        if(i != queue.size() - 1) {
            cout << queue.front() << ", ";
            queue.enqueue(queue.dequeue());
        } else {
            cout << queue.front() << "]\n";
            queue.enqueue(queue.dequeue());
        }
        i++;
    }
}

void printList(SinglyLinkedList<int> l){
    for(int i = 0; i < l.size(); i++){
        if(i == 0){
            cout << "[" << l.get(i) << ", ";
        } else if(i == l.size() - 1){
            cout << l.get(i) << "]" << endl;
        } else {
            cout << l.get(i) << ", ";
        }
    }
}

void printStack(SinglyLinkedStack<int> s){
    SinglyLinkedStack<int> temp;

    cout << "Stack: ";

    if(s.isEmpty()) {
        cout << "[]\n";

    } else {
        while (!s.isEmpty())
            temp.push(s.pop());

        cout << "[";
        while (temp.size() > 1) {
            int poppedValue = temp.pop();

            cout << poppedValue << ", ";

            s.push(poppedValue);
        }

        cout << temp.top() << "]" << endl;

        s.push(temp.pop());
    }
}

