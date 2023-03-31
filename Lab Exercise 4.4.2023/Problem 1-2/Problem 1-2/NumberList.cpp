// Implementation file for the NumberList class
//Author: nmessa
//Date: 3.10.2004

#include <iostream>  // For cout  and NULL
#include "NumberList.h"
using namespace std;

NumberList::NumberList()
{ 
	head = NULL; 
}

void NumberList::appendNode(double num)
{
	ListNode *newNode, *nodePtr;

	// Allocate a new node & store num
	newNode = new ListNode;
	newNode->value = num;
	newNode->next = NULL;

	// If there are no nodes in the list
	// make newNode the first node
	if (!head)
		head = newNode;
	else	// Otherwise, insert newNode at end
	{
		// Initialize nodePtr to head of list
		nodePtr = head;

		// Find the last node in the list
		while (nodePtr->next)
			nodePtr = nodePtr->next;

		// Insert newNode as the last node
		nodePtr->next = newNode;
	}
}

void NumberList::displayList()
{
	ListNode *nodePtr;
	if (!head)
	{
		cout << "List is empty" << endl;
		return;
	}
	nodePtr = head;
	while (nodePtr)
	{
		if (nodePtr -> next)
		{
			cout << nodePtr->value << " --> ";
			nodePtr = nodePtr->next;
		}
		else
		{
			cout << nodePtr->value << endl;
			nodePtr = nodePtr->next;
		}
	} 
}

void NumberList::insertNode(double num)
{
	ListNode *newNode, *nodePtr, *previousNode = NULL;

	// Allocate a new node & store num
	newNode = new ListNode;
	newNode->value = num;
	
	// If there are no nodes in the list
	// make newNode the first node
	if (!head)
	{
		head = newNode;
		newNode->next = NULL;
	}
	else	// Otherwise, insert newNode
	{
		// Initialize nodePtr to head of list and previousNode to NULL.
		nodePtr = head;
		previousNode = NULL;

		// Skip all nodes whose value member is less
		// than num.
		while (nodePtr != NULL && nodePtr->value < num)
		{	
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		// If the new node is to be the 1st in the list,
		// insert it before all other nodes.
		if (previousNode == NULL)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else	// Otherwise, insert it after the prev. node.
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

void NumberList::deleteNode(double num)
{
	ListNode *nodePtr, *previousNode;

	// If the list is empty, do nothing.
	if (!head)
		return;
	
	// Determine if the first node is the one.
	if (head->value == num)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		// Initialize nodePtr to head of list
		nodePtr = head;

		// Skip all nodes whose value member is 
		// not equal to num.
		while (nodePtr != NULL && nodePtr->value != num)
		{	
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		// If nodePtr is not at the end of the list, 
		// link the previous node to the node after
		// nodePtr, then delete nodePtr.
		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
		else
		{
			delete previousNode -> next;
		}
	}
}

NumberList::~NumberList()
{
	ListNode *nodePtr, *nextNode;

	nodePtr = head;
	while (nodePtr != NULL)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}
	  
 double NumberList::getNode()
 {
	double temp;
	ListNode *nodePtr;
	nodePtr = head;
	head = head->next;
	temp = nodePtr->value;
	delete nodePtr;
	return temp;
 }
