//Class definition of Process class
//Author: nmessa
//Date: 4.15.2008

#ifndef PROCESS_H
#define PROCESS_H
#include <string>
using namespace std;

class Process
{
	public:
		int myPID;
		string myName;
	public:
		Process();
		Process(int, string);
		~Process();
		void cloneProcess(Process);
		void destroyProcess();
		void displayProcess();
};

// free function
Process *createProcess(int, string);
#endif
