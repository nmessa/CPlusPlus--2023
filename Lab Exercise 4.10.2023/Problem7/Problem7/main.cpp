//Lab Exercise 4/10/2023 Problem 7
//Author: 

#include <iostream>
using namespace std;

int main()
{
	//Declare variables
	int h, q, m, k, j, month, day, year;

	//Get input from user
	//Add code here



	//Assign day to q
	//Add code here



	//If month is 1 or 2, add 12 to month and subtract 1 from year
	//Add code here



	//Assign month to m
	//Add code here



	//Calculate k and j
	//Add code here



	//Calculate h
	//Add code here


	
	//Switch on h to output the day of week
	switch(h)
	{
		case 0:
			cout << "Saturday" << endl;
			break;
		case 1:
			cout << "Sunday" << endl;
			break;
		case 2:
			cout << "Monday" << endl;
			break;
		case 3:
			cout << "Tuesday" << endl;
			break;
		case 4:
			cout << "Wednesday" << endl;
			break;
		case 5:
			cout << "Thursday" << endl;
			break;
		case 6:
			cout << "Friday" << endl;
			break;
	}

	return 0;
}

//Sample Output
//Enter the month, day, and year seperated by spaces: 5 3 2020
//Sunday