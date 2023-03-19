//Lab Exercise 3/20/2023 Problem 3
//Author: 

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int numWords(char *);
double averageLength(char *);

int main()
{
	double average;
	char myString[] = "take me to your leader";
	average = averageLength(myString);
	cout << fixed << showpoint << setprecision(2);
	cout << myString << " has average length of " << average << " characters per word\n";
	return 0;
}

//This function will count the number of words in a C string
int numWords(char *str)
{	
	//Create 2 char pointers and a count variable
	char *pFirst, *pLast;
	int count;					
	
	//set count to 1 to handle fencepost
	//Add code here


	//set pointer to start of string
	//Add code here


	//set pointer to end of string
	//Add code here


	//Loop until pointers 'meet'
	while (pFirst < pLast)			
	{
		//if space detected increment count
		//Add code here


		//increment pFirst
		//Add code here
					
	}

	return count;
}

//This function returns the average length of a string passed to it
double averageLength(char *str)
{
	//Add code here
 
}

//Output
//take me to your leader has average length of 4.40 characters per word