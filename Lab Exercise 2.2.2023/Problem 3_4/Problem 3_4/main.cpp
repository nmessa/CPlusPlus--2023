//Lab Exercise 2/2/2023 Problem 3 and 4
//Author: 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Define constants
#define TRIALS 1000000
#define SCALE 3000

//Function prototypes
void printValues(int, int, int, int, int, int, int, int, int, int, int);
void printHistogram(int, int, int, int, int, int, int, int, int, int, int);

int main()
{	
	//Declare and initialize variables
	int two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0,
		nine = 0, ten = 0, eleven = 0, twelve = 0, die1, die2, total;

	//Initialize random number generator use system clock to seed
	srand(time(0));

	//Roll dice TRIALS times
	for (int i = 0; i < TRIALS; i++)
	{
		//Do random roll of 2 die
		die1 = rand() % 6 + 1;
		die2 = rand() % 6 + 1;

		//Calculate the total of the 2 die
		total = die1 + die2;

		//Increment the counter
		switch (total)
		{
			//Add code here


		}
	}

	//Pass results to printValues function
	printValues(two, three, four, five, six, seven, eight, nine, 
		ten, eleven, twelve);
	cout << endl << endl;

	//Pass results to printHistogram function
	printHistogram(two, three, four, five, six, seven, eight, nine, 
		ten, eleven, twelve);
	return 0;
}


//This function prints a table of roll values
void printValues(int v2, int v3, int v4, int v5, int v6, int v7, int v8,
	int v9, int v10, int v11, int v12)
{
	cout << "Value\t" << "Frequency" << endl;
	cout << "2\t" << v2 << endl;
	cout << "3\t" << v3 << endl;
	cout << "4\t" << v4 << endl;
	cout << "5\t" << v5 << endl;
	cout << "6\t" << v6 << endl;
	cout << "7\t" << v7 << endl;
	cout << "8\t" << v8 << endl;
	cout << "9\t" << v9 << endl;
	cout << "10\t" << v10 << endl;
	cout << "11\t" << v11 << endl;
	cout << "12\t" << v12 << endl;
}

//This function prints a histogram of roll values using defined SCALE factor
void printHistogram(int v2, int v3, int v4, int v5, int v6, int v7, int v8,
	int v9, int v10, int v11, int v12)
{
	cout << "2\t";
	for (int i = 0; i < v2/SCALE; i++)
		cout << "X";
	cout << endl;

	cout << "3\t";
	for (int i = 0; i < v3/SCALE; i++)
		cout << "X";
	cout << endl;

	cout << "4\t";
	for (int i = 0; i < v4/SCALE; i++)
		cout << "X";
	cout << endl;

	cout << "5\t";
	for (int i = 0; i < v5/SCALE; i++)
		cout << "X";
	cout << endl;

	cout << "6\t";
	for (int i = 0; i < v6/SCALE; i++)
		cout << "X";
	cout << endl;

	cout << "7\t";
	for (int i = 0; i < v7/SCALE; i++)
		cout << "X";
	cout << endl;

	cout << "8\t";
	for (int i = 0; i < v8/SCALE; i++)
		cout << "X";
	cout << endl;

	cout << "9\t";
	for (int i = 0; i < v9/SCALE; i++)
		cout << "X";
	cout << endl;

	cout << "10\t";
	for (int i = 0; i < v10/SCALE; i++)
		cout << "X";
	cout << endl;

	cout << "11\t";
	for (int i = 0; i < v11/SCALE; i++)
		cout << "X";
	cout << endl;

	cout << "12\t";
	for (int i = 0; i < v12/SCALE; i++)
		cout << "X";
	cout << endl;
}

//Output
//Value   Frequency
//2       27819
//3       55385
//4       83746
//5       110925
//6       138923
//7       167237
//8       138206
//9       111202
//10      83578
//11      55234
//12      27745
//
//
//2       XXXXXX
//3       XXXXXXXXXXXXX
//4       XXXXXXXXXXXXXXXXXXXX
//5       XXXXXXXXXXXXXXXXXXXXXXXXXXX
//6       XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//7       XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//8       XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//9       XXXXXXXXXXXXXXXXXXXXXXXXXXX
//10      XXXXXXXXXXXXXXXXXXXX
//11      XXXXXXXXXXXXX
//12      XXXXXX