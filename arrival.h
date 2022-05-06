#pragma once

#include "Event.h"
#include "process.h"

class arrival : public Event{
private:
        process* p1;
public:
        arrival(process*p, Simulation* s);
        void print() override;

        process* getProcess();
        void handleEvent();

};


