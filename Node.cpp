#include "Node.hpp"
#include <stdlib.h>

Node::Node(int payload)
{
    this->payload = payload;
    this->prevNode = NULL;
    this->nextNode = NULL;
}

int Node::getPayload()
{
    return this->payload;
}

Node* Node::getNextNode()
{
    return this->nextNode;
}

Node* Node::getPrevNode()
{
    return this->prevNode;
}

void Node::setNextNode(Node* n)
{
    this->nextNode = n;
}

void Node::setPrevNode(Node* n)
{
    this->prevNode = n;
}

void Node::setPayload(int payload)
{
    this->payload = payload;
}
