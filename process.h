#pragma once
#include "ListItem.h"

class process: public ListItem{

private:
        int arrivalTime;
        int CPUbursttime;
        int IOburstTime;
        int processID;
public:
        process(int arriveTime,int CPUburstTime,int IOburstTime);
        int getarrivaltime();
        int getCPUburstTime();
        int getIOburstTime();
        int getProcessID();
        //void setWaittime(int time);

};

