#include "Simulation.h"
#include <iostream>
#include "startCPU.h"
#include "completeCPU.h"

startCPU::startCPU(process *pp, int time, Simulation *sim1):ppp(pp),Event(time,sim1) {}


void startCPU::handleEvent()
{

    Event *ee = new completeCPU(ppp, getTime()+);
}