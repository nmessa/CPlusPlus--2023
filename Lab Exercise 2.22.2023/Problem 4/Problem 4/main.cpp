//Lab Exercise 2.22.2023 Problem 4
//Author: 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Constant definitions
#define NUM_EMPLOYEES 5000
#define BASE_SALARY 200
#define PERCENTAGE 0.09

//Function prototype
void printReport(int []);

int main()
{
	//Variable declarations
	int categories[9] = {0};  //Initialize all array elements to 0
	int sales, salary, commission, category;

	//initialize random number generator
	//Add code here


	for (int i = 1; i < NUM_EMPLOYEES; i++) //Generate employee data
	{
		//get random sales amount
		//calculate commission
		//calculate salary
		//find category
		//update counts
		
	} //end of for
	printReport(categories);
	return 0;
}

//Print formatted report
void printReport(int c[])
{
	//Add code here

}

//Sample Output
//200 - 299       682 employees
//300 - 399       660 employees
//400 - 499       577 employees
//500 - 599       493 employees
//600 - 699       515 employees
//700 - 799       527 employees
//800 - 899       516 employees
//900 - 999       521 employees
//1000 and over   508 employees