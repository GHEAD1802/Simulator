#include <iostream>
#include "PriorityQueue.h"
#include "Node.h"
#include "Event.h"
using namespace std;
PriorityQueue::PriorityQueue() :top(nullptr), back(nullptr), Size(0) {}
int PriorityQueue::getSize(){ return Size; }
bool PriorityQueue::isEmpty(){ return Size == 0; }

void PriorityQueue::enqueue(ListItem *item)
{
        // When queue does not have anything in there-empty queue case
        if(top == nullptr)
        {
                top = new Node(item, nullptr);
                back = top;
        }
        //when queue-not null case
        else 
        {
            Node *adder = new Node(item,nullptr);
            Node *curr = top;
            Node *prev = nullptr;
            Event *ee = (Event*)(item);
            bool flag = false;
            while(curr!=nullptr && flag==false)
            {
                ListItem *li = curr->getItem();
                Event *e1 = (Event*)li;

                if(ee->compareTo(e1)<1)  //check for the proirity of the event.
                {
                        if(prev!=nullptr)
                        {
                            prev->setNext(adder);
                            adder->setNext(curr);
                        }
                        else
                        {
                            adder->setNext(curr);
                            top=adder;
                        }

                    flag=true;
                }
                
                prev = curr;
                curr = curr->getNext();
            }
            
            if(flag==true)
            {
            ListItem *li = prev->getItem();
                Event *e1 = (Event*)li;
            
                if(ee->compareTo(e1) == 1)
                {
                    prev->setNext(adder);
                    adder->setNext(nullptr);
                    back=adder;
                }
                
            }
        }
        Size++;
}// enqueue

//delete the first item from the queue
ListItem *PriorityQueue::dequeue()
{
        ListItem *newItem = nullptr;
        Node *newNode = top;
        if(top != nullptr){
                newItem = top->getItem();
                if(top == back){
                        top = back = nullptr;
                } else {
                        top = top->getNext();
                }

                delete(newNode);
                Size--;
        }
        return newItem;
}


//get the first item from the queue
ListItem *PriorityQueue::getFront()
{
        ListItem *newItem = nullptr;
        if(top != nullptr){
                newItem = top->getItem();
        }
        return newItem;
}

//print the whole priority queue
void PriorityQueue :: print()
{
	Node* Curr= top;
	while(Curr!=nullptr)
	{
		ListItem *li = Curr->getItem();
		Event *e1 = (Event*)li;
		std::cout<< e1->getTime();
		Curr= Curr->getNext();
	}
}





