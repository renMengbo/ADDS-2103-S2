#ifndef NODE_H
#define NODE_H

class Node {    
private:
    int data = 0;
    Node* link = nullptr;
public:

    Node();
    void setData(int data);
    int getData();

    void setLink(Node *link);
    Node * getLink();

    ~Node();
};

#endif
