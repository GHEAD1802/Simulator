#include "Event.h"

/**** Event implementation */
Event::Event(int theTime, process *theProcess, Simulation *theSim) 
	 :eventTime(theTime), proces(theProcess), sim (theSim) {}



int Event::getTime() {
    return eventTime;
}

int Event::compareTo(ListItem *other) {

    Event * e;
    e=(Event*) other;
    if(e->getTime() < eventTime){
        return 1;
    }
    else if(e->getTime()==eventTime){
        return 0;

    }
    return -1;
}
void Event::print() {
}
