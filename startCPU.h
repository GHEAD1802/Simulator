#include "Event.h"
#include "process.h"


class startCPU: public Event{
private:
    process * ppp= nullptr;
public:
    startCPU(process* pp,int time,Simulation * sim1);
    void handleEvent() override;
    void print() override;

};
