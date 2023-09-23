#include "Node.h"

Node::Node()
{
}

void Node::setData(int data)
{
    this->data = data;
}

int Node::getData()
{
    return this->data;
}

void Node::setNext(Node *next)
{
    this->next =next;
}

Node* Node::getNext()
{
    return this->next;
}

Node::~Node()
{
}