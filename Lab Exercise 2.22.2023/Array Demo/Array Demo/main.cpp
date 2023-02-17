// This program stores employee work hours in an int array.
#include <iostream>
using namespace std;

 int main()
{
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES]; // Holds hours worked for 6 employees

	// Input hours worked by each employee
	cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees: ";
	cin >> hours[0];
	cin >> hours[1];
	cin >> hours[2];
	cin >> hours[3];
	cin >> hours[4];
	cin >> hours[5];

	// Display the contents of the array
	cout << "The hours you entered are:";
	cout << " " << hours[0];
	cout << " " << hours[1];
	cout << " " << hours[2];
	cout << " " << hours[3];
	cout << " " << hours[4];
	cout << " " << hours[5] << endl;
	return 0;
}
