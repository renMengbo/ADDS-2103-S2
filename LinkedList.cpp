#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

/////////// your code goes here... DO NOT change the function signatures ///////////

bool LinkedList::swap(int pos1, int pos2) {

  // 交换节点数据实现交换
  Node* tmp = head;
  Node* node1 = nullptr;
  Node* node2 = nullptr;

  for (int i = 0; i < pos1; i++) {
    node1 = tmp;
    tmp = tmp->link;
  }

  for (int i = 0; i < pos2; i++) {  
    node2 = tmp;
    tmp = tmp->link;
  }

  // 数据交换
  if (node1 != nullptr && node2 != nullptr) {
    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
    return true;
  }

  return false;
}


bool LinkedList::swap(int pos1, int pos2) {
   // 交换节点链接实现交换
  Node* tmp = head; 
  Node* prev1 = nullptr;
  Node* node1 = nullptr;
  
  for (int i = 0; i < pos1; i++) {
    prev1 = tmp;
    node1 = tmp;
    tmp = tmp->link;
  }

  Node* prev2 = nullptr;
  Node* node2 = nullptr;
  
  for (int i = 0; i < pos2; i++) {
    prev2 = tmp;
    node2 = tmp;
    tmp = tmp->link; 
  }

  // 交换节点
  if (node1 != nullptr && node2 != nullptr) {
    
    if (prev1 != nullptr) {
      prev1->link = node2; 
    } else { // node1是头节点
      head = node2;
    }

    if (prev2 != nullptr) {
      prev2->link = node1;
    } else { // node2是头节点
      head = node1; 
    }
    //交换链接
    Node* temp = node1->link;
    node1->link = node2->link;
    node2->link = temp;
    
    return true;

  }

  return false;
}


bool LinkedList::find_and_delete(int target)
{
	Node *curr = head;
	Node *prev = nullptr;

	while (curr != nullptr)
	{
		if (curr->data == target)
		{
			if (prev == nullptr)
			{
				// Deleting head node
				head = curr->link;
			}
			else
			{
				prev->link = curr->link;
			}
			delete curr;
			return true;
		}
		prev = curr;
		curr = curr->link;
	}

	return false;
}
