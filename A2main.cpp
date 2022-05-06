#include "Simulation.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    if(argc < 2){
        cout << "Usage: " << argv[0] << "sample.txt" << endl;
    } else {
        cout << "Simulation begins...\n";
        Simulation* sim = new Simulation();
        sim->runSimulation(argv[1]);
        cout << "\n...All Processes complete.  Final Summary:\n\n";
        cout<< sim->getQuantumTime();
       	cout<< sim->getArrivalTime();
        cout << "\nEnd of processing.\n";
        return 0;
    }// main
}
