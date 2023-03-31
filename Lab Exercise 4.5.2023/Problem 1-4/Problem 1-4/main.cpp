//Lab Exercise 4/5/2023 Problem 1 - 4
//Author: nmessa

#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
	//Create 2 NumberList class objects
	NumberList myList;
	NumberList copy;

	//Create a list
	myList.insertNode(5.6);
	myList.insertNode(7.5);
	myList.insertNode(12.8);
	myList.insertNode(34.8);
	myList.insertNode(24.2);
	myList.insertNode(78.1);
	myList.insertNode(78.5);
	myList.insertNode(112.9);
	myList.insertNode(31.6);
	myList.insertNode(44.5);
	myList.displayList();

	//Make a copy of the list
	myList.copyList(copy);
	cout << endl << "Copy of list:" << endl;
	copy.displayList();

	//Reverse the original list
	myList.reverseList();
	cout << endl << endl;
	cout << "Original list reversed:" << endl;
	myList.displayList();
	cout << endl;
	
	//Display the copy backwards
	cout << endl << "Copy of list backwards:" << endl;
	copy.displayListBackwards();
	cout << endl << endl;

	//Destroy the list
	copy.destroyList();
	copy.displayList();
	return 0;
}

//Output
//5.6 --> 7.5 --> 12.8 --> 24.2 --> 31.6 --> 34.8 --> 44.5 --> 78.1 --> 78.5 --> 112.9
//
//Copy of list:
//5.6 --> 7.5 --> 12.8 --> 24.2 --> 31.6 --> 34.8 --> 44.5 --> 78.1 --> 78.5 --> 112.9
//
//
//Original list reversed:
//112.9 --> 78.5 --> 78.1 --> 44.5 --> 34.8 --> 31.6 --> 24.2 --> 12.8 --> 7.5 --> 5.6
//
//
//Copy of list backwards:
//112.9 <-- 78.5 <-- 78.1 <-- 44.5 <-- 34.8 <-- 31.6 <-- 24.2 <-- 12.8 <-- 7.5 <-- 5.6
//
//
//List is empty