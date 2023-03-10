//Lab Exercise 3/16/2023 Problem 3
//Author: 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define SIZE 1000

//Prototypes
void initialize(int *);
void display(int *);
void displayBackwards(int *);
int maximum(int *);
int minimum(int *);
double average(int *);

//Main Function
int main()
{
	int numbers[SIZE];
	srand(time(NULL));
	initialize(numbers);
	display(numbers);
	cout << endl << "The array backwards" << endl;
	displayBackwards(numbers);
	cout << endl;
	cout << "The largest value is: " << maximum(numbers) << endl;
	cout << "The smallest value is: " << minimum(numbers) << endl;
	cout << "The average value is: " << average(numbers) << endl;
	return 0;
}

//Fills array with random integers from 1 to 1000
void initialize(int *nums)
{
	//Add code here

}

//Displays the contents of the array nums
void display(int *nums)
{
	//Add code here

}

//Displays the contents of the array nums in reverse order
void displayBackwards(int *nums)
{
	//Add code here

}

//Returns the maximum value in the array nums
int maximum(int *nums)
{
	//Add code here

}

//Returns the minimum value in the array nums
int minimum(int *nums)
{
	//Add code here

}

//Returns the average value in the array nums
double average(int *nums)
{
	//Add code here

}

//Output

//Array forward

//Array Backwards

//The largest value is: 999
//The smallest value is: 3
//The average value is: 493.081