// Lab Exercise 2/10/2023 Problem 1
// Author: 
#include <iostream>
#include <string>
using namespace std;

//CandyBar Structure definition
struct CandyBar
{
	
};

//Function prototype
void printCandy(CandyBar);

int main()
{
	//Create 3 CandyBar structure variables
	CandyBar snickers = {"Snickers", 1.56, 215, 1.29, 3000};
	CandyBar payday = {"Payday", 1.85, 250, 1.39, 5000};
	CandyBar hershey = {"Hershey", 1.52, 215, 1.29, 3500};

	//Print the 3 CandyBar structure variables
	printCandy(snickers);
	printCandy(payday);
	printCandy(hershey);
}

//This function will print a CandyBar structure that is passed to it
void printCandy(CandyBar c)
{
	//Add code here

}

//Output
//Name: Snickers
//Weight: 1.56
//Calories: 215
//Cost: $1.29
//Units: 3000
//
//Name: Payday
//Weight: 1.85
//Calories: 250
//Cost: $1.39
//Units: 5000
//
//Name: Hershey
//Weight: 1.52
//Calories: 215
//Cost: $1.29
//Units: 3500