#include "arrival.h"
#include <iostream>
#include "Simulation.h"



arrival::arrival( process* pp, Simulation *s): p(pp),Event(time,s){
    p1->getProcessID()++;
}


void arrival::print() {
    std::cout<<"Arrival :Process arrives at time "<<getTime()<<endl;
}


void arrival::handleEvent(){
    p1=new process(processNum,getTime());
    sim->addProcess(p1);
    if(!sim->isCpuBusy())
    {
        sim->setCpuStat(true);
        Event *ee = new startAssembly(getTime(),sim);
        sim->addEvent(ee);
    }

    sim->getNextArrival();

}


