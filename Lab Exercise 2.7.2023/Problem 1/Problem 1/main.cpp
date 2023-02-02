//Lab Exercise 2/7/2023 Problem 1
//Author: 

#include <iostream>
using namespace std;

//Function prototypes
void getValues(int &, int &, int &, int &, int &);
int findLowest(int, int, int, int, int);
double calcAverage(int, int, int, int, int);

int main()
{
	//Declare variables
	int score1, score2, score3, score4, score5;
	double average;

	//get the value of 5 test scores using reference parameters
	//Add code here


	//get the average of the 5 test scores passed as value parameters
	//Add code here


	//Output the results
	//Add code here


	return 0;
}

//This function is passed 5 test scores as reference parameters and gets their values
//from the user
void getValues(int &s1, int &s2, int &s3, int &s4, int &s5)
{
	//Add code here

}

//This function is passed 5 test scores as value parameters and returns the smallest one
int findLowest(int s1, int s2, int s3, int s4, int s5)
{
	//Add code here

}

//This function is passed 5 test scores as value parameters and returns the average of them minus the smallest one
double calcAverage(int s1, int s2, int s3, int s4, int s5)
{
	//Add code here

}

//Output
//Enter score: 70
//Enter score: 50
//Enter score: 60
//Enter score: 70
//Enter score: 60
//Average = 65