// Implementation file for the LinkedList class
#include <iostream>  // For cout  and NULL
#include "LinkedList.h"
#include <vector>
using namespace std;

LinkedList::LinkedList()
{ 
	head = NULL; 
}

void LinkedList::appendNode(double num)
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

void LinkedList::displayList()
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

void LinkedList::insertNode(double num)
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

void LinkedList::deleteNode(double num)
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
	}
}

LinkedList::~LinkedList()
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

double LinkedList::getNode()
{
	double temp;
	ListNode *nodePtr;
	nodePtr = head;
	head = head->next;
	temp = nodePtr->value;
	delete nodePtr;
	return temp;
}

void LinkedList::prependNode(double num)
{
	ListNode *newNode;

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
		//point the new node to the location of the first node in list
		newNode -> next = head;

		//make the head pointer point at the new node
		head = newNode;
	}

}

void LinkedList::displayListBackwards()
{
	ListNode *nodePtr;
	vector<double> temp;
	int i;

	nodePtr = head;

	while (nodePtr != NULL)
	{
		temp.push_back(nodePtr -> value);
		nodePtr = nodePtr -> next;
	}
	
	/* Alternate algorithm
	while (nodePtr -> next != NULL)
	{
		temp.push_back(nodePtr -> value);
		nodePtr = nodePtr -> next;
	}
	temp.push_back(nodePtr -> value);
	*/

	for (i = temp.size() - 1; i > 0; i--)
		cout << temp[i] << " <-- ";

	cout << temp[i] << endl;
}

void LinkedList::destroyList()
{
	ListNode *nodePtr;
	nodePtr = head;
	while (nodePtr != NULL)
	{
		head = head ->next;
		delete nodePtr;
		nodePtr = head;
	}
}

void LinkedList::reverseList()
{
	ListNode *nodePtr;
	vector<double> temp;
	nodePtr = head;

	//Copy the list
	while (nodePtr != NULL)
	{
		temp.push_back(nodePtr -> value);
		nodePtr = nodePtr -> next;
	}

	//Destroy the list
	destroyList();

	//Rebuild the list in reverse order
	for (int i = temp.size() - 1; i >= 0; i--)
		appendNode(temp[i]);
}

void LinkedList::copyList(LinkedList &other)
{
	ListNode *nodePtr;
	nodePtr = head;

	while (nodePtr != NULL)
	{
		other.appendNode(nodePtr->value);
		nodePtr = nodePtr->next;
	}
}