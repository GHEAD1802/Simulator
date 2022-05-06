#pragma once
#include "ListItem.h"

class Node;
class PriorityQueue

{
private:
        Node *top;
        Node *back;
        int Size;
public:
        PriorityQueue(); 
        int getSize();
        bool isEmpty();
        void enqueue(ListItem *item);
        ListItem *getFront();
        ListItem *dequeue();
	    void print();

};

