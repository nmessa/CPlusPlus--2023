//Lab Exercise 4.7.2023 Problem 3
//Author: 

#include <iostream>
#include <string>
using namespace std;

#include "LinkedList.h"

int main()
{
	//Test for list of strings
	LinkedList<string> list;

	list.insertNode("Alice");
	list.insertNode("Mary");
	list.insertNode("Fred");
	cout << "Here is the list of strings: \n";
	list.displayList();

	LinkedList<double> list2;

	list2.insertNode(23.65);
	list2.insertNode(12.935);
	list2.insertNode(4.768);
	
	cout << "Here is the list of doubles: \n";
	list2.displayList();

	return 0;
}

//Sample Output
//Here is the list of strings
//Alice --> Fred --> Mary
//Here is the list of doubles
//4.768 --> 12.935 --> 23.65