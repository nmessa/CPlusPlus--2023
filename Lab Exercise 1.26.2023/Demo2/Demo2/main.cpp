//Demo 2 Demonstrating setprecision
//Author: nmessa
//Date: 1.28.2018

// This program asks for sales figures for three days.
// The total sales are calculated and displayed in a table.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double day1, day2, day3, total;

	// Get the sales for each day
	cout << "Enter the sales for day 1: ";
	cin >> day1;
	cout << "Enter the sales for day 2: ";
	cin >> day2;
	cout << "Enter the sales for day 3: ";
	cin >> day3;

	// Calculate total sales
	total = day1 + day2 + day3;

	// Display the sales figures
	cout << "\nSales Figures\n";
	cout << "-------------\n";
	cout << setprecision(5);
	cout << "Day 1: " << setw(8) << day1 << endl;
	cout << "Day 2: " << setw(8) << day2 << endl;
	cout << "Day 3: " << setw(8) << day3 << endl;
	cout << "Total: " << setw(8) << total << endl;
	return 0;
}

//Sample Output
//Enter the sales for day 1: 321.57
//Enter the sales for day 2: 279.88
//Enter the sales for day 3: 423.65
//
//Sales Figures
//-------------
//Day 1:   321.57
//Day 2:   279.88
//Day 3:   423.65
//Total:   1025.1