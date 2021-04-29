#include "Card.hpp"

class Node
{
    private:
        int payload;
        Node* nextNode;
        Node* prevNode;

    public:
        Node(int payload);
        int getPayload();
        Node* getNextNode();
        Node* getPrevNode();
        void setNextNode(Node* n);
        void setPrevNode(Node* n);
        void setPayload(int payload);
};