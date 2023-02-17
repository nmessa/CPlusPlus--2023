//Lab Exercise 2.22.2023 Problem 2
//Author: 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Function prototypes
double findAverage(double []);
string findWettest(double [], string []);
string findDryest(double [], string []);
void printReport(double, string, string);

int main()
{
	//Variable declarations
	string months[] = {"January", "February", "March", "April", "May",
		"June", "July", "August", "September", "October", "November",
		"December"};
	double temperatures[12];
	string wetMonth, dryMonth;
	double average;

	//Open file and read in data
	//Add code here


	//Process data
	//Add code here


	//Output report
	//Add code here

	return 0;
}

//Calculates and returns the average temperature
double findAverage(double temps[])
{
	//Add code here

}

//Returns the name of the month with the most rainfall
string findWettest(double temps[], string m[])
{
	//Add code here

	return month;
}

//Returns the name of the month with the least rainfall
string findDryest(double temps[], string m[])
{
	//Add code here

}

//Prints a report of the rainfall data
void printReport(double avg, string dry, string wet)
{
	//Add code here

}

//Output
//Average rainfall = 7.81667
//Dryest month = August
//Wettest month = April