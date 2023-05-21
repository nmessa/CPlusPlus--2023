//Lab Exercise 5.25.2023 Problem 1
//Author: 

#include <iostream>
using namespace std;

void functionOne(int, int);

int main()
{
	functionOne(7, 3);
    functionOne(-17, 5);
    functionOne(35, 7);
	return 0;
}

void functionOne(int dividend, int divisor)
{
	int d = dividend;
    int quotient = 0, remainder;
    //Add code here




    cout << "Dividend = " << dividend << ", Divisor = " << divisor << endl;
    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl;
}

//Output
//Dividend = 7, Divisor = 3
//Quotient = 2
//Remainder = 1
//Dividend = -17, Divisor = 5
//Quotient = -3
//Remainder = -2
//Dividend = 35, Divisor = 7
//Quotient = 5
//Remainder = 0
