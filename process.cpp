#include "process.h"


process::process(int arriveTime, int CPUburstTime, int IOburstTime) : arrivalTime(arriveTime),CPUbursttime(CPUburstTime), IOburstTime(IOburstTime){
    processID=1;
}

int process::getarrivaltime() {
    return arrivalTime;
}

int process::getCPUburstTime() {
    return CPUbursttime;
}

int process::getIOburstTime() {
    return IOburstTime;
}

int process::getProcessID() {
    return processID;
}