//Lab Exercise 2.22.2023 Problem 1
//Author: 

#include <iostream>
using namespace std;
#define SIZE 10

double findLargest(double []);
double findSmallest(double []);
double findAverage(double []);
void printReport(double, double, double);

int main()
{
	double numbers[SIZE];
	double maximum, minimum, average;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter number " << i+1 << ": ";
		cin >> numbers[i];
	}
	maximum = findLargest(numbers);
	minimum = findSmallest(numbers);
	average = findAverage(numbers);
	printReport(maximum, minimum, average);
	return 0;
}

double findLargest(double nums[])
{
	//Add code here

}

double findSmallest(double nums[])
{
	//Add code here

}

double findAverage(double nums[])
{
	//Add code here

}

void printReport(double max, double min, double avg)
{
	//Add code here

}

//Sample Output
//Enter number 1: 34
//Enter number 2: 65
//Enter number 3: 22
//Enter number 4: 72
//Enter number 5: 35
//Enter number 6: 77
//Enter number 7: 55
//Enter number 8: 44
//Enter number 9: 33
//Enter number 10: 22
//Maximum value = 77
//Minimum value = 22
//Average value = 45.9