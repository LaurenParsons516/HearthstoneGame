#include "Node.hpp"

class LinkedList
{
    private:
        Node* head;
        Node* tail;
        int count;
        Node* get(int index);
        void swap(int index1, int index2);

    public:
        LinkedList();
        void addEnd(int c);
        void mergeSort(int begin, int end);
        void display();
        int getCount();
        void insertionSortOnDefense();
};