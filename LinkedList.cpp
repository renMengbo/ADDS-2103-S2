#include "LinkedList.h"
#include <iostream>
#include <limits>
using namespace std;

LinkedList::LinkedList()
{
    head = new Node();    
    head->setNext(nullptr);
}
LinkedList::LinkedList(int Array[] ,int size)
{
    head = new Node();    
    head->setNext(nullptr);
    for (int i = 0; i < size; i++)
    {   
        Node *NewNode = new Node();//在堆heap中创建新节点
        NewNode->setData(Array[i]);  //设置新节点的值
        NewNode->setNext(nullptr) ;
        if (i == 0)
        {
            head->setNext(NewNode);           
        } else
        {
            Node *temp=head;
            while( temp->getNext() != nullptr)
            {
                temp = temp->getNext(); //用temp不断指向下一个节点
            }
            //执行到这时，说明temp是最后一个节点，temp的下一个节点为NULL
            temp->setNext( NewNode );//插入节点
        }  

//cout << i<<"$" <<Array[i]<<endl;   
    } 
    

}
int  LinkedList::getSize()
{
    int size = 1;
    Node *temp=head->getNext();
    while( temp->getNext() != nullptr)
    {
        temp = temp->getNext();
        size++;
    }
    return size;
}
void LinkedList::addFront(int newItem)
{
    Node *NewNode = new Node();//在堆heap中创建新节点
    NewNode->setData(newItem);  //设置新节点的值
    if (head->getNext() == nullptr )
    {
        NewNode->setNext(nullptr);//空链表，表设置新节点后面节点的地址为空，链接起来        
    }else
    {
        NewNode->setNext(head->getNext());//非空链表，设置新节点后面节点的地址为头指针中指向的地址，链接起来
    } 
    head->setNext(NewNode);    //新节点的地址放入链表的头指针    
}

void LinkedList::addEnd(int newItem)
{
    Node *NewNode = new Node();//在堆heap中创建新节点
    NewNode->setData(newItem);  //设置新节点的值
    NewNode->setNext(nullptr);//链表最后一个节点，所以设置新节点后面节点的地址为空
    if (head->getNext() == nullptr)
    {
        head->setNext(NewNode) ;//空链表，在head指针中放新节点地址，链接起来
    }else
    {
        Node *temp=head->getNext();
        while( temp->getNext() != nullptr)
        { 
cout << temp->getData()<<"$" << temp->getNext()<<endl;               
            temp = temp->getNext(); //用temp不断指向下一个节点
        }
        //执行到这时，说明temp是最后一个节点，temp的下一个节点为NULL
        temp->setNext( NewNode );//插入节点
cout << endl;        
    } 
}
void LinkedList::addAtPosition(int position, int newItem)
{
    int size = getSize();
    if (position > size)
    {
        addEnd(newItem);
    }else if (position <= 1)
    {
        addFront(newItem);
    }else
    {
        int pos = 1;
        Node *temp=head->getNext();
        Node *Front_temp = temp;
        while( temp->getNext() != nullptr)
        {
            Front_temp = temp; //保存前一个结点       
            temp = temp->getNext();
            pos++;
            if (pos == position )//找到插入点
            {               
            break;
            }
            
        }

        Node *NewNode = new Node();//在堆heap中创建新节点
        NewNode->setData(newItem);  //设置新节点的值
        Front_temp->setNext(NewNode);
        NewNode->setNext(temp );//插入节点
    }    
}

int  LinkedList::search(int item)
{
    int position = 1;
    Node *temp = head->getNext();
    while(temp->getNext() != nullptr)
    {
        if(temp->getData() == item)
        {   
            cout << position << " ";
            return position;
        }        
        temp = temp->getNext();
        position++;
    }
    cout << 0 << " ";
    return 0;
}
void LinkedList::deleteFront()
{   
    Node *temp;
    if (head->getNext() != nullptr)
    {
        temp = head->getNext();
        head->setNext(temp->getNext());
    }
    else //空链表
    {
        return;
    }
}
void LinkedList::deleteEnd()
{
    if (getSize()>1)
    {
        Node *temp=head->getNext();
        Node *Front_temp = temp;
        while( temp->getNext() != nullptr)
        {
            Front_temp = temp; //保存前一个结点       
            temp = temp->getNext();
        }
        Front_temp->setNext(nullptr);
    }else
    {
        return;
    }
}
void LinkedList::deletePosition(int position)
{   
    int size = getSize();
    if (position < 1||position > size)
    {
        cout << "Outside range!" << endl;
    }else
    {
        if (size == 1)
        {
            deleteFront(); 
        }else if (size == position)
        {
            deleteEnd();
        }else        
        {
            int pos = 1;
            Node *temp=head->getNext();
            Node *Front_temp= temp;
            while( temp->getNext() != nullptr)
            {
                Front_temp= temp;
                temp = temp->getNext();
                pos++;
                if (pos == position )//找到position点
                {
                   Front_temp->setNext(temp->getNext());//删除temp节点
                }
            }
        }
    }
}
int  LinkedList::getItem(int position)
{
    if (position >= 1||position <= getSize() )
    {
        int pos = 1;
        Node *temp=head->getNext();
        while( temp->getNext() != nullptr)
        {
            temp = temp->getNext();
            pos++;
            if (position == pos )//找到position点
            {
                cout << temp->getData() <<" ";
                return temp->getData();
            }
        }
        //delete temp;//没有用new申请内存，不需要释放，由于前面已经return，无法在这里释放。
    }     
    cout<<"numeric_limits<int>::max() = "<< numeric_limits<int>::max() <<" " ;  //int的最大值
    return numeric_limits<int>::max();    
}

void LinkedList::printItems()
{
    Node *temp = head;
    while( temp->getNext() != nullptr)
    {
        temp = temp->getNext();
        cout <<temp->getData()<<" ";
    }
    cout <<endl;
}  

LinkedList::~LinkedList()
{
    /*
    Node *temp = nullptr;
    temp = head; //用一个临时节点保存头结点
    //遍历链表，每次先保存头结点的next结点，然后删除头结点
    while (nullptr != temp)
    {
        temp = head->getNext();//取next结点
        delete head;//删除前结点
        head = temp;//重新作为前结点
    }    
    //cout << "链表已经清空\n";
    */
}