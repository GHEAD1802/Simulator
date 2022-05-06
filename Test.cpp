//
// Created by akash on 2021-03-13.
//
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "PriorityQueue.h"
#include "arrival.h"
#include "process.h"
#include "Simulation.h"
#include "ListItem.h"

Simulation* sim = new Simulation();
//TEST CASE 1
TEST_CASE("CHECK FOR THE WHETHER LIST IS EMPTY")
{
PriorityQueue *pqEmpty = new PriorityQueue();
//checking for whether list is empty or not
REQUIRE(pqEmpty->getSize() ==0);//if list is empty then it size is 0
REQUIRE(pqEmpty->dequeue()== nullptr);// if dequeue empty list gets nullptr only
REQUIRE(pqEmpty->isEmpty()== true);// if list is empty then isempty() method  returns true
REQUIRE(pqEmpty->getFront()== nullptr); // if list is empty it should return nullptr because there is no first element only

}
