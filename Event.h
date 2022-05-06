#pragma once
#include "ListItem.h"
class process;
class Simulation;

class Event: public ListItem {
private:
	int eventTime;
	process *proces;
protected:
	Simulation *sim;
public:
	// constructor, with pointer to the process that is being handled, and the simulation.
	Event(int theTime, process* theProcess, Simulation* sim); 

	// pure virtual method - to handle the current event when it is removed from the queue.
	virtual void handleEvent() = 0;
    virtual void print();
	// compareTo - used to order Events. 
	int compareTo(ListItem *other);
    int getTime();
    process* getProcess();

};// class Event
