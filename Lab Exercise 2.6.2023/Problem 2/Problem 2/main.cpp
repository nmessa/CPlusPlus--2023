//Lab Exercise 2/6/2023 Problem 2
//Author: 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Define constants
#define R1 0.8
#define R2 0.95
#define NUMTRIALS 5000

//Function prototype
bool testComponent(double);

int main()
{
	//Declare varaiables
	bool c1Fail, c2Fail, c3Fail, c4Fail;
	int numFails = 0;

	srand(time(0));	//Initialize random number generator

	//Run simulations
	for (int i = 1; i <= NUMTRIALS; i++)
	{
		//Initialize flags
		//Add code here


		//Test each component with it's reliability value
		//Add code here


		//Check for critical failures
		//Add code here

	}

	//Output result
	//Add code here

	return 0;
}

//This function is passed a reliability value and returns true if component failed
bool testComponent(double reliability)
{
	//Add code here

}

//Output
//Failure rate = 3.52%

