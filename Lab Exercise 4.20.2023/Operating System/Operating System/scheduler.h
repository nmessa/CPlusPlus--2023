//Class definition of Schedular class
//Author: nmessa
//Date: 4.15.2008

#ifndef SCHEDULAR_H
#define SCHEDULAR_H
#include "queue.h"

class Scheduler
{
	private:
		Queue scheduler;
	public:
		Scheduler();
		void add(Process);
		Process remove();
		void display();
};
#endif
