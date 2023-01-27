//Lab Exercise 2.3.2023 Problem 2
//Author: 

#include <iostream>
#include <string>
using namespace std;

//Function prototypes
double getSales(string);
void findHighest(double, double, double, double);

int main()
{
	//Declare variables
	string division;
	double salesNE, salesSE, salesNW, salesSW;

	//Call getSales function for each geographic area
	//Add code here


	//Pass sales totals for each geographic area to findHighest function
	//Add code here



	return 0;
}

//This function gets a division name and returns the amount of sales
double getSales(string division)
{
	//Add code here

}

//This function is passed the sales for each division and prints the name and sales amount for the division
//with the highest sales
void findHighest(double salesNE, double salesSE, double salesNW,
	double salesSW)
{
	//Add code here

}

//Sample Output
//Enter the sales for the Northeast division: 1000
//Enter the sales for the Southeast division: 2000
//Enter the sales for the Northwest division: 1500
//Enter the sales for the Southwest division: 1750
//The highest sales was Southeast division
//Sales: 2000