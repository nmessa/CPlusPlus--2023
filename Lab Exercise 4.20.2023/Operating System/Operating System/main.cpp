//Lab Exercise 4/20/2023
//Author: nmessa

#include <iostream>
using namespace std;
#include "process.h"
#include "scheduler.h"
#include "interuptProcess.h"

int main()
{
	Process test(123, "fork");
	Process test1(345, "panic");
	Process test2;
	Process *test3;

	//Test code for Process class
	test2.cloneProcess(test1);
	test3 = createProcess(678, "help");
	cout << "Original Process: ";
	test.displayProcess();
	cout << "Second Original Process: ";
	test1.displayProcess();
	cout << "Cloned Process: ";
	test2.displayProcess();
	cout << "Created Process: ";
	(*test3).displayProcess();
	(*test3).destroyProcess();


	//Create Process object for testing of Scheduler and
	//InteruptProcess class
	Process p1(867, "WinAmp");
	Process p2(5309, "Word");
	Process p3(6732, "Netscape");
	Process p4(2134, "Mosaic");
	Process p5(328, "Wordstar");

	//Test Schedular class
	Scheduler s;
	s.add(p1);
	s.add(p2);
	s.add(p3);
	s.add(p4);
	s.add(p5);
	cout << "Scheduler queue" << endl;
	s.display();

	//Test InteruptProcess class
	InteruptProcess i;
	i.add(s.remove());
	i.add(s.remove());
	cout << endl << endl;
	cout << "Scheduler queue" << endl;
	s.display();
	cout << "Interupt stack" << endl;
	i.display();
	cout << endl << endl;
	return 0;
}

//Output
//Process 123 Object created
//Process 345 Object created
//Process 678 Object created
//Original Process: 123  fork
//Second Original Process: 345  panic
//Cloned Process: 345  panic
//Created Process: 678  help
//Process 678 Object memory freed
//Process 867 Object created
//Process 5309 Object created
//Process 6732 Object created
//Process 2134 Object created
//Process 328 Object created
//Scheduler queue
//867/WinAmp --> 5309/Word --> 6732/Netscape --> 2134/Mosaic --> 328/Wordstar
//
//
//Scheduler queue
//6732/Netscape --> 2134/Mosaic --> 328/Wordstar
//Interupt stack
//5309/Word --> 867/WinAmp
