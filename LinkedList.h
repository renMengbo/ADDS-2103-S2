#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
    Node* head;

public:
    LinkedList();
    //A constructor .

    LinkedList(int* array, int len);
    //A constructor that creates a list of from a C-array of length len.

    ~LinkedList();
    //A destructor that deletes all nodes from the list.

    void insertPosition(int pos, int newNum); 
    //method to insert a new node containing the number newNum into the pos position.
    //A pos of 1 (or less) places a new node at the front of the list.
    //A pos that exceeds the size of the list should add the node to the end of the list.

    bool deletePosition(int pos); 
    //- method to remove the node at position pos from the list and delete it. If it successfully deletes the node, it should return true. 
    //If pos is out-of-bounds, it should return false.

    int get(int pos); 
    //- method that returns pos's Node's data member variable. If pos is out-of-bounds, it should return std::numeric_limits < int >::max().
    // (More info: http://www.cplusplus.com/reference/limits/numeric_limits/Links to an external site.).

    int search(int target); 
    //which searches the list for the first occurrence of target in the list and returns the index of where target is. If target does not exist in the list, return -1.

    void printList(); 
    //- method that prints the data of all the nodes in the list, separated by spaces and encapsulated by '[' and ']'. In the case of an empty list, it prints nothing.
    
    int getSize() ;
    //get LinkList size
};

#endif