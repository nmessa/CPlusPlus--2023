//Lab Exercise 2/7/2023 Problem 3
//Author: 

#include <iostream>
#include <iomanip>
using namespace std;

//Defined constants
#define LABOR_COST 27.00
#define COVERAGE 115
#define LABOR 8

//Function prototypes
int getNumRooms();
double getPaintPrice();
double calcSquareFeet(int);
double calcHours(double);
double calcNumGallons(double);
double calcPaintCost(double, double);
double calcLaborCost(double);
double calcTotalCost(double, double);
void printReport(double, double, double, double, double);

int main()
{
	//Declare variables
	int numRooms;
	double squareFeet, hours, numGallons, paintCost, laborCost, 
		totalCost, paint;

	//Get input (numRooms and paint)
	//Add code here


	//make calculations
	//Add code here

	
	//Output results
	//Add code here


	return 0;
}

//This function returns the number of rooms to be painted
int getNumRooms()
{
	//Add code here

}

//This function returns the cost per gallon of paint
double getPaintPrice()
{
	//Add code here

}

//This function returns the total square footage given a number of rooms passed as a parameter 
double calcSquareFeet(int rooms)
{
	//Add code here

}

//This function returns the number of hours to paint all rooms given the total square footage
//passed as a parameter
double calcHours(double sf)
{
	//Add code here

}

//This function returns the number of gallons to paint all rooms given the total square footage
//passed as a parameter
double calcNumGallons(double sf)
{
	//Add code here

}

//This function is passed number of gallons of paint required and the cost per gallon of paint as
//parameters and returns the cost of the paint
double calcPaintCost(double gallons, double paint)
{
	//Add code here

}

//This function is passed the hours require to paint as a parameter and returns the cost of the labor
double calcLaborCost(double hrs)
{
	//Add code here

}

//This function prints our a formatted report
void printReport(double gals, double hrs, double paint, double labor, double total)
{
	//Add code here

}

//Sample Output
//How many rooms to paint? 3
//Enter the cost per gallon of paint: 19.95
//Enter length of room 1: 12
//Enter width of room 1: 15
//Enter length of room 2: 13
//Enter width of room 2: 17
//Enter length of room 3: 15
//Enter width of room 3: 20
//Number of gallons: 12.8
//Number of hours: 102.4
//Paint cost:  $255.36
//Labor cost:  $2764.80
//Total cost:  $3020.16