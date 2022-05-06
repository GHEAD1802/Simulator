#pragma once

#include <fstream>
#include "arrival.h"
#include "process.h"

using namespace std;

class PriorityQueue;
class Queue;
class Event;

class Simulation {
private:

	ifstream file;
	int SimTime;
	int arrivalTime;
	PriorityQueue * eventList;
	Queue * cpuBursts;
	Queue ** io;
	bool cpuBusy;
	bool ioBusy;
	
    int quantumTime;
	
	// you will need to add fields
        // including: Queues for CPU and IO, and priority queues for Events 	
public:
	Simulation();



	// runSimulation -- start the simulation with the given filename.
	// Called by main.
	void runSimulation(char *fileName); 

	// summary -- print a summary of all the processes, as shown in the
	// assignment.  Called by main.
	void summary();
	void addEvent(Event*);
	void addProcess(process*);
	int getSimulationTime();
	int getQuantumTime();
	int getArrivalTime();
	
	void setSimulationTime(int);

	void getNextArrival();
	bool isCpuBusy();
	bool isIoBusy();
	void setCpuStat(bool);
	void setIoStat(bool);



	// you may need to add more methods

};// class Simulation
