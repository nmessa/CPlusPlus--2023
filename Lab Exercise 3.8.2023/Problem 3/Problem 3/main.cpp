//Lab Exercise 3.8.2023 Problem 3
//Author: 

#include <iostream>
#include <string>
using namespace std;

#define SIZE 10

//Function prototypes
void sortNames(string []);
void displayNames(string []);

int main()
{
	string names[SIZE] = {"James", "Mary", "Bob", "Eric", "Zeke", "Alex", 
		"Fred", "Erin", "Max", "Parker"};
	cout << "Original list of names: " << endl;
	displayNames(names);
	sortNames(names);
	cout << "\n\n\nList of names after sorting:" << endl;
	displayNames(names);
	return 0;
}

//Sorts an array of names in ascending order
void sortNames(string n[])
{
	//Add code here

}

//Displays an array of names
void displayNames(string n[])
{
	//Add code here

}
