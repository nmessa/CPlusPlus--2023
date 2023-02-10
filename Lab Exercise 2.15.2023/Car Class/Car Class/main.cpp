//Lab Exercise 2.15.2023 Problem 2
//Author: nmessa

//This is a driver program to test the Car class
#include "car.h"

int main()
{
	Car test(2014, "Honda Accord", 65);
	test.display();
	for (int i = 0; i < 5; i++)
	{
		test.accelerate();
		test.display();
	}
	for (int i = 0; i < 5; i++)
	{
		test.brake();
		test.display();
	}

	return 0;
}

//Output
//	Year: 2014
//Make: Honda Accord
//Speed: 65
//
//Year: 2014
//Make: Honda Accord
//Speed: 70
//
//Year: 2014
//Make: Honda Accord
//Speed: 75
//
//Year: 2014
//Make: Honda Accord
//Speed: 80
//
//Year: 2014
//Make: Honda Accord
//Speed: 85
//
//Year: 2014
//Make: Honda Accord
//Speed: 90
//
//Year: 2014
//Make: Honda Accord
//Speed: 85
//
//Year: 2014
//Make: Honda Accord
//Speed: 80
//
//Year: 2014
//Make: Honda Accord
//Speed: 75
//
//Year: 2014
//Make: Honda Accord
//Speed: 70
//
//Year: 2014
//Make: Honda Accord
//Speed: 65