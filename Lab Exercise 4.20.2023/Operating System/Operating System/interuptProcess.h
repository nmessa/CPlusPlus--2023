//Class definition for InteruptProcess class
//Author: nmessa
//Date: 4.15.2008

#ifndef INTERUPTPROCESS_H
#define INTERUPTPROCESS_H

#include "stack.h"

class InteruptProcess
{
	private:
		Stack interupt;
	public:
		InteruptProcess();
		void add(Process);
		Process remove();
		void display();
};
#endif
