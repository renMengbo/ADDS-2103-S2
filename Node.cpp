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

void Node::setLink(Node *link)
{
    this->link =link;
}

Node* Node::getLink()
{
    return this->link;
}

Node::~Node()
{
}