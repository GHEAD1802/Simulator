#include "Simulation.h"
#include "PriorityQueue.h"
#include "arrival.h"
#include "Queue.h"
#include <iostream>
#include <string>
using namespace std;


Simulation::Simulation(){}
 void Simulation::runSimulation(char *fileName){
     string name;
int abc = 0;
	file.open(fileName);

	if(!file.fail()) {
	file >> quantumTime;

	while(getline(file, name)){
	

        cout<<name<<endl;
	
}

    }
	//count << arrivalTime<<"hhhhhhhhhhhhhhhhhhhhhhhhhhh"<<endl;
//	getNextArrival();

/*
	 while(!eventList->isEmpty()){

	     //ListItem *item =eventList->dequeue();
	     Event * e1;
	     e1=dynamic_cast<Event*>(eventList->dequeue());
	     e1->handleEvent();
	     e1->print();
	 }
	}*/
}


void Simulation::setSimulationTime(int time) {
    SimTime=time;
}

int Simulation::getSimulationTime(){

	return SimTime;


}
int Simulation::getQuantumTime() {
    return quantumTime;

}

void Simulation::getNextArrival() {

    if(!file.eof()){
        int time1=-1;
        //int time2=-1;

        file>> time1;
        if(time1!=-1){

            process* p1;
            //p1=new process(arrivalTime,time1,time2,this);
            // Event * e=new arrival(p1, this);
            SimTime=time1;
            //addEvent(e);
        }
    }

}

int Simulation::getArrivalTime() {
    return arrivalTime;
}












