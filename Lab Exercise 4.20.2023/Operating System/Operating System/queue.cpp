//Implementation of Queue class for use by Schedular class
//Author: nmessa
//Date: 4.15.2008


#include "queue.h"
#include "process.h"
#include <iostream>
using namespace std;

Queue::Queue()
{
	size = 0;
}

void Queue::enqueue(Process proc)
{
	queue.appendNode(proc);
	size++;
}

Process Queue::dequeue()
{
	if (checkEmpty())
	{
		cout << "The queue is empty" << endl;
	}
	else
	{
		size--;
		return queue.getNode();
	}
}

bool Queue::checkEmpty()
{
	if (size == 0)
		return true;
	else
		return false;
}

void Queue::display()
{
	queue.displayList();
}