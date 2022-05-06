	CC=clang++
	CFLAGS=-std=c++11        -g
	objects	=	Event.o	Queue.o	ListItem.o	Node.o	ListItem.o PriorityQueue.o	   Simulation.o    		
all:	main testing

main:	A2main.o	$(objects)

	$(CC) $(CFLAGS)	-o	A2	$<	$(objects)
#clang -std=c++11 -o -g Test test.cpp

testing: Test.o Test.cpp catch.hpp
		
	$(CC) $(CFLAGS)	-Wall	-o	Test	$<	$(objects)	






%.o: %.cpp

	$(CC) -c -o $@ $< $(CFLAGS)
clean:
	rm -f A2main.o $(objects)
	

