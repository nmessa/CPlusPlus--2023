//Lab Exercise 4/4/2023 Problem 3 and 4
//Author: nmessa

#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
	//Create a NumberList object named myList
	//Add code here


	//Add 10 nodes
	//Add code here

	cout << "The List now contains: " << endl;

	//Display the list
	//Add code here


	//Delete 3 specified nodes
	//Add code here


	cout << "The List now contains: " << endl;
	//Display the list
	//Add code here

	//Test new functions
	//Prepend 2 nodes to the front of list
	myList.prependNode(2.9);
	myList.prependNode(1.2);

	//Display the modified list
	cout << endl << endl;
	cout << "After prepending 2.9 and 1.2" << endl;
	myList.displayList();

	//Display the list backwards
	cout << endl << endl;
	cout << "The list backwards" << endl;
	myList.displayListBackwards();
	return 0;
}

//Output
//5.6 --> 7.5 --> 12.8 --> 24.2 --> 31.6 --> 34.8 --> 44.5 --> 78.1 --> 78.5 --> 112.9
//
//
//After prepending 2.9 and 1.2
//1.2 --> 2.9 --> 5.6 --> 7.5 --> 12.8 --> 24.2 --> 31.6 --> 34.8 --> 44.5 --> 78.1 --> 78.5 --> 112.9
//
//
//The list backwards
//112.9 <-- 78.5 <-- 78.1 <-- 44.5 <-- 34.8 <-- 31.6 <-- 24.2 <-- 12.8 <-- 7.5 <-- 5.6 <-- 2.9 <-- 1.2