//Lab Exercise 2/9/2023 Problem 2
//Author: 

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Structure definition
struct CorpData
{
	//Structure members
	string name;
	double q1Sales, q2Sales, q3Sales, q4Sales, totalSales, average;

	//Constructor
	CorpData(string n, double q1, double q2, double q3, double q4)
	{
		//Add code here

	}

	//This function returns the total sales for the year
	void calcTotal()
	{
		//Add code here

	}

	//This function returns the average quarterly sales
	void calcAverage()
	{
		//Add code here

	}

	//This function displays and an annual report
	void display()
	{
		//Add code here


	}
};  //end of struct

//Function prototype using reference parameters
void calcSales(CorpData &);
void displayCorpData(CorpData &);

int main()
{
	//Create structures
	//Add code here


	//Make sales calculations
	//Add code here


	//Display corporate data
	//Add code here


	return 0;
}

//This function gets the total and average quarterly sales from a structure passed to it by reference
void calcSales(CorpData &name)  //Need to use reference parameter
{
	//Add code here

}

//This function displays annual report from a structure passed to it by reference
void displayCorpData(CorpData &name)  //Need to use reference parameter
{
	//Add code here

}

//Output
//Division Name: East
//First Quarter Sales: $1000.00
//Second Quarter Sales: $2000.00
//Third Quarter Sales: $1500.00
//Fourth Quarter Sales: $1750.00
//Total Annual Sales: $6250.00
//Average Quarterly Sales: $1562.50
//
//
//Division Name: West
//First Quarter Sales: $1200.00
//Second Quarter Sales: $2100.00
//Third Quarter Sales: $1400.00
//Fourth Quarter Sales: $1650.00
//Total Annual Sales: $6350.00
//Average Quarterly Sales: $1587.50
//
//
//Division Name: North
//First Quarter Sales: $1300.00
//Second Quarter Sales: $2200.00
//Third Quarter Sales: $1560.00
//Fourth Quarter Sales: $1250.00
//Total Annual Sales: $6310.00
//Average Quarterly Sales: $1577.50
//
//
//Division Name: South
//First Quarter Sales: $1700.00
//Second Quarter Sales: $2050.00
//Third Quarter Sales: $1200.00
//Fourth Quarter Sales: $1450.00
//Total Annual Sales: $6400.00
//Average Quarterly Sales: $1600.00