//Lab Exercise 2/9/2023 Problem 1
//Author: 

#include <iostream>
#include <string>
using namespace std;

//Structure definition
struct MovieData
{
	//Structure members
	string title, director;
	int year, runningTime;

	//Constructor
	MovieData(string t, string d, int y, int rt)
	{
		//Add code here

	}

	//Function to display movie information
	void displayMovie()
	{
		//Add code here

	}

	//This function calculates hours and minutes given the running time in minutes and
	//stores them in reference parameters
	void hoursMinutes(int &hh, int &mm, int rt)
	{
		//Add code here

	}

};

int main()
{
	//Create 2 MovieData structure variables and initialize them
	MovieData firstMovie("The Terminator", "James Cameron", 1984, 107);
	MovieData secondMovie("Shaft", "Gordon Parks", 1971, 100);

	//Display the two movies
	//Add code here

	return 0;
}

//Output
//Title: The Terminator
//Director: James Cameron
//Year released: 1984
//Running time: 1:47
//
//Title: Shaft
//Director: Gordon Parks
//Year released: 1971
//Running time: 1:40