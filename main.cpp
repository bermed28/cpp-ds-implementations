#include <iostream>
#include "List/SinglyLinkedList.hpp"

using namespace std;

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

int main() {

     SinglyLinkedList<int> list1;
     SinglyLinkedList<int> list2;

    cout << "*****************************TESTING STARTEED*****************************\n";
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
    cout << "*****************************TESTING COMPLETED*****************************\n";
    return 0;
}
