#include <iostream>  
#include "LinkedList.h"  
  
// Node类的构造函数实现（在LinkedList.cpp中定义是因为Node是LinkedList的友元类）  
Node::Node(int data_in, Node* link_in) 
{
    this->data = data_in;
    this->link = link_in;
}
  
// LinkedList类的构造函数  
LinkedList::LinkedList() //: head(nullptr) {}  
{
    head = nullptr;
}
  
// LinkedList类的析构函数  
LinkedList::~LinkedList() {  
    Node* current = head;  
    while (current != nullptr) {  
        Node* next = current->link;  
        delete current;  
        current = next;  
    }  
    head = nullptr;  
}  
  
// 在链表头部插入元素  
void LinkedList::insertFront(int item) {  
    Node* newNode = new Node(item, head);  
    head = newNode;  
}  
  
// 删除链表头部的元素  
void LinkedList::deleteFront() {  
    if (head != nullptr) {  
        Node* temp = head;  
        head = head->link;  
        delete temp;
    }  
}  
  
// 打印链表  
void LinkedList::printList() {  
    Node* current = head;  
    while (current != nullptr) {  
        std::cout << current->data << " ";  
        current = current->link;  
    }  
    std::cout << std::endl;  
}  
  
// 交换链表中的两个元素（位置从1开始计数）  
// 注意：此函数未给出完整实现，因为需要遍历链表以找到对应位置的节点  

bool LinkedList::swap(int pos1, int pos2) {

  // 查找pos1位置的节点
  Node* prev1 = nullptr; 
  Node* curr1 = head;
  for(int i = 0; i < pos1; i++) {
    prev1 = curr1;
    curr1 = curr1->link;
  }

  // 查找pos2位置的节点
  Node* prev2 = nullptr;
  Node* curr2 = head;
  for(int i = 0; i < pos2; i++) {
    prev2 = curr2;
    curr2 = curr2->link;
  }

  // 交换两节点
  if(prev1 != nullptr) {
    prev1->link = curr2; 
  } else {
    head = curr2;
  }

  if(prev2 != nullptr) {
    prev2->link = curr1;
  } else {
    head = curr1; 
  }
  
  // 交换curr1和curr2的link指针
  Node* temp = curr1->link;
  curr1->link = curr2->link;
  curr2->link = temp;

  return true;
}

bool LinkedList::swap(int pos1, int pos2) {
  
    Node* node1 = head;
    for (int i = 0; i < pos1; i++) {
        node1 = node1->next;
    }
    Node* node2 = head;
    for (int i = 0; i < pos2; i++) {
        node2 = node2->next;
    }
    if (node1 == nullptr || node2 == nullptr) {
        return false;
    }
    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
    return true;
}

  
// 查找并删除链表中的元素  
bool LinkedList::find_and_delete(int target) {  
    Node* current = head;  
    Node* prev = nullptr;  
  
    while (current != nullptr && current->data != target) {  
        prev = current;  
        current = current->link;  
    }  
  
    if (current == nullptr) {  
        // 未找到目标元素  
        return false;  
    }  
  
    // 删除元素  
    if (prev == nullptr) {  
        // 删除头节点  
        head = current->link;  
    } else {  
        // 删除其他节点  
        prev->link = current->link;  
    }  
  
    delete current;  
    return true;  
}