//Decimal to binary converter
//Added IEEE 754 representation
//Author:
//Lab Exercise 3.17.2023 Problem 4

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

#define SIZE 53    //Size of mantissa of IEEE754 floating point
					//representation

//Function prototypes
void fillArray(double []);
void convertWhole(int, string &);
string reverseString(string);
void convertFraction(double, string &, double []);

int main()
{
	//Variable declarations
	double values[SIZE];
	string answer = "";
	double number;
	int whole;
	double fraction;
	int exp;
	string sign, exponent, mantissa;
	

	fillArray(values);
	cout << "Enter a floating point number: ";
	cin >> number;

	//Find the sign bit
	//Add code here



	//Break apart the number in a whole and fraction components
	//Add code here


	//Generate binary equivalent of decimal number
	//Find the whole
	//Add code here

	
	//Add a decimal point to seperate whole and fraction
	//Add code here

	//Find the fraction
	//Add code here

	//Find the power
	//Add code here

	//Add bias to exponent
	//Add code here

	//Convert ther exponent to binary
	//Add code here


	//Find the mantissa
	//Add code here


	//Output the result
	cout << number << " = " << answer << endl;
	cout << "IEEE 754 format" << endl;
	cout << sign << " " << exponent << " " << mantissa << endl;
	cout << "Hit any key to continue";
	getch();
	return 0;
}

/*****************************************************************
** This function will fill an array with the decimal equivalent **
** of 1/2, 1/4, 1/8, 1/16 ....                                  **
**                                                              **
*****************************************************************/
void fillArray(double arr[])
{
	//Add code here

}

/*****************************************************************
** This function will convert a whole number into a binary      **
** number by performing successive division and saving the      **
** remainders in a sting                                        **
** Note: requires reversing the resultant string                **
*****************************************************************/
void convertWhole(int num, string &s)
{
	//Add code here

}

/*****************************************************************
** This function reverses a string that is given to it          **
**                                                              **
*****************************************************************/
string reverseString(string s)
{
	//Add code here

}

/*****************************************************************
** This function will generate the bit sequence for the         **
** fractional part of a decimal number                          **
**                                                              **
*****************************************************************/
void convertFraction(double num, string &s, double arr[])
{
	// num contains the fractional part of a number
	// &s is a reference parameter to the original string
	// arr[] contains successively smaller powers of 1/2
	//Add code here


}

//Sample Output
//Enter a floating point number: 37.876
//37.876 = 100101.11100000010000011000100100110111010010111100011000000
//IEEE 754 format
//0 10000000100 0010111100000010000011000100100110111010010111100011000000