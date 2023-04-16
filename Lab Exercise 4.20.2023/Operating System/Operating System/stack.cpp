//Implementation of Stack class
//Author: nmessa
//Date: 4.15.2008
//Used by InteruptProcess class

#include "stack.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
	size = 0;
}

void Stack::push(Process proc)
{
	stack.prependNode(proc);
	size++;
}

Process Stack::pop()
{
	if (checkEmpty())
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		size--;
		return stack.getNode();
	}
}

bool Stack::checkEmpty()
{
	if (size == 0)
		return true;
	else
		return false;
}

void Stack::display()
{
	if (size == 0)
		cout << "Stack is empty" << endl;
	else
		stack.displayList();
}