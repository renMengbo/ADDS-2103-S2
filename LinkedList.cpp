#include "LinkedList.h"
#include <iostream>
#include <limits>


LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len)
{   
    Node *current = nullptr;      //当前节点指针
    for (int i = 0; i < len; i++)
    {   
        Node *NewNode = new Node();//在堆heap中创建新节点
        NewNode->setData(array[i]);  //设置新节点的值，数组以地址（指针）传入，使用采用数组名和索引
        NewNode->setLink(nullptr) ;
        if (i == 0)
        {
            head = NewNode; 
            current =  head;          //当前节点指针指向第一个节点，即头中存储的地址    
        } else
        {
            current->setLink(NewNode) ;  //前节点地址指向新节点
            current = NewNode;        //当前节点指针移到新节点地址
        }  

//cout << i<<"$" <<array[i]<<endl;   
    }   

}

LinkedList::~LinkedList() {
    Node* current = head;  
    while(current != nullptr) {  
        Node* next = current->getLink();  //保存准备删除的当前地址里存储的下节点地址
        delete current;              //通过逐个采用关键字delete 释放当前地址
        current = next;  
    }  
}


void LinkedList:: insertPosition(int pos, int newNum){
    //method to insert a new node containing the number newNum into the pos position.
    //A pos of 1 (or less) places a new node at the front of the list.
    //A pos that exceeds the size of the list should add the node to the end of the list. 
    Node* newNode = new Node;  
    newNode->setData(newNum);
 //   newNode->setLink(nullptr) ;
      
    if (pos <= 1) {              //头部插入
        newNode->setLink(head) ; //把head里面存放的下一节点地址，放入新节点，这样在链表头部插入节点
        head = newNode;          // head存放在头部插入的新节点地址
    } else {  
        Node* prev = head;  //找到插入位置的前一节点
        int index = 1;  
        while (index < pos - 1 && prev != nullptr) {  //pos =2 ，插入2-3之间，先找到2节点
            prev = prev->getLink(); //prev = prev->next;  
            index++;  
        }  
  
        if (prev == nullptr) {  //给的位置超出list的边界
            return;  
        }  
  
        // 插入新节点
        newNode->setLink(prev->getLink()) ;   //  newNode->next = prev->next;  
        prev->setLink(newNode);   //prev->next = newNode;  
    }      
}

    //- method to remove the node at position pos from the list and delete it. If it successfully deletes the node, it should return true. 
    //If pos is out-of-bounds, it should return false.
bool LinkedList::deletePosition(int pos) {  
    if (pos < 1 || pos > getSize()) {  
        return false; // Position is out of bounds  
    }  
  
    Node* prev = head;  
    Node* current = head->getLink();  
    int index = 1;  
  
    while (index < pos - 1) {  
        prev = current;  
        current = current->getLink();  
        index++;  
    }  
  
    prev->setLink(current->getLink()); // 把当前节点里面存放的后一节点地址，放入前一节点存储，跳过了当前节点
    delete current;                    // 通过 Delete 释放当前节点内存  
  
    return true; 
}

int LinkedList::get(int pos) {  
    //- method that returns pos's Node's data member variable. If pos is out-of-bounds, it should return std::numeric_limits < int >::max().
    // (More info: http://www.cplusplus.com/reference/limits/numeric_limits/Links to an external site.).    
    if (pos < 1 || pos > getSize()) {  
        return std::numeric_limits<int>::max();  
    }  
  
    Node* current = head;  
    for (int i = 1; i < pos; i++) {  
        if (current == nullptr) {  
            return std::numeric_limits<int>::max();  
        }  
        current =  current->getLink();;  
    }  
  
    if (current == nullptr) {  
        return std::numeric_limits<int>::max();  
    }  
  
    return current->getData();  
}

int LinkedList::search(int target) {
    //which searches the list for the first occurrence of target in the list and returns the index of where target is. If target does not exist in the list, return -1.  
    Node* current = head; //开始从头部节点搜索  
    int index = 0; //用于记录当前节点的索引  
  
    while (current != nullptr) {  
        if (current->getData() == target) {  
            //找到匹配的节点，返回其索引  
            return index;  
        }  
        current = current->getLink(); //移动到下一个节点  
        index++; //更新索引  
    }  
  
    //如果遍历完整个链表仍未找到匹配的节点，返回-1  
    return -1;  
}


void LinkedList::printList() {
    //- method that prints the data of all the nodes in the list, separated by spaces and encapsulated by '[' and ']'. In the case of an empty list, it prints nothing.
    Node* current = head; 
    std::cout << "[" ; 
    while (current != nullptr) { 
        std::cout << current->getData() << " "; 
        current = current->getLink(); 
    } 
    std::cout <<"]"<< std::endl; 
}

int LinkedList::getSize() {
    //get LinkList size
    unsigned int position = 0;
    Node* current = head; 

    while (current != nullptr) { 
        current = current->getLink(); 
        position++;
    } 
        
    return position;
}


