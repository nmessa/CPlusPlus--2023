//Implementation of Process class
//Author: nmessa
//Date: 4.15.2008

#include "process.h"
#include <iostream>
using namespace std;

Process::Process()
{
	myPID = 0;
	myName = "";
}
		
Process::Process(int id, string name)
{
	myPID = id;
	myName = name;
	cout << "Process " << myPID << " Object created" << endl;
}
	
Process::~Process()
{
	//cout << "Process " << myPID << " Object destroyed" << endl;
}

void Process::cloneProcess(Process copy)
{
	myPID = copy.myPID;
	myName = copy.myName;
}
				
void Process::destroyProcess()
{
	cout << "Process " << myPID << " Object memory freed" << endl;
	delete this;
}

void Process::displayProcess()
{
	cout << myPID << "  " << myName << endl;
}

Process *createProcess(int id, string name)
{
	Process *temp;
	temp = new Process(id, name);
	return temp;
}
