#ifndef NODE_H
#define NODE_H
class Node
{
private:
    int data;
    Node *next;
public:
    Node();
    void setData(int data = 0);
    int getData();

    void setNext(Node *next = nullptr);
    Node * getNext();
    ~Node();
};



#endif //NODE_H