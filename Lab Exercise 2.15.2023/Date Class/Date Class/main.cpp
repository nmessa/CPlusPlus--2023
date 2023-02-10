//Lab Exercise 2.15.2023 Problem 1
//Author: nmessa

//This is a driver program to the Date class
#include "date.h"

int main()
{
	//Create a Date class object
	Date test(3, 15, 2008);

	//Print the Date object using 3 different formats
	test.print1();
	test.print2();
	test.print3();
	return 0;
}

//Output
//3/15/2008
//March 15, 2008
//15 March 2008