// This program stores employee work hours in an int array. It uses
// one for loop to input the hours and another for loop to display them.
// A report is printed showning a summary of the hours worked by each 
// employee as well as the maximum hours worked and average hours worked.
// It also demonstrates how to pass arrays to functions.
#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_EMPLOYEES = 4;

void printReport(int []);
int findMax(int []);
double findAverage(int []);

int main()
{    
   int hours[NUM_EMPLOYEES];      // Holds hours worked for 6 employees
   int count;                     // Loop counter

	// Input hours worked by each employee
   cout << "Enter the hours worked by " << NUM_EMPLOYEES 
        << " employees: " << endl;
		  
   for (count = 0; count < NUM_EMPLOYEES; count++)
   {
	   cout << "Employee #" << count + 1 << " ";
	   cin >> hours[count];
   }

	// Display the contents of the array
	cout << "The hours you entered are:";
	
	for (count = 0; count < NUM_EMPLOYEES; count++)
		cout << " " << hours[count];
		
	cout << endl;
	printReport(hours);
	return 0;
}

void printReport(int hrs[])
{
	int max;
	double average;
	max = findMax(hrs);
	average = findAverage(hrs);
	cout << fixed << showpoint << setprecision(2);
	cout << "Employee hours summary" << endl;
	for (int i = 0; i < NUM_EMPLOYEES; i++)
		cout << hrs[i] << endl;
	cout << "\n\nMaximum employee time: " << max << " hours " 
		<< endl;
	cout << "\n\nAverage employee time: " << average << " hours " 
		<< endl;
}

int findMax(int hrs[])
{
	int max = hrs[0];
	for (int i = 1; i < NUM_EMPLOYEES ; i++)
	{
		if (hrs[i] > max)
			max = hrs[i];
	}
	return max;
}

double findAverage(int hrs[])
{
	double sum = 0.0;
	for (int i = 0; i < NUM_EMPLOYEES ; i++)
		sum += hrs[i];
	return sum / NUM_EMPLOYEES;
}