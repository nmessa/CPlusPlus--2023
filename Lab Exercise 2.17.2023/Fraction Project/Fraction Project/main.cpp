//Lab Exercise 2.17.2023
//Author: nmessa

#include "fraction.h"
#include <iostream>
using namespace std;

//Function prototype
void display(Fraction, Fraction, Fraction, char);

int main()
{
	//Create 3 Fraction objects (f3 is an empty fraction object)
	Fraction f1(1, 2), f2(1, 4), f3;

	//Priont out the fractions
	f1.print();
	cout << "    ";
	f2.print();
	cout << endl;

	//Test the add, subtract, multiply, and divide functions
	f3 = f1.add(f2);
	display(f1, f2, f3, '+');
	cout << endl;
	f3 = f1.subtract(f2);
	display(f1, f2, f3, '-');
	cout << endl;
	f3 = f1.multiply(f2);
	display(f1, f2, f3, 'x');
	cout << endl;
	f3 = f1.divide(f2);
	display(f1, f2, f3, '/');
	cout << endl;
	return 0;
}

//This function displays the fraction operation
void display(Fraction f1, Fraction f2, Fraction f3, char op)
{
	f1.print();
	cout << ' ' << op << ' ';
	f2.print();
	cout << " = ";
	f3.print();
}

// Output
// 1/2    1/4
// 1/2 + 1/4 = 3/4
// 1/2 - 1/4 = 1/4
// 1/2 x 1/4 = 1/8
// 1/2 / 1/4 = 2/1